//---------------------------------------------------------------------------

#include <vcl.h>
#include <iomanip>
#include<ctime>
#include<sstream>
#pragma hdrstop
#include <string>
#include "HistoryUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VirtualTrees"
#pragma resource "*.dfm"
using namespace std;
TMainForm *MainForm;
sqlite3* Database;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
	VirtualStringTree->NodeDataSize = sizeof(NodeStruct);
}
//---------------------------------------------------------------------------
//Функция для преобразования времени в стандартный формат
string ConvertTimestamp(__int64 timestamp)
{
	__int64 seconds_since_1601 = timestamp / 1000000;

	const time_t epoch_offset = -11644473600LL;

	time_t unix_timestamp = seconds_since_1601 + epoch_offset;

	tm *timeinfo = gmtime(&unix_timestamp);

	stringstream ss;
	ss << put_time(timeinfo, "%Y-%m-%d %H:%M:%S");
	return ss.str();
}
void StringTreeFilling (TVirtualStringTree * stringTreePtr)
{
	sqlite3_stmt *pStatement;
	stringTreePtr->Clear();
	int openResult = sqlite3_open16(MainForm->OpenHistoryDialog->FileName.w_str(), &Database);

	if(openResult == SQLITE_OK)
	{
		ShowMessage(L"Выбранная база данных открывается...");
	}
	else
	{
		ShowMessage(L"Выбранная база данных НЕ открыта :(");
	}

	int execResult = sqlite3_prepare_v2(Database,
									   "SELECT urls.id, urls.url, urls.title, urls.last_visit_time, urls.visit_count FROM urls",
										-1,
										&pStatement,
										NULL);
	if(execResult != SQLITE_OK)
	{
		const char *errormsg = sqlite3_errmsg(Database);
		ShowMessage(errormsg);
	}

	int stepResult = SQLITE_DONE;
	stringTreePtr->BeginUpdate();
	while(true)
	{
		PVirtualNode entryNode = stringTreePtr->AddChild(stringTreePtr->RootNode);
		NodeStruct *NodePtr = (NodeStruct * ) stringTreePtr->GetNodeData(entryNode);
		int stepResult = sqlite3_step(pStatement);
		if (stepResult != SQLITE_ROW)
		{
			break;
		}
		NodePtr->id = sqlite3_column_int64(pStatement, 0);
		NodePtr->url = UnicodeString(reinterpret_cast<const wchar_t*>(sqlite3_column_text16(pStatement, 1)));
		NodePtr->title = UnicodeString(reinterpret_cast<const wchar_t*>(sqlite3_column_text16(pStatement, 2)));
		NodePtr->last_visit_time = sqlite3_column_int64(pStatement, 3);
		NodePtr->visit_count = sqlite3_column_int64(pStatement, 4);
	}
	stringTreePtr->EndUpdate();
	sqlite3_finalize(pStatement);

}

void DeleteRecord (TVirtualStringTree * stringTreePtr)
{
	PVirtualNode selectedNode = stringTreePtr->FocusedNode;
	unsigned int selectNodeIndex = selectedNode->Index;
	sqlite3_stmt *pStatement;
	NodeStruct *DeleteRecordPtr = (NodeStruct*)stringTreePtr->GetNodeData(selectedNode);
	int execResult = sqlite3_prepare_v2(Database,
										"DELETE FROM urls WHERE id = ?;",
										-1,
										&pStatement,
										NULL);
	if(execResult == SQLITE_OK)
	{
		sqlite3_bind_int64(pStatement, 1, DeleteRecordPtr->id);
		sqlite3_step(pStatement);
		sqlite3_finalize(pStatement);
		stringTreePtr->DeleteNode(selectedNode);
	}
	else
	{
		const char *errormsg = sqlite3_errmsg(Database);
		ShowMessage(errormsg);
		sqlite3_finalize(pStatement);

	}
}

void __fastcall TMainForm::OpenHistoryButtonClick(TObject *Sender)
{
	if (OpenHistoryDialog->Execute())
	{
		HistoryFileLabel->Caption = OpenHistoryDialog->FileName;
		StringTreeFilling(VirtualStringTree);
	}
	else
	{
		ShowMessage("Ошибка при открытии файла");
	}
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::Text(TBaseVirtualTree *Sender, PVirtualNode Node, TColumnIndex Column,
		  TVSTTextType TextType, UnicodeString &CellText)
{
	  if (!Node) return;
	  NodeStruct *nodeDataPtr = (NodeStruct*)Sender->GetNodeData(Node);
	  {
		switch(Column)
		{
			case 0: CellText = nodeDataPtr->url; break;
			case 1: CellText = nodeDataPtr->title; break;
        }
	  }

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::DopInfo(TBaseVirtualTree *Sender, PVirtualNode Node)
{
	if (!Node) return;
	NodeStruct *InfoPtr = (NodeStruct*)Sender->GetNodeData(Node);
	infoLabel->Caption = "Последняя дата посещения: " + UnicodeString(ConvertTimestamp(InfoPtr->last_visit_time).c_str()) + ", Количество посещений: " + System::Sysutils::IntToStr((int)InfoPtr->visit_count);
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::DeleteRecordButtonClick(TObject *Sender)
{
	DeleteRecord(VirtualStringTree);
}
//---------------------------------------------------------------------------

