﻿// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.WorkerThread.pas' rev: 36.00 (Windows)

#ifndef Virtualtrees_WorkerthreadHPP
#define Virtualtrees_WorkerthreadHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <VirtualTrees.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Workerthread
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWorkerThread;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TWorkerThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	Virtualtrees::TBaseVirtualTree* FCurrentTree;
	System::Classes::TThreadList* FWaiterList;
	int FRefCount;
	System::NativeUInt FWorkEvent;
	__classmethod void __fastcall EnsureCreated();
	__classmethod void __fastcall Dispose(bool CanBlock);
	void __fastcall WaitForValidationTermination(Virtualtrees::TBaseVirtualTree* Tree);
	
protected:
	virtual void __fastcall Execute();
	
public:
	__fastcall TWorkerThread();
	__fastcall virtual ~TWorkerThread();
	__classmethod void __fastcall AddThreadReference();
	__classmethod void __fastcall ReleaseThreadReference(bool ACanBlock = false);
	__classmethod void __fastcall AddTree(Virtualtrees::TBaseVirtualTree* Tree);
	__classmethod void __fastcall RemoveTree(Virtualtrees::TBaseVirtualTree* pTree, bool pWaitForValidationTermination);
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Workerthread */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_WORKERTHREAD)
using namespace Virtualtrees::Workerthread;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_WorkerthreadHPP
