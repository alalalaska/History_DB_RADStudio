// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.pas' rev: 36.00 (Windows)

#ifndef VirtualtreesHPP
#define VirtualtreesHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.oleacc.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Winapi.ActiveX.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Printers.hpp>
#include <System.Types.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.Themes.hpp>
#include <Winapi.UxTheme.hpp>
#include <Winapi.ShlObj.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <VirtualTrees.Types.hpp>
#include <VirtualTrees.Colors.hpp>
#include <VirtualTrees.DragImage.hpp>
#include <VirtualTrees.Header.hpp>

//-- user supplied -----------------------------------------------------------
#include <objidl.h>
#include <oleidl.h>
#include <oleacc.h>

namespace Virtualtrees
{
//-- forward type declarations -----------------------------------------------
struct TCacheEntry;
struct TVTReference;
struct TVirtualNode;
struct TVTHeaderHitInfo;
struct THitInfo;
__interface DELPHIINTERFACE IVTDragManager;
typedef System::DelphiInterface<IVTDragManager> _di_IVTDragManager;
struct TVTHintData;
class DELPHICLASS TVirtualTreeHintWindow;
__interface DELPHIINTERFACE IVTEditLink;
typedef System::DelphiInterface<IVTEditLink> _di_IVTEditLink;
struct TVTImageInfo;
struct TVTPaintInfo;
class DELPHICLASS TClipboardFormats;
__interface DELPHIINTERFACE TVTGetNodeProc;
typedef System::DelphiInterface<TVTGetNodeProc> _di_TVTGetNodeProc;
struct TVTVirtualNodeEnumerator;
struct TVTVirtualNodeEnumeration;
class DELPHICLASS TBaseVirtualTree;
struct TVSTGetCellTextEventArgs;
class DELPHICLASS TCustomVirtualStringTree;
class DELPHICLASS TVirtualStringTree;
//-- type declarations -------------------------------------------------------
using System::Uitypes::TImageIndex;

using Vcl::Graphics::TCanvas;

using Virtualtrees::Types::TDimension;

using Virtualtrees::Types::TColumnIndex;

using Virtualtrees::Types::TColumnPosition;

using Virtualtrees::Types::EVirtualTreeError;

using Virtualtrees::Types::TAutoScrollInterval;

using Virtualtrees::Types::TVTScrollIncrement;

using Virtualtrees::Types::TFormatArray;

using Virtualtrees::Types::TFormatEtcArray;

using Virtualtrees::Types::TVTPaintOption;

using Virtualtrees::Types::TVTPaintOptions;

typedef Virtualtrees::Types::TVTAnimationOption TVTAnimateOption;

typedef Virtualtrees::Types::TVTAnimationOptions TVTAnimateOptions;

using Virtualtrees::Types::TVTAutoOption;

using Virtualtrees::Types::TVTAutoOptions;

using Virtualtrees::Types::TVTSelectionOption;

using Virtualtrees::Types::TVTSelectionOptions;

using Virtualtrees::Types::TVTEditOptions;

using Virtualtrees::Types::TVTMiscOption;

using Virtualtrees::Types::TVTMiscOptions;

using Virtualtrees::Types::TVTExportMode;

using Virtualtrees::Types::TVTStringOption;

using Virtualtrees::Types::TVTStringOptions;

using Virtualtrees::Types::TCustomVirtualTreeOptions;

using Virtualtrees::Types::TVirtualTreeOptions;

using Virtualtrees::Types::TTreeOptionsClass;

using Virtualtrees::Types::TCustomStringTreeOptions;

using Virtualtrees::Types::TStringTreeOptions;

using Virtualtrees::Types::TScrollBarStyle;

using Virtualtrees::Types::TScrollBarOptions;

using Virtualtrees::Types::TVTColumnOption;

using Virtualtrees::Types::TVTColumnOptions;

using Virtualtrees::Types::TVirtualTreeColumnStyle;

using Virtualtrees::Types::TSortDirection;

using Virtualtrees::Types::TCheckType;

using Virtualtrees::Types::TCheckState;

using Virtualtrees::Types::TVTDropMarkMode;

using Virtualtrees::Types::TScrollDirections;

using Virtualtrees::Header::TVirtualTreeColumn;

using Virtualtrees::Header::TVirtualTreeColumns;

using Virtualtrees::Header::TVirtualTreeColumnClass;

using Virtualtrees::Header::TColumnsArray;

using Virtualtrees::Header::TCardinalArray;

using Virtualtrees::Header::TIndexArray;

using Virtualtrees::Header::TVTHeader;

using Virtualtrees::Header::TVTHeaderClass;

using Virtualtrees::Header::TVTHeaderOption;

using Virtualtrees::Header::TVTHeaderOptions;

using Virtualtrees::Header::THeaderPaintInfo;

using Virtualtrees::Types::TVTHeaderColumnLayout;

using Virtualtrees::Header::TVTConstraintPercent;

using Virtualtrees::Types::TSmartAutoFitType;

using Virtualtrees::Header::TVTFixedAreaConstraints;

using Virtualtrees::Header::TVTHeaderStyle;

using Virtualtrees::Header::THeaderState;

using Virtualtrees::Header::THeaderStates;

using Virtualtrees::Colors::TVTColors;

enum DECLSPEC_DENUM TVirtualNodeState : unsigned char { vsInitialized, vsChecking, vsCutOrCopy, vsDisabled, vsDeleting, vsExpanded, vsHasChildren, vsVisible, vsSelected, vsOnFreeNodeCallRequired, vsAllChildrenHidden, vsReleaseCallOnUserDataRequired, vsMultiline, vsHeightMeasured, vsToggling, vsFiltered, vsInitializing };

typedef System::Set<TVirtualNodeState, TVirtualNodeState::vsInitialized, TVirtualNodeState::vsInitializing> TVirtualNodeStates;

enum DECLSPEC_DENUM TVirtualNodeInitState : unsigned char { ivsDisabled, ivsExpanded, ivsHasChildren, ivsMultiline, ivsSelected, ivsFiltered, ivsReInit };

typedef System::Set<TVirtualNodeInitState, TVirtualNodeInitState::ivsDisabled, TVirtualNodeInitState::ivsReInit> TVirtualNodeInitStates;

enum DECLSPEC_DENUM TVTHeaderHitPosition : unsigned char { hhiNoWhere, hhiOnColumn, hhiOnIcon, hhiOnCheckbox };

typedef System::Set<TVTHeaderHitPosition, TVTHeaderHitPosition::hhiNoWhere, TVTHeaderHitPosition::hhiOnCheckbox> TVTHeaderHitPositions;

enum DECLSPEC_DENUM THitPosition : unsigned char { hiAbove, hiBelow, hiNowhere, hiOnItem, hiOnItemButton, hiOnItemButtonExact, hiOnItemCheckbox, hiOnItemIndent, hiOnItemLabel, hiOnItemLeft, hiOnItemRight, hiOnNormalIcon, hiOnStateIcon, hiToLeft, hiToRight, hiUpperSplitter, hiLowerSplitter };

typedef System::Set<THitPosition, THitPosition::hiAbove, THitPosition::hiLowerSplitter> THitPositions;

enum DECLSPEC_DENUM TCheckImageKind : unsigned char { ckCustom, ckSystemDefault };

enum DECLSPEC_DENUM TVTNodeAttachMode : unsigned char { amNoWhere, amInsertBefore, amInsertAfter, amAddChildFirst, amAddChildLast };

enum DECLSPEC_DENUM TDropMode : unsigned char { dmNowhere, dmAbove, dmOnNode, dmBelow };

enum DECLSPEC_DENUM TDragOperation : unsigned char { doCopy, doMove, doLink };

typedef System::Set<TDragOperation, TDragOperation::doCopy, TDragOperation::doLink> TDragOperations;

enum DECLSPEC_DENUM TVTImageKind : unsigned char { ikNormal, ikSelected, ikState, ikOverlay };

enum DECLSPEC_DENUM TVTHintMode : unsigned char { hmDefault, hmHint, hmHintAndDefault, hmTooltip };

enum DECLSPEC_DENUM TVTTooltipLineBreakStyle : unsigned char { hlbDefault, hlbForceSingleLine, hlbForceMultiLine };

typedef System::Set<System::Uitypes::TMouseButton, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMouseButton::mbLeft), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMouseButton::mbMiddle)> TMouseButtons;

enum DECLSPEC_DENUM TItemEraseAction : unsigned char { eaColor, eaDefault, eaNone };

enum DECLSPEC_DENUM TVTOperationKind : unsigned char { okAutoFitColumns, okGetMaxColumnWidth, okSortNode, okSortTree, okExport, okExpand };

typedef System::Set<TVTOperationKind, TVTOperationKind::okAutoFitColumns, TVTOperationKind::okExpand> TVTOperationKinds;

enum DECLSPEC_DENUM TVTElement : unsigned char { ofsMargin, ofsToggleButton, ofsCheckBox, ofsStateImage, ofsImage, ofsLabel, ofsText, ofsRightOfText, ofsEndOfClientArea };

typedef System::StaticArray<int, 9> TVTOffsets;

_DECLARE_METACLASS(System::TMetaClass, TVirtualTreeClass);

typedef TVirtualNode *PVirtualNode;

struct DECLSPEC_DRECORD TCacheEntry
{
public:
	PVirtualNode Node;
	unsigned AbsoluteTop;
};


typedef System::DynamicArray<TCacheEntry> TCache;

typedef System::DynamicArray<PVirtualNode> TNodeArray;

typedef TVTReference *PVTReference;

struct DECLSPEC_DRECORD TVTReference
{
public:
	unsigned Process;
	TBaseVirtualTree* Tree;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TVirtualNode
{
	
private:
	struct DECLSPEC_DRECORD _TVirtualNode__1
	{
	};
	
	
	
public:
	unsigned Index;
	unsigned ChildCount;
	System::Word NodeHeight;
	TVirtualNodeStates States;
	System::Byte Align;
	TCheckState CheckState;
	TCheckType CheckType;
	System::Byte Dummy;
	unsigned TotalCount;
	unsigned TotalHeight;
	PVirtualNode Parent;
	PVirtualNode PrevSibling;
	PVirtualNode NextSibling;
	PVirtualNode FirstChild;
	PVirtualNode LastChild;
	
private:
	_TVirtualNode__1 Data;
	
public:
	bool __fastcall IsAssigned();
	void * __fastcall GetData()/* overload */;
	template<typename T> T __fastcall GetData()/* overload */;
	void __fastcall SetData(void * pUserData)/* overload */;
	template<typename T> void __fastcall SetData(T pUserData)/* overload */;
	void __fastcall SetData(const System::_di_IInterface pUserData)/* overload */;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TVTHeaderHitInfo
{
public:
	TDimension X;
	TDimension Y;
	System::Uitypes::TMouseButton Button;
	System::Classes::TShiftState Shift;
	TColumnIndex Column;
	TVTHeaderHitPositions HitPosition;
};


struct DECLSPEC_DRECORD THitInfo
{
public:
	PVirtualNode HitNode;
	THitPositions HitPositions;
	TColumnIndex HitColumn;
	System::Types::TPoint HitPoint;
};


__interface  INTERFACE_UUID("{C4B25559-14DA-446B-8901-0C879000EB16}") IVTDragManager  : public System::IInterface 
{
	virtual void __stdcall ForceDragLeave() = 0 ;
	virtual _di_IDataObject __stdcall GetDataObject() = 0 ;
	virtual TBaseVirtualTree* __stdcall GetDragSource() = 0 ;
	virtual bool __stdcall GetDropTargetHelperSupported() = 0 ;
	virtual bool __stdcall GetIsDropTarget() = 0 ;
	__property _di_IDataObject DataObject = {read=GetDataObject};
	__property TBaseVirtualTree* DragSource = {read=GetDragSource};
	__property bool DropTargetHelperSupported = {read=GetDropTargetHelperSupported};
	__property bool IsDropTarget = {read=GetIsDropTarget};
};

typedef TVTHintData *PVTHintData;

struct DECLSPEC_DRECORD TVTHintData
{
public:
	TBaseVirtualTree* Tree;
	PVirtualNode Node;
	TColumnIndex Column;
	System::Types::TRect HintRect;
	System::UnicodeString HintText;
	System::Classes::TBiDiMode BidiMode;
	System::Classes::TAlignment Alignment;
	TVTTooltipLineBreakStyle LineBreakStyle;
};


class PASCALIMPLEMENTATION TVirtualTreeHintWindow : public Vcl::Controls::THintWindow
{
	typedef Vcl::Controls::THintWindow inherited;
	
private:
	TVTHintData FHintData;
	TDimension FTextHeight;
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
	
public:
	virtual System::Types::TRect __fastcall CalcHintRect(TDimension MaxWidth, const System::UnicodeString AHint, void * AData);
	virtual bool __fastcall IsHintMsg(tagMSG &Msg);
public:
	/* THintWindow.Create */ inline __fastcall virtual TVirtualTreeHintWindow(System::Classes::TComponent* AOwner) : Vcl::Controls::THintWindow(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TVirtualTreeHintWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TVirtualTreeHintWindow(HWND ParentWindow) : Vcl::Controls::THintWindow(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TChangeReason : unsigned char { crIgnore, crAccumulated, crChildAdded, crChildDeleted, crNodeAdded, crNodeCopied, crNodeMoved };

__interface  INTERFACE_UUID("{2BE3EAFA-5ACB-45B4-9D9A-B58BCC496E17}") IVTEditLink  : public System::IInterface 
{
	virtual bool __stdcall BeginEdit() = 0 ;
	virtual bool __stdcall CancelEdit() = 0 ;
	virtual bool __stdcall EndEdit() = 0 ;
	virtual bool __stdcall PrepareEdit(TBaseVirtualTree* Tree, PVirtualNode Node, TColumnIndex Column) = 0 ;
	virtual void __stdcall ProcessMessage(Winapi::Messages::TMessage &Message) = 0 ;
	virtual void __stdcall SetBounds(const System::Types::TRect &R) = 0 ;
};

enum DECLSPEC_DENUM TVTUpdateState : unsigned char { usBegin, usBeginSynch, usSynch, usUpdate, usEnd, usEndSynch };

enum DECLSPEC_DENUM Virtualtrees__2 : unsigned char { hpeBackground, hpeDropMark, hpeHeaderGlyph, hpeSortGlyph, hpeText, hpeOverlay };

typedef System::Set<Virtualtrees__2, Virtualtrees__2::hpeBackground, Virtualtrees__2::hpeOverlay> THeaderPaintElements;

enum DECLSPEC_DENUM Virtualtrees__3 : unsigned char { tsChangePending, tsCheckPropagation, tsCollapsing, tsToggleFocusedSelection, tsClearPending, tsClearOnNewSelection, tsClipboardFlushing, tsCopyPending, tsCutPending, tsDrawSelPending, tsDrawSelecting, tsEditing, tsEditPending, tsExpanding, tsNodeHeightTracking, tsNodeHeightTrackPending, tsHint, tsInAnimation, tsIncrementalSearching, tsIncrementalSearchPending, tsIterating, tsLeftButtonDown, tsLeftDblClick, tsMiddleButtonDown, tsMiddleDblClick, tsNeedRootCountUpdate, tsOLEDragging, tsOLEDragPending, tsPainting, tsRightButtonDown, tsRightDblClick, tsPopupMenuShown, tsScrolling, tsScrollPending, tsSizing, tsStopValidation, tsStructureChangePending, tsSynchMode, tsThumbTracking, tsToggling, 
	tsUpdateHiddenChildrenNeeded, tsUpdating, tsUseCache, tsUserDragObject, tsUseThemes, tsValidating, tsPreviouslySelectedLocked, tsValidationNeeded, tsVCLDragging, tsVCLDragPending, tsVCLDragFinished, tsWheelPanning, tsWheelScrolling, tsWindowCreating, tsUseExplorerTheme };

typedef System::Set<Virtualtrees__3, Virtualtrees__3::tsChangePending, Virtualtrees__3::tsUseExplorerTheme> TVirtualTreeStates;

enum DECLSPEC_DENUM TVTDragImageKind : unsigned char { diComplete, diMainColumnOnly, diNoImage };

enum DECLSPEC_DENUM TVTDragType : unsigned char { dtOLE, dtVCL };

enum DECLSPEC_DENUM TVTInternalPaintOption : unsigned char { poBackground, poColumnColor, poDrawFocusRect, poDrawSelection, poDrawDropMark, poGridLines, poMainOnly, poSelectedOnly, poUnbuffered };

typedef System::Set<TVTInternalPaintOption, TVTInternalPaintOption::poBackground, TVTInternalPaintOption::poUnbuffered> TVTInternalPaintOptions;

enum DECLSPEC_DENUM TVTLineStyle : unsigned char { lsCustomStyle, lsDotted, lsSolid };

enum DECLSPEC_DENUM TVTLineType : unsigned char { ltNone, ltBottomRight, ltTopDown, ltTopDownRight, ltRight, ltTopRight, ltLeft, ltLeftBottom };

enum DECLSPEC_DENUM TVTLineMode : unsigned char { lmNormal, lmBands };

typedef System::DynamicArray<TVTLineType> TLineImage;

enum DECLSPEC_DENUM TVTExportType : unsigned char { etNone, etRTF, etHTML, etText, etExcel, etWord, etPDF, etPrinter, etCSV, etCustom };

typedef void __fastcall (__closure *TVTNodeExportEvent)(TBaseVirtualTree* Sender, TVTExportType aExportType, PVirtualNode Node);

typedef void __fastcall (__closure *TVTColumnExportEvent)(TBaseVirtualTree* Sender, TVTExportType aExportType, TVirtualTreeColumn* Column);

typedef void __fastcall (__closure *TVTTreeExportEvent)(TBaseVirtualTree* Sender, TVTExportType aExportType);

struct DECLSPEC_DRECORD TVTImageInfo
{
public:
	TImageIndex Index;
	TDimension XPos;
	TDimension YPos;
	bool Ghosted;
	Vcl::Imglist::TCustomImageList* Images;
	bool __fastcall Equals(const TVTImageInfo &pImageInfo2);
};


enum DECLSPEC_DENUM TVTImageInfoIndex : unsigned char { iiNormal, iiState, iiCheck, iiOverlay };

enum DECLSPEC_DENUM Virtualtrees__4 : unsigned char { suoRepaintHeader, suoRepaintScrollBars, suoScrollClientArea, suoUpdateNCArea };

typedef System::Set<Virtualtrees__4, Virtualtrees__4::suoRepaintHeader, Virtualtrees__4::suoUpdateNCArea> TScrollUpdateOptions;

enum DECLSPEC_DENUM TVTButtonStyle : unsigned char { bsRectangle, bsTriangle };

enum DECLSPEC_DENUM TVTButtonFillMode : unsigned char { fmTreeColor, fmWindowColor, fmShaded, fmTransparent };

struct DECLSPEC_DRECORD TVTPaintInfo
{
public:
	TCanvas* Canvas;
	TVTInternalPaintOptions PaintOptions;
	PVirtualNode Node;
	TColumnIndex Column;
	TColumnPosition Position;
	System::Types::TRect CellRect;
	System::Types::TRect ContentRect;
	TDimension NodeWidth;
	System::Classes::TAlignment Alignment;
	System::Classes::TAlignment CaptionAlignment;
	System::Classes::TBiDiMode BidiMode;
	System::Types::TPoint BrushOrigin;
	System::StaticArray<TVTImageInfo, 4> ImageInfo;
	TVTOffsets Offsets;
	TDimension VAlign;
	void __fastcall AdjustImageCoordinates();
};


typedef bool __fastcall (__closure *TVTAnimationCallback)(int Step, int StepSize, void * Data);

enum DECLSPEC_DENUM TVTIncrementalSearch : unsigned char { isAll, isNone, isInitializedOnly, isVisibleOnly };

enum DECLSPEC_DENUM TVTSearchDirection : unsigned char { sdForward, sdBackward };

enum DECLSPEC_DENUM TVTSearchStart : unsigned char { ssAlwaysStartOver, ssLastHit, ssFocusedNode };

enum DECLSPEC_DENUM TVTNodeAlignment : unsigned char { naFromBottom, naFromTop, naProportional };

enum DECLSPEC_DENUM TVTDrawSelectionMode : unsigned char { smDottedRectangle, smBlendedRectangle };

enum DECLSPEC_DENUM TVTCellPaintMode : unsigned char { cpmPaint, cpmGetContentMargin };

enum DECLSPEC_DENUM TVTCellContentMarginType : unsigned char { ccmtAllSides, ccmtTopLeftOnly, ccmtBottomRightOnly };

class PASCALIMPLEMENTATION TClipboardFormats : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	TBaseVirtualTree* FOwner;
	
public:
	__fastcall virtual TClipboardFormats(TBaseVirtualTree* AOwner);
	virtual int __fastcall Add(const System::UnicodeString S);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S);
	__property TBaseVirtualTree* Owner = {read=FOwner};
public:
	/* TStringList.Destroy */ inline __fastcall virtual ~TClipboardFormats() { }
	
};


__interface TVTGetNodeProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(TBaseVirtualTree* Sender, PVirtualNode Node, void * Data, bool &Abort) = 0 ;
};

typedef void __fastcall (__closure *TVTChangingEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, bool &Allowed);

typedef void __fastcall (__closure *TVTCheckChangingEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TCheckState &NewState, bool &Allowed);

typedef void __fastcall (__closure *TVTChangeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTStructureChangeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TChangeReason Reason);

typedef void __fastcall (__closure *TVTEditCancelEvent)(TBaseVirtualTree* Sender, TColumnIndex Column);

typedef void __fastcall (__closure *TVTEditChangingEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, bool &Allowed);

typedef void __fastcall (__closure *TVTEditChangeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column);

typedef void __fastcall (__closure *TVTFreeNodeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTFocusChangingEvent)(TBaseVirtualTree* Sender, PVirtualNode OldNode, PVirtualNode NewNode, TColumnIndex OldColumn, TColumnIndex NewColumn, bool &Allowed);

typedef void __fastcall (__closure *TVTFocusChangeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column);

typedef void __fastcall (__closure *TVTAddToSelectionEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTRemoveFromSelectionEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTGetImageEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column, bool &Ghosted, TImageIndex &ImageIndex);

typedef void __fastcall (__closure *TVTGetImageExEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column, bool &Ghosted, TImageIndex &ImageIndex, Vcl::Imglist::TCustomImageList* &ImageList);

typedef void __fastcall (__closure *TVTGetImageTextEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column, System::UnicodeString &ImageText);

typedef void __fastcall (__closure *TVTHotNodeChangeEvent)(TBaseVirtualTree* Sender, PVirtualNode OldNode, PVirtualNode NewNode);

typedef void __fastcall (__closure *TVTInitChildrenEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, unsigned &ChildCount);

typedef void __fastcall (__closure *TVTInitNodeEvent)(TBaseVirtualTree* Sender, PVirtualNode ParentNode, PVirtualNode Node, TVirtualNodeInitStates &InitialStates);

typedef void __fastcall (__closure *TVTPopupEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, const System::Types::TPoint &P, bool &AskParent, Vcl::Menus::TPopupMenu* &PopupMenu);

typedef void __fastcall (__closure *TVTHelpContextEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, int &HelpContext);

typedef void __fastcall (__closure *TVTCreateEditorEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, /* out */ _di_IVTEditLink &EditLink);

typedef void __fastcall (__closure *TVTSaveTreeEvent)(TBaseVirtualTree* Sender, System::Classes::TStream* Stream);

typedef void __fastcall (__closure *TVTSaveNodeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, System::Classes::TStream* Stream);

typedef void __fastcall (__closure *TVTBeforeGetCheckStateEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTHeaderAddPopupItemEvent)(System::TObject* const Sender, const TColumnIndex Column, Virtualtrees::Types::TAddPopupItemType &Cmd);

typedef void __fastcall (__closure *TVTHeaderClickEvent)(TVTHeader* Sender, const TVTHeaderHitInfo &HitInfo);

typedef void __fastcall (__closure *TVTHeaderMouseEvent)(TVTHeader* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);

typedef void __fastcall (__closure *TVTHeaderMouseMoveEvent)(TVTHeader* Sender, System::Classes::TShiftState Shift, int X, int Y);

typedef void __fastcall (__closure *TVTBeforeHeaderHeightTrackingEvent)(TVTHeader* Sender, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TVTAfterHeaderHeightTrackingEvent)(TVTHeader* Sender);

typedef void __fastcall (__closure *TVTHeaderHeightTrackingEvent)(TVTHeader* Sender, System::Types::TPoint &P, System::Classes::TShiftState Shift, bool &Allowed);

typedef void __fastcall (__closure *TVTHeaderHeightDblClickResizeEvent)(TVTHeader* Sender, System::Types::TPoint &P, System::Classes::TShiftState Shift, bool &Allowed);

typedef void __fastcall (__closure *TVTHeaderNotifyEvent)(TVTHeader* Sender, TColumnIndex Column);

typedef void __fastcall (__closure *TVTHeaderDraggingEvent)(TVTHeader* Sender, TColumnIndex Column, bool &Allowed);

typedef void __fastcall (__closure *TVTHeaderDraggedEvent)(TVTHeader* Sender, TColumnIndex Column, int OldPosition);

typedef void __fastcall (__closure *TVTHeaderDraggedOutEvent)(TVTHeader* Sender, TColumnIndex Column, const System::Types::TPoint &DropPosition);

typedef void __fastcall (__closure *TVTHeaderPaintEvent)(TVTHeader* Sender, TCanvas* HeaderCanvas, TVirtualTreeColumn* Column, const System::Types::TRect &R, bool Hover, bool Pressed, TVTDropMarkMode DropMark);

typedef void __fastcall (__closure *TVTHeaderPaintQueryElementsEvent)(TVTHeader* Sender, THeaderPaintInfo &PaintInfo, THeaderPaintElements &Elements);

typedef void __fastcall (__closure *TVTAdvancedHeaderPaintEvent)(TVTHeader* Sender, THeaderPaintInfo &PaintInfo, const THeaderPaintElements Elements);

typedef void __fastcall (__closure *TVTBeforeAutoFitColumnsEvent)(TVTHeader* Sender, TSmartAutoFitType &SmartAutoFitType);

typedef void __fastcall (__closure *TVTBeforeAutoFitColumnEvent)(TVTHeader* Sender, TColumnIndex Column, TSmartAutoFitType &SmartAutoFitType, bool &Allowed);

typedef void __fastcall (__closure *TVTAfterAutoFitColumnEvent)(TVTHeader* Sender, TColumnIndex Column);

typedef void __fastcall (__closure *TVTAfterAutoFitColumnsEvent)(TVTHeader* Sender);

typedef void __fastcall (__closure *TVTColumnClickEvent)(TBaseVirtualTree* Sender, TColumnIndex Column, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TVTColumnDblClickEvent)(TBaseVirtualTree* Sender, TColumnIndex Column, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TColumnChangeEvent)(TBaseVirtualTree* const Sender, const TColumnIndex Column, bool Visible);

typedef void __fastcall (__closure *TVTColumnWidthDblClickResizeEvent)(TVTHeader* Sender, TColumnIndex Column, System::Classes::TShiftState Shift, const System::Types::TPoint &P, bool &Allowed);

typedef void __fastcall (__closure *TVTBeforeColumnWidthTrackingEvent)(TVTHeader* Sender, TColumnIndex Column, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TVTAfterColumnWidthTrackingEvent)(TVTHeader* Sender, TColumnIndex Column);

typedef void __fastcall (__closure *TVTColumnWidthTrackingEvent)(TVTHeader* Sender, TColumnIndex Column, System::Classes::TShiftState Shift, System::Types::TPoint &TrackPoint, const System::Types::TPoint &P, bool &Allowed);

typedef void __fastcall (__closure *TVTGetHeaderCursorEvent)(TVTHeader* Sender, HICON &Cursor);

typedef void __fastcall (__closure *TVTBeforeGetMaxColumnWidthEvent)(TVTHeader* Sender, TColumnIndex Column, bool &UseSmartColumnWidth);

typedef void __fastcall (__closure *TVTAfterGetMaxColumnWidthEvent)(TVTHeader* Sender, TColumnIndex Column, int &MaxWidth);

typedef void __fastcall (__closure *TVTCanSplitterResizeColumnEvent)(TVTHeader* Sender, const System::Types::TPoint &P, TColumnIndex Column, bool &Allowed);

typedef void __fastcall (__closure *TVTCanSplitterResizeHeaderEvent)(TVTHeader* Sender, const System::Types::TPoint &P, bool &Allowed);

typedef void __fastcall (__closure *TVTNodeMovedEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTNodeMovingEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, PVirtualNode Target, bool &Allowed);

typedef void __fastcall (__closure *TVTNodeCopiedEvent)(TBaseVirtualTree* Sender, PVirtualNode Node);

typedef void __fastcall (__closure *TVTNodeCopyingEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, PVirtualNode Target, bool &Allowed);

typedef void __fastcall (__closure *TVTNodeClickEvent)(TBaseVirtualTree* Sender, const THitInfo &HitInfo);

typedef void __fastcall (__closure *TVTNodeHeightTrackingEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, System::Classes::TShiftState Shift, System::Types::TPoint &TrackPoint, const System::Types::TPoint &P, bool &Allowed);

typedef void __fastcall (__closure *TVTNodeHeightDblClickResizeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, System::Classes::TShiftState Shift, const System::Types::TPoint &P, bool &Allowed);

typedef void __fastcall (__closure *TVTCanSplitterResizeNodeEvent)(TBaseVirtualTree* Sender, const System::Types::TPoint &P, PVirtualNode Node, TColumnIndex Column, bool &Allowed);

typedef void __fastcall (__closure *TVTCreateDragManagerEvent)(TBaseVirtualTree* Sender, /* out */ _di_IVTDragManager &DragManager);

typedef void __fastcall (__closure *TVTCreateDataObjectEvent)(TBaseVirtualTree* Sender, /* out */ _di_IDataObject &IDataObject);

typedef void __fastcall (__closure *TVTDragAllowedEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, bool &Allowed);

typedef void __fastcall (__closure *TVTDragOverEvent)(TBaseVirtualTree* Sender, System::TObject* Source, System::Classes::TShiftState Shift, System::Uitypes::TDragState State, const System::Types::TPoint &Pt, TDropMode Mode, int &Effect, bool &Accept);

typedef void __fastcall (__closure *TVTDragDropEvent)(TBaseVirtualTree* Sender, System::TObject* Source, _di_IDataObject DataObject, TFormatArray Formats, System::Classes::TShiftState Shift, const System::Types::TPoint &Pt, int &Effect, TDropMode Mode);

typedef void __fastcall (__closure *TVTRenderOLEDataEvent)(TBaseVirtualTree* Sender, const Winapi::Activex::TFormatEtc &FormatEtcIn, /* out */ Winapi::Activex::TStgMedium &Medium, bool ForClipboard, HRESULT &Result);

typedef void __fastcall (__closure *TVTGetUserClipboardFormatsEvent)(TBaseVirtualTree* Sender, TFormatEtcArray &Formats);

typedef void __fastcall (__closure *TVTBeforeItemEraseEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, const System::Types::TRect &ItemRect, System::Uitypes::TColor &ItemColor, TItemEraseAction &EraseAction);

typedef void __fastcall (__closure *TVTAfterItemEraseEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, const System::Types::TRect &ItemRect);

typedef void __fastcall (__closure *TVTBeforeItemPaintEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, const System::Types::TRect &ItemRect, bool &CustomDraw);

typedef void __fastcall (__closure *TVTAfterItemPaintEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, const System::Types::TRect &ItemRect);

typedef void __fastcall (__closure *TVTBeforeCellPaintEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, TColumnIndex Column, TVTCellPaintMode CellPaintMode, const System::Types::TRect &CellRect, System::Types::TRect &ContentRect);

typedef void __fastcall (__closure *TVTAfterCellPaintEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, TColumnIndex Column, const System::Types::TRect &CellRect);

typedef void __fastcall (__closure *TVTPaintEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas);

typedef void __fastcall (__closure *TVTBackgroundPaintEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, const System::Types::TRect &R, bool &Handled);

typedef void __fastcall (__closure *TVTGetLineStyleEvent)(TBaseVirtualTree* Sender, void * &Bits);

typedef void __fastcall (__closure *TVTMeasureItemEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, int &NodeHeight);

typedef void __fastcall (__closure *TVTPrepareButtonImagesEvent)(TBaseVirtualTree* Sender, Vcl::Graphics::TBitmap* const APlusBM, Vcl::Graphics::TBitmap* const APlusHotBM, Vcl::Graphics::TBitmap* const APlusSelectedHotBM, Vcl::Graphics::TBitmap* const AMinusBM, Vcl::Graphics::TBitmap* const AMinusHotBM, Vcl::Graphics::TBitmap* const AMinusSelectedHotBM, System::Types::TSize &ASize);

typedef void __fastcall (__closure *TVTCompareEvent)(TBaseVirtualTree* Sender, PVirtualNode Node1, PVirtualNode Node2, TColumnIndex Column, int &Result);

typedef void __fastcall (__closure *TVTIncrementalSearchEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, const System::UnicodeString SearchText, int &Result);

typedef void __fastcall (__closure *TVTOperationEvent)(TBaseVirtualTree* Sender, TVTOperationKind OperationKind);

enum DECLSPEC_DENUM TVTHintKind : unsigned char { vhkText, vhkOwnerDraw };

typedef void __fastcall (__closure *TVTHintKindEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, TVTHintKind &Kind);

typedef void __fastcall (__closure *TVTDrawHintEvent)(TBaseVirtualTree* Sender, TCanvas* HintCanvas, PVirtualNode Node, const System::Types::TRect &R, TColumnIndex Column);

typedef void __fastcall (__closure *TVTGetHintSizeEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, System::Types::TRect &R);

typedef void __fastcall (__closure *TVTBeforeDrawLineImageEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, int Level, int &PosX);

typedef void __fastcall (__closure *TVTGetNodeDataSizeEvent)(TBaseVirtualTree* Sender, int &NodeDataSize);

typedef void __fastcall (__closure *TVTKeyActionEvent)(TBaseVirtualTree* Sender, System::Word &CharCode, System::Classes::TShiftState &Shift, bool &DoDefault);

typedef void __fastcall (__closure *TVTScrollEvent)(TBaseVirtualTree* Sender, int DeltaX, int DeltaY);

typedef void __fastcall (__closure *TVTUpdatingEvent)(TBaseVirtualTree* Sender, TVTUpdateState State);

typedef void __fastcall (__closure *TVTGetCursorEvent)(TBaseVirtualTree* Sender, System::Uitypes::TCursor &Cursor);

typedef void __fastcall (__closure *TVTStateChangeEvent)(TBaseVirtualTree* Sender, const TVirtualTreeStates &Enter, const TVirtualTreeStates &Leave);

typedef void __fastcall (__closure *TVTGetCellIsEmptyEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, bool &IsEmpty);

typedef void __fastcall (__closure *TVTScrollBarShowEvent)(TBaseVirtualTree* Sender, int Bar, bool Show);

typedef PVirtualNode __fastcall (__closure *TGetFirstNodeProc)(void);

typedef PVirtualNode __fastcall (__closure *TGetNextNodeProc)(PVirtualNode Node, bool ConsiderChildrenAbove/* = false*/);

enum DECLSPEC_DENUM TVZVirtualNodeEnumerationMode : unsigned char { vneAll, vneChecked, vneChild, vneCutCopy, vneInitialized, vneLeaf, vneLevel, vneNoInit, vneSelected, vneVisible, vneVisibleChild, vneVisibleNoInitChild, vneVisibleNoInit };

typedef TVTVirtualNodeEnumeration *PVTVirtualNodeEnumeration;

struct DECLSPEC_DRECORD TVTVirtualNodeEnumerator
{
private:
	PVirtualNode FNode;
	bool FCanMoveNext;
	PVTVirtualNodeEnumeration FEnumeration;
	PVirtualNode __fastcall GetCurrent();
	
public:
	bool __fastcall MoveNext();
	__property PVirtualNode Current = {read=GetCurrent};
};


struct DECLSPEC_DRECORD TVTVirtualNodeEnumeration
{
private:
	TVZVirtualNodeEnumerationMode FMode;
	TBaseVirtualTree* FTree;
	bool FConsiderChildrenAbove;
	PVirtualNode FNode;
	unsigned FNodeLevel;
	TCheckState FState;
	bool FIncludeFiltered;
	
public:
	TVTVirtualNodeEnumerator __fastcall GetEnumerator();
	
private:
	PVirtualNode __fastcall GetNext(PVirtualNode Node);
};


class PASCALIMPLEMENTATION TBaseVirtualTree : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	unsigned FTotalInternalDataSize;
	Vcl::Forms::TBorderStyle FBorderStyle;
	TVTHeader* FHeader;
	PVirtualNode FRoot;
	unsigned FDefaultNodeHeight;
	unsigned FIndent;
	TCustomVirtualTreeOptions* FOptions;
	unsigned FUpdateCount;
	unsigned FSynchUpdateCount;
	int FNodeDataSize;
	TVirtualTreeStates FStates;
	PVirtualNode FLastSelected;
	PVirtualNode FFocusedNode;
	TColumnIndex FEditColumn;
	TColumnIndex FFocusedColumn;
	System::Types::TPoint FHeightTrackPoint;
	PVirtualNode FHeightTrackNode;
	TColumnIndex FHeightTrackColumn;
	TScrollDirections FScrollDirections;
	TChangeReason FLastStructureChangeReason;
	PVirtualNode FLastStructureChangeNode;
	PVirtualNode FLastChangedNode;
	PVirtualNode FCurrentHotNode;
	TColumnIndex FCurrentHotColumn;
	bool FHotNodeButtonHit;
	System::Types::TRect FLastSelRect;
	System::Types::TRect FNewSelRect;
	System::Uitypes::TCursor FHotCursor;
	THitInfo FLastHitInfo;
	TVTHintMode FHintMode;
	TVTHintData FHintData;
	unsigned FChangeDelay;
	unsigned FEditDelay;
	TCache FPositionCache;
	unsigned FVisibleCount;
	unsigned FStartIndex;
	TNodeArray FSelection;
	int FSelectionCount;
	bool FSelectionLocked;
	PVirtualNode FRangeAnchor;
	unsigned FCheckPropagationCount;
	int FLastSelectionLevel;
	System::Classes::TShiftState FDrawSelShiftState;
	_di_IVTEditLink FEditLink;
	TNodeArray FTempNodeCache;
	unsigned FTempNodeCount;
	Vcl::Graphics::TPicture* FBackground;
	bool FBackgroundImageTransparent;
	int FMargin;
	int FTextMargin;
	int FBackgroundOffsetX;
	int FBackgroundOffsetY;
	unsigned FAnimationDuration;
	bool FWantTabs;
	TVTNodeAlignment FNodeAlignment;
	System::Types::TRect FHeaderRect;
	System::Types::TRect FLastHintRect;
	System::Types::TRect FUpdateRect;
	System::UnicodeString FEmptyListMessage;
	Vcl::Graphics::TBitmap* FPlusBM;
	Vcl::Graphics::TBitmap* FMinusBM;
	Vcl::Graphics::TBitmap* FHotPlusBM;
	Vcl::Graphics::TBitmap* FHotMinusBM;
	Vcl::Graphics::TBitmap* FSelectedHotPlusBM;
	Vcl::Graphics::TBitmap* FSelectedHotMinusBM;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TCustomImageList* FStateImages;
	Vcl::Imglist::TCustomImageList* FCustomCheckImages;
	TCheckImageKind FCheckImageKind;
	Vcl::Imglist::TCustomImageList* FCheckImages;
	int FImagesMargin;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TChangeLink* FStateChangeLink;
	Vcl::Imglist::TChangeLink* FCustomCheckChangeLink;
	System::Classes::TNotifyEvent FOldFontChange;
	TVTColors* FColors;
	TVTButtonStyle FButtonStyle;
	TVTButtonFillMode FButtonFillMode;
	TVTLineStyle FLineStyle;
	TVTLineMode FLineMode;
	HBRUSH FDottedBrush;
	unsigned FSelectionCurveRadius;
	System::Byte FSelectionBlendFactor;
	TVTDrawSelectionMode FDrawSelectionMode;
	System::Classes::TAlignment FAlignment;
	TVTDragImageKind FDragImageKind;
	TDragOperations FDragOperations;
	int FDragThreshold;
	_di_IVTDragManager FDragManager;
	PVirtualNode FDropTargetNode;
	TDropMode FLastDropMode;
	TNodeArray FDragSelection;
	int FLastDragEffect;
	TVTDragType FDragType;
	Virtualtrees::Dragimage::TVTDragImage* FDragImage;
	int FDragWidth;
	int FDragHeight;
	TClipboardFormats* FClipboardFormats;
	PVirtualNode FLastVCLDragTarget;
	int FVCLDragEffect;
	TScrollBarOptions* FScrollBarOptions;
	TAutoScrollInterval FAutoScrollInterval;
	unsigned FAutoScrollDelay;
	unsigned FAutoExpandDelay;
	int FOffsetX;
	int FOffsetY;
	int FEffectiveOffsetX;
	unsigned FRangeX;
	unsigned FRangeY;
	unsigned FBottomSpace;
	TVTNodeAttachMode FDefaultPasteMode;
	unsigned FDragScrollStart;
	TVTIncrementalSearch FIncrementalSearch;
	unsigned FSearchTimeout;
	System::UnicodeString FSearchBuffer;
	PVirtualNode FLastSearchNode;
	TVTSearchDirection FSearchDirection;
	TVTSearchStart FSearchStart;
	HWND FPanningWindow;
	HICON FPanningCursor;
	Vcl::Graphics::TBitmap* FPanningImage;
	System::Types::TPoint FLastClickPos;
	unsigned FOperationCount;
	bool FOperationCanceled;
	bool FChangingTheme;
	PVirtualNode FNextNodeToSelect;
	_di_IAccessible FAccessible;
	_di_IAccessible FAccessibleItem;
	System::UnicodeString FAccessibleName;
	TVTNodeExportEvent FOnBeforeNodeExport;
	TVTNodeExportEvent FOnNodeExport;
	TVTNodeExportEvent FOnAfterNodeExport;
	TVTColumnExportEvent FOnBeforeColumnExport;
	TVTColumnExportEvent FOnColumnExport;
	TVTColumnExportEvent FOnAfterColumnExport;
	TVTTreeExportEvent FOnBeforeTreeExport;
	TVTTreeExportEvent FOnAfterTreeExport;
	TVTTreeExportEvent FOnBeforeHeaderExport;
	TVTTreeExportEvent FOnAfterHeaderExport;
	TVTChangeEvent FOnChange;
	TVTStructureChangeEvent FOnStructureChange;
	TVTInitChildrenEvent FOnInitChildren;
	TVTInitNodeEvent FOnInitNode;
	TVTFreeNodeEvent FOnFreeNode;
	TVTGetImageEvent FOnGetImage;
	TVTGetImageExEvent FOnGetImageEx;
	TVTGetImageTextEvent FOnGetImageText;
	TVTHotNodeChangeEvent FOnHotChange;
	TVTChangingEvent FOnExpanding;
	TVTChangingEvent FOnCollapsing;
	TVTCheckChangingEvent FOnChecking;
	TVTChangeEvent FOnExpanded;
	TVTChangeEvent FOnCollapsed;
	TVTChangeEvent FOnChecked;
	TVTChangeEvent FOnResetNode;
	TVTNodeMovingEvent FOnNodeMoving;
	TVTNodeMovedEvent FOnNodeMoved;
	TVTNodeCopyingEvent FOnNodeCopying;
	TVTNodeClickEvent FOnNodeClick;
	TVTNodeClickEvent FOnNodeDblClick;
	TVTCanSplitterResizeNodeEvent FOnCanSplitterResizeNode;
	TVTNodeHeightTrackingEvent FOnNodeHeightTracking;
	TVTNodeHeightDblClickResizeEvent FOnNodeHeightDblClickResize;
	TVTNodeCopiedEvent FOnNodeCopied;
	TVTEditChangingEvent FOnEditing;
	TVTEditCancelEvent FOnEditCancelled;
	TVTEditChangeEvent FOnEdited;
	TVTFocusChangingEvent FOnFocusChanging;
	TVTFocusChangeEvent FOnFocusChanged;
	TVTAddToSelectionEvent FOnAddToSelection;
	TVTRemoveFromSelectionEvent FOnRemoveFromSelection;
	TVTPopupEvent FOnGetPopupMenu;
	TVTHelpContextEvent FOnGetHelpContext;
	TVTCreateEditorEvent FOnCreateEditor;
	TVTSaveNodeEvent FOnLoadNode;
	TVTSaveNodeEvent FOnSaveNode;
	TVTSaveTreeEvent FOnLoadTree;
	TVTSaveTreeEvent FOnSaveTree;
	TVTAfterAutoFitColumnEvent FOnAfterAutoFitColumn;
	TVTAfterAutoFitColumnsEvent FOnAfterAutoFitColumns;
	TVTBeforeAutoFitColumnsEvent FOnBeforeAutoFitColumns;
	TVTBeforeAutoFitColumnEvent FOnBeforeAutoFitColumn;
	TVTHeaderAddPopupItemEvent FOnHeaderAddPopupItem;
	TVTHeaderClickEvent FOnHeaderClick;
	TVTHeaderClickEvent FOnHeaderDblClick;
	TVTAfterHeaderHeightTrackingEvent FOnAfterHeaderHeightTracking;
	TVTBeforeHeaderHeightTrackingEvent FOnBeforeHeaderHeightTracking;
	TVTHeaderHeightTrackingEvent FOnHeaderHeightTracking;
	TVTHeaderHeightDblClickResizeEvent FOnHeaderHeightDblClickResize;
	TVTHeaderMouseEvent FOnHeaderMouseDown;
	TVTHeaderMouseEvent FOnHeaderMouseUp;
	TVTHeaderMouseMoveEvent FOnHeaderMouseMove;
	TVTAfterGetMaxColumnWidthEvent FOnAfterGetMaxColumnWidth;
	TVTBeforeGetMaxColumnWidthEvent FOnBeforeGetMaxColumnWidth;
	TVTColumnClickEvent FOnColumnClick;
	TVTColumnDblClickEvent FOnColumnDblClick;
	TVTHeaderNotifyEvent FOnColumnResize;
	TColumnChangeEvent fOnColumnVisibilityChanged;
	TVTColumnWidthDblClickResizeEvent FOnColumnWidthDblClickResize;
	TVTAfterColumnWidthTrackingEvent FOnAfterColumnWidthTracking;
	TVTBeforeColumnWidthTrackingEvent FOnBeforeColumnWidthTracking;
	TVTColumnWidthTrackingEvent FOnColumnWidthTracking;
	TVTGetHeaderCursorEvent FOnGetHeaderCursor;
	TVTCanSplitterResizeColumnEvent FOnCanSplitterResizeColumn;
	TVTCanSplitterResizeHeaderEvent FOnCanSplitterResizeHeader;
	TVTPaintEvent FOnAfterPaint;
	TVTPaintEvent FOnBeforePaint;
	TVTAfterItemPaintEvent FOnAfterItemPaint;
	TVTBeforeItemPaintEvent FOnBeforeItemPaint;
	TVTBeforeItemEraseEvent FOnBeforeItemErase;
	TVTAfterItemEraseEvent FOnAfterItemErase;
	TVTAfterCellPaintEvent FOnAfterCellPaint;
	TVTBeforeCellPaintEvent FOnBeforeCellPaint;
	TVTHeaderPaintEvent FOnHeaderDraw;
	TVTPrepareButtonImagesEvent FOnPrepareButtonImages;
	TVTHeaderPaintQueryElementsEvent FOnHeaderDrawQueryElements;
	TVTAdvancedHeaderPaintEvent FOnAdvancedHeaderDraw;
	TVTGetLineStyleEvent FOnGetLineStyle;
	TVTBackgroundPaintEvent FOnPaintBackground;
	TVTMeasureItemEvent FOnMeasureItem;
	TVTCreateDragManagerEvent FOnCreateDragManager;
	TVTCreateDataObjectEvent FOnCreateDataObject;
	TVTDragAllowedEvent FOnDragAllowed;
	TVTDragOverEvent FOnDragOver;
	TVTDragDropEvent FOnDragDrop;
	TVTHeaderDraggedEvent FOnHeaderDragged;
	TVTHeaderDraggedOutEvent FOnHeaderDraggedOut;
	TVTHeaderDraggingEvent FOnHeaderDragging;
	TVTRenderOLEDataEvent FOnRenderOLEData;
	TVTGetUserClipboardFormatsEvent FOnGetUserClipboardFormats;
	TVTGetNodeDataSizeEvent FOnGetNodeDataSize;
	TVTBeforeDrawLineImageEvent FOnBeforeDrawLineImage;
	TVTKeyActionEvent FOnKeyAction;
	TVTScrollEvent FOnScroll;
	TVTUpdatingEvent FOnUpdating;
	TVTGetCursorEvent FOnGetCursor;
	TVTStateChangeEvent FOnStateChange;
	TVTGetCellIsEmptyEvent FOnGetCellIsEmpty;
	TVTScrollBarShowEvent FOnShowScrollBar;
	TVTBeforeGetCheckStateEvent FOnBeforeGetCheckState;
	TVTCompareEvent FOnCompareNodes;
	TVTDrawHintEvent FOnDrawHint;
	TVTGetHintSizeEvent FOnGetHintSize;
	TVTHintKindEvent FOnGetHintKind;
	TVTIncrementalSearchEvent FOnIncrementalSearch;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	TVTOperationEvent FOnStartOperation;
	TVTOperationEvent FOnEndOperation;
	bool FVclStyleEnabled;
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMParentDoubleBufferedChange(Winapi::Messages::TMessage &Message);
	void __fastcall AdjustTotalCount(PVirtualNode Node, int Value, bool relative = false);
	int __fastcall CalculateCacheEntryCount();
	void __fastcall CalculateVerticalAlignments(TVTPaintInfo &PaintInfo, int &VButtonAlign);
	bool __fastcall ChangeCheckState(PVirtualNode Node, TCheckState Value);
	bool __fastcall CollectSelectedNodesLTR(int MainColumn, int NodeLeft, int NodeRight, System::Classes::TAlignment Alignment, const System::Types::TRect &OldRect, const System::Types::TRect &NewRect);
	bool __fastcall CollectSelectedNodesRTL(int MainColumn, int NodeLeft, int NodeRight, System::Classes::TAlignment Alignment, const System::Types::TRect &OldRect, const System::Types::TRect &NewRect);
	void __fastcall ClearNodeBackground(const TVTPaintInfo &PaintInfo, bool UseBackground, bool Floating, const System::Types::TRect &R);
	int __fastcall CompareNodePositions(PVirtualNode Node1, PVirtualNode Node2, bool ConsiderChildrenAbove = false);
	void __fastcall DrawLineImage(const TVTPaintInfo &PaintInfo, int X, int Y, int H, int VAlign, TVTLineType Style, bool Reverse);
	PVirtualNode __fastcall FindInPositionCache(PVirtualNode Node, unsigned &CurrentPos)/* overload */;
	PVirtualNode __fastcall FindInPositionCache(unsigned Position, unsigned &CurrentPos)/* overload */;
	void __fastcall FixupTotalCount(PVirtualNode Node);
	void __fastcall FixupTotalHeight(PVirtualNode Node);
	PVirtualNode __fastcall GetBottomNode();
	TCheckState __fastcall GetCheckState(PVirtualNode Node);
	TCheckType __fastcall GetCheckType(PVirtualNode Node);
	unsigned __fastcall GetChildCount(PVirtualNode Node);
	bool __fastcall GetChildrenInitialized(PVirtualNode Node);
	int __fastcall GetCutCopyCount();
	bool __fastcall GetDisabled(PVirtualNode Node);
	bool __fastcall GetSyncCheckstateWithSelection(PVirtualNode Node);
	_di_IVTDragManager __fastcall GetDragManager();
	bool __fastcall GetExpanded(PVirtualNode Node);
	bool __fastcall GetFiltered(PVirtualNode Node);
	bool __fastcall GetFullyVisible(PVirtualNode Node);
	bool __fastcall GetHasChildren(PVirtualNode Node);
	bool __fastcall GetMultiline(PVirtualNode Node);
	unsigned __fastcall GetNodeHeight(PVirtualNode Node);
	PVirtualNode __fastcall GetNodeParent(PVirtualNode Node);
	System::Types::TPoint __fastcall GetOffsetXY();
	unsigned __fastcall GetRootNodeCount();
	bool __fastcall GetSelected(PVirtualNode Node);
	PVirtualNode __fastcall GetTopNode();
	unsigned __fastcall GetTotalCount();
	System::Byte __fastcall GetVerticalAlignment(PVirtualNode Node);
	bool __fastcall GetVisible(PVirtualNode Node);
	bool __fastcall GetVisiblePath(PVirtualNode Node);
	bool __fastcall HandleDrawSelection(int X, int Y);
	void __fastcall HandleCheckboxClick(PVirtualNode pHitNode, System::LongInt pKeys);
	bool __fastcall HasVisibleNextSibling(PVirtualNode Node);
	bool __fastcall HasVisiblePreviousSibling(PVirtualNode Node);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall InitializeFirstColumnValues(TVTPaintInfo &PaintInfo);
	void __fastcall InitRootNode(unsigned OldSize = (unsigned)(0x0));
	bool __fastcall IsFirstVisibleChild(PVirtualNode Parent, PVirtualNode Node);
	bool __fastcall IsLastVisibleChild(PVirtualNode Parent, PVirtualNode Node);
	PVirtualNode __fastcall MakeNewNode();
	int __fastcall PackArray(const TNodeArray TheArray, int Count);
	void __fastcall FakeReadIdent(System::Classes::TReader* Reader);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetAnimationDuration(const unsigned Value);
	void __fastcall SetBackground(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetBackGroundImageTransparent(const bool Value);
	void __fastcall SetBackgroundOffset(const int Index, const int Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetBottomNode(PVirtualNode Node);
	void __fastcall SetBottomSpace(const unsigned Value);
	void __fastcall SetButtonFillMode(const TVTButtonFillMode Value);
	void __fastcall SetButtonStyle(const TVTButtonStyle Value);
	void __fastcall SetCheckImageKind(TCheckImageKind Value);
	void __fastcall SetCheckState(PVirtualNode Node, TCheckState Value);
	void __fastcall SetCheckType(PVirtualNode Node, TCheckType Value);
	void __fastcall SetClipboardFormats(TClipboardFormats* const Value);
	void __fastcall SetColors(TVTColors* const Value);
	void __fastcall SetCustomCheckImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetDefaultNodeHeight(unsigned Value);
	void __fastcall SetDisabled(PVirtualNode Node, bool Value);
	void __fastcall SetEmptyListMessage(const System::UnicodeString Value);
	void __fastcall SetExpanded(PVirtualNode Node, bool Value);
	void __fastcall SetFocusedColumn(TColumnIndex Value);
	void __fastcall SetFocusedNode(PVirtualNode Value);
	void __fastcall SetFullyVisible(PVirtualNode Node, bool Value);
	void __fastcall SetHasChildren(PVirtualNode Node, bool Value);
	void __fastcall SetHeader(TVTHeader* const Value);
	void __fastcall SetHotNode(PVirtualNode Value);
	void __fastcall SetFiltered(PVirtualNode Node, bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetIndent(unsigned Value);
	void __fastcall SetLineMode(const TVTLineMode Value);
	void __fastcall SetLineStyle(const TVTLineStyle Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetMultiline(PVirtualNode Node, const bool Value);
	void __fastcall SetNodeAlignment(const TVTNodeAlignment Value);
	void __fastcall SetNodeDataSize(int Value);
	void __fastcall SetNodeHeight(PVirtualNode Node, unsigned Value);
	void __fastcall SetNodeParent(PVirtualNode Node, const PVirtualNode Value);
	void __fastcall SetOffsetX(const int Value);
	void __fastcall SetOffsetXY(const System::Types::TPoint &Value);
	void __fastcall SetOffsetY(const int Value);
	void __fastcall SetOptions(TCustomVirtualTreeOptions* const Value);
	void __fastcall SetRootNodeCount(unsigned Value);
	void __fastcall SetScrollBarOptions(TScrollBarOptions* Value);
	void __fastcall SetSearchOption(const TVTIncrementalSearch Value);
	void __fastcall SetSelected(PVirtualNode Node, bool Value);
	void __fastcall SetSelectionCurveRadius(const unsigned Value);
	void __fastcall SetStateImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetTextMargin(int Value);
	void __fastcall SetTopNode(PVirtualNode Node);
	void __fastcall SetUpdateState(bool Updating);
	void __fastcall SetVerticalAlignment(PVirtualNode Node, System::Byte Value);
	HIDESBASE void __fastcall SetVisible(PVirtualNode Node, bool Value);
	void __fastcall SetVisiblePath(PVirtualNode Node, bool Value);
	void __fastcall PrepareBackGroundPicture(Vcl::Graphics::TPicture* Source, Vcl::Graphics::TBitmap* DrawBitmap, int DrawBitmapWidth, int DrawBitMapHeight, System::Uitypes::TColor ABkgcolor);
	void __fastcall StaticBackground(Vcl::Graphics::TPicture* Source, TCanvas* Target, const System::Types::TPoint &OffsetPosition, const System::Types::TRect &R, System::Uitypes::TColor aBkgColor);
	void __fastcall TileBackground(Vcl::Graphics::TPicture* Source, TCanvas* Target, const System::Types::TPoint &Offset, const System::Types::TRect &R, System::Uitypes::TColor aBkgColor);
	bool __fastcall ToggleCallback(int Step, int StepSize, void * Data);
	MESSAGE void __fastcall CMColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBorderChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDenySubclassing(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDrag(Vcl::Controls::TCMDrag &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	MESSAGE void __fastcall CMHintShowPause(Vcl::Forms::TCMHintShowPause &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseWheel(Vcl::Controls::TCMMouseWheel &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TVMGetItem(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TVMGetItemRect(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TVMGetNextItem(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TWMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMChar &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TWMCopy &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TWMCut &Message);
	MESSAGE void __fastcall WMEnable(Winapi::Messages::TWMEnable &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMGetDlgCode &Message);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMHScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKeyDown &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKeyUp &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMLButtonDblClk &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMLButtonDown &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMLButtonUp &Message);
	HIDESBASE MESSAGE void __fastcall WMMButtonDblClk(Winapi::Messages::TWMMButtonDblClk &Message);
	HIDESBASE MESSAGE void __fastcall WMMButtonDown(Winapi::Messages::TWMMButtonDown &Message);
	HIDESBASE MESSAGE void __fastcall WMMButtonUp(Winapi::Messages::TWMMButtonUp &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCDestroy(Winapi::Messages::TWMNCDestroy &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMPaste &Message);
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TWMPrint &Message);
	HIDESBASE MESSAGE void __fastcall WMPrintClient(Winapi::Messages::TWMPrintClient &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDblClk(Winapi::Messages::TWMRButtonDblClk &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMRButtonDown &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMRButtonUp &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	MESSAGE void __fastcall WMThemeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMVScroll &Message);
	unsigned __fastcall GetRangeX();
	HIDESBASE void __fastcall SetDoubleBuffered(const bool Value);
	bool __fastcall GetVclStyleEnabled();
	void __fastcall SetOnPrepareButtonImages(const TVTPrepareButtonImagesEvent Value);
	
protected:
	bool FFontChanged;
	virtual void __fastcall AutoScale(bool isDpiChange);
	virtual void __fastcall AddToSelection(PVirtualNode Node, bool NotifySynced)/* overload */;
	virtual void __fastcall AddToSelection(const TNodeArray NewItems, int NewLength, bool ForceInsert = false)/* overload */;
	virtual void __fastcall AdjustPaintCellRect(TVTPaintInfo &PaintInfo, TColumnIndex &NextNonEmpty);
	virtual void __fastcall AdjustPanningCursor(int X, int Y);
	void __fastcall AdjustTotalHeight(PVirtualNode Node, int Value, bool relative = false);
	virtual void __fastcall AdviseChangeEvent(bool StructureChange, PVirtualNode Node, TChangeReason Reason);
	virtual unsigned __fastcall AllocateInternalDataArea(unsigned Size);
	virtual void __fastcall Animate(unsigned Steps, unsigned Duration, TVTAnimationCallback Callback, void * Data);
	virtual bool __fastcall CalculateSelectionRect(int X, int Y);
	virtual bool __fastcall CanAutoScroll();
	virtual bool __fastcall CanShowDragImage();
	bool __fastcall CanSplitterResizeNode(const System::Types::TPoint &P, PVirtualNode Node, TColumnIndex Column);
	virtual void __fastcall Change(PVirtualNode Node);
	void __fastcall ChangeTreeStatesAsync(const TVirtualTreeStates &EnterStates, const TVirtualTreeStates &LeaveStates);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual bool __fastcall CheckParentCheckState(PVirtualNode Node, TCheckState NewCheckState);
	void __fastcall ClearDragManager();
	virtual void __fastcall ClearSelection(bool pFireChangeEvent)/* overload */;
	virtual void __fastcall ClearTempCache();
	virtual bool __fastcall ColumnIsEmpty(PVirtualNode Node, TColumnIndex Column);
	virtual int __fastcall ComputeRTLOffset(bool ExcludeScrollBar = false);
	virtual int __fastcall CountLevelDifference(PVirtualNode Node1, PVirtualNode Node2);
	virtual unsigned __fastcall CountVisibleChildren(PVirtualNode Node);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	void __fastcall DecVisibleCount();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall DeleteNode(PVirtualNode Node, bool Reindex, bool ParentClearing)/* overload */;
	virtual TDropMode __fastcall DetermineDropMode(const System::Types::TPoint &P, THitInfo &HitInfo, System::Types::TRect &NodeRect);
	virtual void __fastcall DetermineHiddenChildrenFlag(PVirtualNode Node);
	virtual void __fastcall DetermineHiddenChildrenFlagAllNodes();
	virtual void __fastcall DetermineHitPositionLTR(THitInfo &HitInfo, int Offset, int Right, System::Classes::TAlignment Alignment);
	virtual void __fastcall DetermineHitPositionRTL(THitInfo &HitInfo, int Offset, int Right, System::Classes::TAlignment Alignment);
	virtual int __fastcall DetermineLineImageAndSelectLevel(PVirtualNode Node, TLineImage &LineImage);
	virtual TCheckState __fastcall DetermineNextCheckState(TCheckType CheckType, TCheckState CheckState);
	virtual TScrollDirections __fastcall DetermineScrollDirections(int X, int Y);
	virtual void __fastcall DoAdvancedHeaderDraw(THeaderPaintInfo &PaintInfo, const THeaderPaintElements Elements);
	virtual void __fastcall DoAfterCellPaint(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, const System::Types::TRect &CellRect);
	virtual void __fastcall DoAfterItemErase(TCanvas* Canvas, PVirtualNode Node, const System::Types::TRect &ItemRect);
	virtual void __fastcall DoAfterItemPaint(TCanvas* Canvas, PVirtualNode Node, const System::Types::TRect &ItemRect);
	virtual void __fastcall DoAfterPaint(TCanvas* Canvas);
	virtual void __fastcall DoAutoScroll(int X, int Y);
	virtual bool __fastcall DoBeforeDrag(PVirtualNode Node, TColumnIndex Column);
	virtual void __fastcall DoBeforeCellPaint(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, TVTCellPaintMode CellPaintMode, const System::Types::TRect &CellRect, System::Types::TRect &ContentRect);
	virtual void __fastcall DoBeforeItemErase(TCanvas* Canvas, PVirtualNode Node, const System::Types::TRect &ItemRect, System::Uitypes::TColor &Color, TItemEraseAction &EraseAction);
	virtual bool __fastcall DoBeforeItemPaint(TCanvas* Canvas, PVirtualNode Node, const System::Types::TRect &ItemRect);
	virtual void __fastcall DoBeforePaint(TCanvas* Canvas);
	virtual bool __fastcall DoCancelEdit();
	virtual void __fastcall DoCanEdit(PVirtualNode Node, TColumnIndex Column, bool &Allowed);
	virtual void __fastcall DoCanSplitterResizeNode(const System::Types::TPoint &P, PVirtualNode Node, TColumnIndex Column, bool &Allowed);
	virtual void __fastcall DoChange(PVirtualNode Node);
	virtual void __fastcall DoCheckClick(PVirtualNode Node, TCheckState NewCheckState);
	virtual void __fastcall DoChecked(PVirtualNode Node);
	virtual bool __fastcall DoChecking(PVirtualNode Node, TCheckState &NewCheckState);
	virtual void __fastcall DoCollapsed(PVirtualNode Node);
	virtual bool __fastcall DoCollapsing(PVirtualNode Node);
	virtual void __fastcall DoColumnClick(TColumnIndex Column, System::Classes::TShiftState Shift);
	virtual void __fastcall DoColumnDblClick(TColumnIndex Column, System::Classes::TShiftState Shift);
	virtual void __fastcall DoColumnResize(TColumnIndex Column);
	virtual void __fastcall DoColumnVisibilityChanged(const TColumnIndex Column, bool Visible);
	virtual int __fastcall DoCompare(PVirtualNode Node1, PVirtualNode Node2, TColumnIndex Column);
	virtual _di_IDataObject __fastcall DoCreateDataObject();
	virtual _di_IVTDragManager __fastcall DoCreateDragManager();
	virtual _di_IVTEditLink __fastcall DoCreateEditor(PVirtualNode Node, TColumnIndex Column);
	virtual void __fastcall DoDragging(const System::Types::TPoint &P);
	virtual void __fastcall DoDragExpand();
	virtual void __fastcall DoBeforeDrawLineImage(PVirtualNode Node, int Level, int &XPos);
	virtual bool __fastcall DoDragOver(System::TObject* Source, System::Classes::TShiftState Shift, System::Uitypes::TDragState State, const System::Types::TPoint &Pt, TDropMode Mode, int &Effect);
	virtual void __fastcall DoDragDrop(System::TObject* Source, const _di_IDataObject DataObject, const TFormatArray Formats, System::Classes::TShiftState Shift, const System::Types::TPoint &Pt, int &Effect, TDropMode Mode);
	void __fastcall DoDrawHint(TCanvas* Canvas, PVirtualNode Node, const System::Types::TRect &R, TColumnIndex Column);
	virtual void __fastcall DoEdit();
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	virtual bool __fastcall DoEndEdit();
	virtual void __fastcall DoEndOperation(TVTOperationKind OperationKind);
	DYNAMIC void __fastcall DoEnter();
	virtual void __fastcall DoExpanded(PVirtualNode Node);
	virtual bool __fastcall DoExpanding(PVirtualNode Node);
	virtual void __fastcall DoFocusChange(PVirtualNode Node, TColumnIndex Column);
	virtual bool __fastcall DoFocusChanging(PVirtualNode OldNode, PVirtualNode NewNode, TColumnIndex OldColumn, TColumnIndex NewColumn);
	virtual void __fastcall DoFocusNode(PVirtualNode Node, bool Ask);
	virtual void __fastcall DoFreeNode(PVirtualNode Node);
	virtual System::Types::TPoint __fastcall DoGetCellContentMargin(PVirtualNode Node, TColumnIndex Column, TVTCellContentMarginType CellContentMarginType = (TVTCellContentMarginType)(0x0), TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual void __fastcall DoGetCursor(System::Uitypes::TCursor &Cursor);
	virtual void __fastcall DoGetHeaderCursor(HICON &Cursor);
	virtual void __fastcall DoGetHintSize(PVirtualNode Node, TColumnIndex Column, System::Types::TRect &R);
	void __fastcall DoGetHintKind(PVirtualNode Node, TColumnIndex Column, TVTHintKind &Kind);
	virtual Vcl::Imglist::TCustomImageList* __fastcall DoGetImageIndex(PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column, bool &Ghosted, TImageIndex &Index);
	virtual void __fastcall DoGetImageText(PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column, System::UnicodeString &ImageText);
	virtual void __fastcall DoGetLineStyle(void * &Bits);
	virtual System::UnicodeString __fastcall DoGetNodeHint(PVirtualNode Node, TColumnIndex Column, TVTTooltipLineBreakStyle &LineBreakStyle);
	virtual System::UnicodeString __fastcall DoGetNodeTooltip(PVirtualNode Node, TColumnIndex Column, TVTTooltipLineBreakStyle &LineBreakStyle);
	virtual int __fastcall DoGetNodeExtraWidth(PVirtualNode Node, TColumnIndex Column, TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual int __fastcall DoGetNodeWidth(PVirtualNode Node, TColumnIndex Column, TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual Vcl::Menus::TPopupMenu* __fastcall DoGetPopupMenu(PVirtualNode Node, TColumnIndex Column, const System::Types::TPoint &Position);
	virtual void __fastcall DoGetUserClipboardFormats(TFormatEtcArray &Formats);
	void __fastcall DoHeaderAddPopupItem(const TColumnIndex Column, Virtualtrees::Types::TAddPopupItemType &Cmd);
	virtual void __fastcall DoHeaderClick(const TVTHeaderHitInfo &HitInfo);
	virtual void __fastcall DoHeaderDblClick(const TVTHeaderHitInfo &HitInfo);
	virtual void __fastcall DoHeaderDragged(TColumnIndex Column, TColumnPosition OldPosition);
	virtual void __fastcall DoHeaderDraggedOut(TColumnIndex Column, const System::Types::TPoint &DropPosition);
	virtual bool __fastcall DoHeaderDragging(TColumnIndex Column);
	virtual void __fastcall DoHeaderDraw(TCanvas* Canvas, TVirtualTreeColumn* Column, const System::Types::TRect &R, bool Hover, bool Pressed, TVTDropMarkMode DropMark);
	virtual void __fastcall DoHeaderDrawQueryElements(THeaderPaintInfo &PaintInfo, THeaderPaintElements &Elements);
	virtual void __fastcall DoHeaderMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoHeaderMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoHeaderMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoHotChange(PVirtualNode Old, PVirtualNode New);
	virtual int __fastcall DoIncrementalSearch(PVirtualNode Node, const System::UnicodeString Text);
	virtual bool __fastcall DoInitChildren(PVirtualNode Node, unsigned &ChildCount);
	virtual void __fastcall DoInitNode(PVirtualNode Parent, PVirtualNode Node, TVirtualNodeInitStates &InitStates);
	virtual bool __fastcall DoKeyAction(System::Word &CharCode, System::Classes::TShiftState &Shift);
	virtual void __fastcall DoLoadUserData(PVirtualNode Node, System::Classes::TStream* Stream);
	virtual void __fastcall DoMeasureItem(TCanvas* TargetCanvas, PVirtualNode Node, int &NodeHeight);
	virtual void __fastcall DoMouseEnter();
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall DoNodeCopied(PVirtualNode Node);
	virtual bool __fastcall DoNodeCopying(PVirtualNode Node, PVirtualNode NewParent);
	virtual void __fastcall DoNodeClick(const THitInfo &HitInfo);
	virtual void __fastcall DoNodeDblClick(const THitInfo &HitInfo);
	virtual bool __fastcall DoNodeHeightDblClickResize(PVirtualNode Node, TColumnIndex Column, System::Classes::TShiftState Shift, const System::Types::TPoint &P);
	virtual bool __fastcall DoNodeHeightTracking(PVirtualNode Node, TColumnIndex Column, System::Classes::TShiftState Shift, System::Types::TPoint &TrackPoint, const System::Types::TPoint &P);
	virtual void __fastcall DoNodeMoved(PVirtualNode Node);
	virtual bool __fastcall DoNodeMoving(PVirtualNode Node, PVirtualNode NewParent);
	virtual bool __fastcall DoPaintBackground(TCanvas* Canvas, const System::Types::TRect &R);
	virtual void __fastcall DoPaintDropMark(TCanvas* Canvas, PVirtualNode Node, const System::Types::TRect &R);
	virtual void __fastcall DoPaintNode(TVTPaintInfo &PaintInfo);
	virtual void __fastcall DoPopupMenu(PVirtualNode Node, TColumnIndex Column, const System::Types::TPoint &Position);
	virtual void __fastcall DoRemoveFromSelection(PVirtualNode Node);
	virtual HRESULT __fastcall DoRenderOLEData(const Winapi::Activex::TFormatEtc &FormatEtcIn, /* out */ Winapi::Activex::TStgMedium &Medium, bool ForClipboard);
	virtual void __fastcall DoReset(PVirtualNode Node);
	virtual void __fastcall DoSaveUserData(PVirtualNode Node, System::Classes::TStream* Stream);
	virtual void __fastcall DoScroll(int DeltaX, int DeltaY);
	virtual bool __fastcall DoSetOffsetXY(const System::Types::TPoint &Value, TScrollUpdateOptions Options, System::Types::PRect ClipRect = (System::Types::PRect)(0x0));
	virtual void __fastcall DoShowScrollBar(int Bar, bool Show);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	virtual void __fastcall DoStartOperation(TVTOperationKind OperationKind);
	virtual void __fastcall DoStateChange(const TVirtualTreeStates &Enter, const TVirtualTreeStates &Leave = TVirtualTreeStates() );
	virtual void __fastcall DoStructureChange(PVirtualNode Node, TChangeReason Reason);
	virtual void __fastcall DoTimerScroll();
	virtual void __fastcall DoUpdating(TVTUpdateState State);
	virtual bool __fastcall DoValidateCache();
	virtual void __fastcall DragAndDrop(unsigned AllowedEffects, const _di_IDataObject DataObject, int &DragEffect);
	DYNAMIC void __fastcall DragCanceled();
	HIDESBASE virtual HRESULT __fastcall DragDrop(const _di_IDataObject DataObject, int KeyState, const System::Types::TPoint &Pt, int &Effect);
	virtual HRESULT __fastcall DragEnter(int KeyState, const System::Types::TPoint &Pt, int &Effect);
	virtual void __fastcall DragFinished();
	virtual void __fastcall DragLeave();
	HIDESBASE virtual HRESULT __fastcall DragOver(System::TObject* Source, int KeyState, System::Uitypes::TDragState DragState, const System::Types::TPoint &Pt, int &Effect);
	virtual void __fastcall DrawDottedHLine(const TVTPaintInfo &PaintInfo, int Left, int Right, int Top);
	virtual void __fastcall DrawDottedVLine(const TVTPaintInfo &PaintInfo, int Top, int Bottom, int Left, bool UseSelectedBkColor = false);
	void __fastcall EndOperation(TVTOperationKind OperationKind);
	virtual void __fastcall EnsureNodeFocused();
	virtual bool __fastcall FindNodeInSelection(PVirtualNode P, int &Index, int LowBound, int HighBound);
	virtual void __fastcall FinishChunkHeader(System::Classes::TStream* Stream, int StartPos, int EndPos);
	HIDESBASE virtual void __fastcall FontChanged(System::TObject* AFont);
	virtual System::Types::TSize __fastcall GetBorderDimensions();
	int __fastcall GetCheckedCount();
	virtual int __fastcall GetCheckImage(PVirtualNode Node, TCheckType ImgCheckType = (Virtualtrees::Types::TCheckType)(0x0), TCheckState ImgCheckState = (Virtualtrees::Types::TCheckState)(0x0), bool ImgEnabled = true);
	virtual TVirtualTreeColumnClass __fastcall GetColumnClass();
	virtual TVTHintKind __fastcall GetDefaultHintKind();
	virtual bool __fastcall GetDoubleBuffered();
	virtual TVTHeaderClass __fastcall GetHeaderClass();
	virtual Vcl::Controls::THintWindowClass __fastcall GetHintWindowClass();
	virtual void __fastcall GetImageIndex(TVTPaintInfo &Info, TVTImageKind Kind, TVTImageInfoIndex InfoIndex);
	virtual System::Types::TSize __fastcall GetImageSize(PVirtualNode Node, TVTImageKind Kind = (TVTImageKind)(0x0), TColumnIndex Column = (Virtualtrees::Types::TColumnIndex)(0x0), bool IncludePadding = true);
	virtual System::Types::TSize __fastcall GetNodeImageSize _DEPRECATED_ATTRIBUTE1("Use GetImageSize instead") (PVirtualNode Node);
	virtual unsigned __fastcall GetMaxRightExtend();
	virtual void __fastcall GetNativeClipboardFormats(TFormatEtcArray &Formats);
	bool __fastcall GetOperationCanceled();
	virtual TTreeOptionsClass __fastcall GetOptionsClass();
	virtual TBaseVirtualTree* __fastcall GetTreeFromDataObject(const _di_IDataObject DataObject);
	virtual void __fastcall HandleHotTrack(int X, int Y);
	virtual void __fastcall HandleIncrementalSearch(System::Word CharCode);
	virtual void __fastcall HandleMouseDblClick(Winapi::Messages::TWMMouse &Message, const THitInfo &HitInfo);
	virtual void __fastcall HandleMouseDown(Winapi::Messages::TWMMouse &Message, THitInfo &HitInfo);
	virtual void __fastcall HandleMouseUp(Winapi::Messages::TWMMouse &Message, const THitInfo &HitInfo);
	void __fastcall HandleClickSelection(PVirtualNode LastFocused, PVirtualNode NewNode, System::Classes::TShiftState Shift, bool DragPending);
	virtual bool __fastcall HasImage _DEPRECATED_ATTRIBUTE1("Use GetImageSize instead") (PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column);
	virtual bool __fastcall HasPopupMenu(PVirtualNode Node, TColumnIndex Column, const System::Types::TPoint &Pos);
	void __fastcall IncVisibleCount();
	virtual void __fastcall InitChildren(PVirtualNode Node);
	virtual void __fastcall InitNode(PVirtualNode Node);
	virtual void __fastcall InternalAddFromStream(System::Classes::TStream* Stream, int Version, PVirtualNode Node);
	bool __fastcall InternalAddToSelection(PVirtualNode Node, bool ForceInsert)/* overload */;
	bool __fastcall InternalAddToSelection(const TNodeArray NewItems, int NewLength, bool ForceInsert)/* overload */;
	virtual void __fastcall InternalCacheNode(PVirtualNode Node);
	virtual void __fastcall InternalClearSelection();
	virtual void __fastcall InternalConnectNode(PVirtualNode Node, PVirtualNode Destination, TBaseVirtualTree* Target, TVTNodeAttachMode Mode);
	void * __fastcall InternalData(PVirtualNode Node);
	virtual void __fastcall InternalDisconnectNode(PVirtualNode Node, bool KeepFocus, bool Reindex = true, bool ParentClearing = false);
	void __fastcall InternalSetFocusedColumn(const TColumnIndex index);
	virtual void __fastcall InternalRemoveFromSelection(PVirtualNode Node);
	void __fastcall InterruptValidation(bool pWaitForValidationTermination = true);
	void __fastcall InvalidateCache();
	virtual void __fastcall Loaded();
	virtual void __fastcall MainColumnChanged();
	virtual void __fastcall MarkCutCopyNodes();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall OriginalWMNCPaint(HDC DC);
	virtual void __fastcall Paint();
	virtual void __fastcall PaintCheckImage(TCanvas* Canvas, const TVTImageInfo &ImageInfo, bool Selected);
	virtual void __fastcall PaintImage(TVTPaintInfo &PaintInfo, TVTImageInfoIndex ImageInfoIndex, bool DoOverlay);
	virtual void __fastcall PaintNodeButton(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, const System::Types::TRect &R, int ButtonX, int ButtonY, System::Classes::TBiDiMode BidiMode);
	virtual void __fastcall PaintTreeLines(const TVTPaintInfo &PaintInfo, int IndentSize, const TLineImage LineImage);
	virtual void __fastcall PaintSelectionRectangle(TCanvas* Target, int WindowOrgX, const System::Types::TRect &SelectionRect, const System::Types::TRect &TargetRect);
	virtual void __fastcall PanningWindowProc(Winapi::Messages::TMessage &Message);
	void __fastcall PrepareBitmaps(bool NeedButtons, bool NeedLines);
	virtual void __fastcall PrepareCell(TVTPaintInfo &PaintInfo, int WindowOrgX, int MaxWidth);
	virtual bool __fastcall ReadChunk(System::Classes::TStream* Stream, int Version, PVirtualNode Node, int ChunkType, int ChunkSize);
	virtual void __fastcall ReadNode(System::Classes::TStream* Stream, int Version, PVirtualNode Node);
	virtual void __fastcall RedirectFontChangeEvent(TCanvas* Canvas);
	virtual void __fastcall RemoveFromSelection(PVirtualNode Node);
	virtual void __fastcall UpdateNextNodeToSelect(PVirtualNode Node);
	virtual HRESULT __fastcall RenderOLEData(const Winapi::Activex::TFormatEtc &FormatEtcIn, /* out */ Winapi::Activex::TStgMedium &Medium, bool ForClipboard);
	virtual void __fastcall ResetRangeAnchor();
	virtual void __fastcall RestoreFontChangeEvent(TCanvas* Canvas);
	virtual void __fastcall SelectNodes(PVirtualNode StartNode, PVirtualNode EndNode, bool AddOnly);
	virtual void __fastcall SetChildCount(PVirtualNode Node, unsigned NewChildCount);
	virtual void __fastcall SetFocusedNodeAndColumn(PVirtualNode Node, TColumnIndex Column);
	void __fastcall SetRangeX(unsigned value);
	void __fastcall SetWindowTheme(const System::UnicodeString Theme);
	void __fastcall SetVisibleCount(unsigned value);
	virtual void __fastcall SkipNode(System::Classes::TStream* Stream);
	void __fastcall StartOperation(TVTOperationKind OperationKind);
	virtual void __fastcall StartWheelPanning(const System::Types::TPoint &Position);
	void __fastcall StopTimer(int ID);
	virtual void __fastcall StopWheelPanning();
	virtual void __fastcall StructureChange(PVirtualNode Node, TChangeReason Reason);
	virtual int __fastcall SuggestDropEffect(System::TObject* Source, System::Classes::TShiftState Shift, const System::Types::TPoint &Pt, int AllowedEffects);
	virtual void __fastcall ToggleSelection(PVirtualNode StartNode, PVirtualNode EndNode);
	void __fastcall TrySetFocus();
	virtual void __fastcall UnselectNodes(PVirtualNode StartNode, PVirtualNode EndNode);
	void __fastcall UpdateColumnCheckState(TVirtualTreeColumn* Col);
	virtual void __fastcall UpdateDesigner();
	virtual void __fastcall UpdateEditBounds();
	virtual void __fastcall UpdateHeaderRect();
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall UpdateWindowAndDragImage(TBaseVirtualTree* const Tree, const System::Types::TRect &TreeRect, bool UpdateNCArea, bool ReshowDragImage);
	virtual void __fastcall ValidateCache();
	virtual void __fastcall ValidateNodeDataSize(int &Size);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall WriteChunks(System::Classes::TStream* Stream, PVirtualNode Node);
	virtual void __fastcall WriteNode(System::Classes::TStream* Stream, PVirtualNode Node);
	virtual void __fastcall VclStyleChanged();
	__property bool VclStyleEnabled = {read=GetVclStyleEnabled, nodefault};
	__property unsigned TotalInternalDataSize = {read=FTotalInternalDataSize, nodefault};
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property unsigned AnimationDuration = {read=FAnimationDuration, write=SetAnimationDuration, default=200};
	__property unsigned AutoExpandDelay = {read=FAutoExpandDelay, write=FAutoExpandDelay, default=1000};
	__property unsigned AutoScrollDelay = {read=FAutoScrollDelay, write=FAutoScrollDelay, default=1000};
	__property TAutoScrollInterval AutoScrollInterval = {read=FAutoScrollInterval, write=FAutoScrollInterval, default=1};
	__property Vcl::Graphics::TPicture* Background = {read=FBackground, write=SetBackground};
	__property bool BackGroundImageTransparent = {read=FBackgroundImageTransparent, write=SetBackGroundImageTransparent, default=0};
	__property int BackgroundOffsetX = {read=FBackgroundOffsetX, write=SetBackgroundOffset, index=0, default=0};
	__property int BackgroundOffsetY = {read=FBackgroundOffsetY, write=SetBackgroundOffset, index=1, default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property unsigned BottomSpace = {read=FBottomSpace, write=SetBottomSpace, default=0};
	__property TVTButtonFillMode ButtonFillMode = {read=FButtonFillMode, write=SetButtonFillMode, default=0};
	__property TVTButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, default=0};
	__property unsigned ChangeDelay = {read=FChangeDelay, write=FChangeDelay, default=0};
	__property TCheckImageKind CheckImageKind = {read=FCheckImageKind, write=SetCheckImageKind, stored=false, default=1};
	__property TClipboardFormats* ClipboardFormats = {read=FClipboardFormats, write=SetClipboardFormats};
	__property TVTColors* Colors = {read=FColors, write=SetColors};
	__property Vcl::Imglist::TCustomImageList* CustomCheckImages = {read=FCustomCheckImages, write=SetCustomCheckImages};
	__property TVTHintKind DefaultHintKind = {read=GetDefaultHintKind, nodefault};
	__property unsigned DefaultNodeHeight = {read=FDefaultNodeHeight, write=SetDefaultNodeHeight, default=18};
	__property TVTNodeAttachMode DefaultPasteMode = {read=FDefaultPasteMode, write=FDefaultPasteMode, default=4};
	__property int DragHeight = {read=FDragHeight, write=FDragHeight, default=350};
	__property TVTDragImageKind DragImageKind = {read=FDragImageKind, write=FDragImageKind, default=0};
	__property TDragOperations DragOperations = {read=FDragOperations, write=FDragOperations, default=3};
	__property TNodeArray DragSelection = {read=FDragSelection};
	__property int LastDragEffect = {read=FLastDragEffect, nodefault};
	__property TVTDragType DragType = {read=FDragType, write=FDragType, default=0};
	__property int DragWidth = {read=FDragWidth, write=FDragWidth, default=200};
	__property TVTDrawSelectionMode DrawSelectionMode = {read=FDrawSelectionMode, write=FDrawSelectionMode, default=0};
	__property TColumnIndex EditColumn = {read=FEditColumn, write=FEditColumn, nodefault};
	__property unsigned EditDelay = {read=FEditDelay, write=FEditDelay, default=1000};
	__property int EffectiveOffsetX = {read=FEffectiveOffsetX, nodefault};
	__property System::Types::TRect HeaderRect = {read=FHeaderRect};
	__property TVTHintMode HintMode = {read=FHintMode, write=FHintMode, default=0};
	__property TVTHintData HintData = {read=FHintData, write=FHintData};
	__property System::Uitypes::TCursor HotCursor = {read=FHotCursor, write=FHotCursor, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TVTIncrementalSearch IncrementalSearch = {read=FIncrementalSearch, write=SetSearchOption, default=1};
	__property TVTSearchDirection IncrementalSearchDirection = {read=FSearchDirection, write=FSearchDirection, default=0};
	__property TVTSearchStart IncrementalSearchStart = {read=FSearchStart, write=FSearchStart, default=2};
	__property unsigned IncrementalSearchTimeout = {read=FSearchTimeout, write=FSearchTimeout, default=1000};
	__property unsigned Indent = {read=FIndent, write=SetIndent, default=18};
	__property System::Types::TPoint LastClickPos = {read=FLastClickPos, write=FLastClickPos};
	__property TDropMode LastDropMode = {read=FLastDropMode, write=FLastDropMode, nodefault};
	__property System::Types::TRect LastHintRect = {read=FLastHintRect, write=FLastHintRect};
	__property TVTLineMode LineMode = {read=FLineMode, write=SetLineMode, default=0};
	__property TVTLineStyle LineStyle = {read=FLineStyle, write=SetLineStyle, default=1};
	__property int Margin = {read=FMargin, write=SetMargin, default=4};
	__property PVirtualNode NextNodeToSelect = {read=FNextNodeToSelect};
	__property TVTNodeAlignment NodeAlignment = {read=FNodeAlignment, write=SetNodeAlignment, default=2};
	__property int NodeDataSize = {read=FNodeDataSize, write=SetNodeDataSize, default=-1};
	__property bool OperationCanceled = {read=GetOperationCanceled, nodefault};
	__property Vcl::Graphics::TBitmap* HotMinusBM = {read=FHotMinusBM};
	__property Vcl::Graphics::TBitmap* HotPlusBM = {read=FHotPlusBM};
	__property Vcl::Graphics::TBitmap* MinusBM = {read=FMinusBM};
	__property Vcl::Graphics::TBitmap* PlusBM = {read=FPlusBM};
	__property unsigned RangeX = {read=GetRangeX, nodefault};
	__property unsigned RangeY = {read=FRangeY, nodefault};
	__property unsigned RootNodeCount = {read=GetRootNodeCount, write=SetRootNodeCount, default=0};
	__property TScrollBarOptions* ScrollBarOptions = {read=FScrollBarOptions, write=SetScrollBarOptions};
	__property System::Byte SelectionBlendFactor = {read=FSelectionBlendFactor, write=FSelectionBlendFactor, default=128};
	__property unsigned SelectionCurveRadius = {read=FSelectionCurveRadius, write=SetSelectionCurveRadius, default=0};
	__property Vcl::Imglist::TCustomImageList* StateImages = {read=FStateImages, write=SetStateImages};
	__property int TextMargin = {read=FTextMargin, write=SetTextMargin, default=4};
	__property TCustomVirtualTreeOptions* TreeOptions = {read=FOptions, write=SetOptions};
	__property bool WantTabs = {read=FWantTabs, write=FWantTabs, default=0};
	__property bool SyncCheckstateWithSelection[PVirtualNode Node] = {read=GetSyncCheckstateWithSelection};
	__property TVTAddToSelectionEvent OnAddToSelection = {read=FOnAddToSelection, write=FOnAddToSelection};
	__property TVTAdvancedHeaderPaintEvent OnAdvancedHeaderDraw = {read=FOnAdvancedHeaderDraw, write=FOnAdvancedHeaderDraw};
	__property TVTAfterAutoFitColumnEvent OnAfterAutoFitColumn = {read=FOnAfterAutoFitColumn, write=FOnAfterAutoFitColumn};
	__property TVTAfterAutoFitColumnsEvent OnAfterAutoFitColumns = {read=FOnAfterAutoFitColumns, write=FOnAfterAutoFitColumns};
	__property TVTAfterCellPaintEvent OnAfterCellPaint = {read=FOnAfterCellPaint, write=FOnAfterCellPaint};
	__property TVTColumnExportEvent OnAfterColumnExport = {read=FOnAfterColumnExport, write=FOnAfterColumnExport};
	__property TVTAfterColumnWidthTrackingEvent OnAfterColumnWidthTracking = {read=FOnAfterColumnWidthTracking, write=FOnAfterColumnWidthTracking};
	__property TVTAfterGetMaxColumnWidthEvent OnAfterGetMaxColumnWidth = {read=FOnAfterGetMaxColumnWidth, write=FOnAfterGetMaxColumnWidth};
	__property TVTTreeExportEvent OnAfterHeaderExport = {read=FOnAfterHeaderExport, write=FOnAfterHeaderExport};
	__property TVTAfterHeaderHeightTrackingEvent OnAfterHeaderHeightTracking = {read=FOnAfterHeaderHeightTracking, write=FOnAfterHeaderHeightTracking};
	__property TVTAfterItemEraseEvent OnAfterItemErase = {read=FOnAfterItemErase, write=FOnAfterItemErase};
	__property TVTAfterItemPaintEvent OnAfterItemPaint = {read=FOnAfterItemPaint, write=FOnAfterItemPaint};
	__property TVTNodeExportEvent OnAfterNodeExport = {read=FOnAfterNodeExport, write=FOnAfterNodeExport};
	__property TVTPaintEvent OnAfterPaint = {read=FOnAfterPaint, write=FOnAfterPaint};
	__property TVTTreeExportEvent OnAfterTreeExport = {read=FOnAfterTreeExport, write=FOnAfterTreeExport};
	__property TVTBeforeAutoFitColumnEvent OnBeforeAutoFitColumn = {read=FOnBeforeAutoFitColumn, write=FOnBeforeAutoFitColumn};
	__property TVTBeforeAutoFitColumnsEvent OnBeforeAutoFitColumns = {read=FOnBeforeAutoFitColumns, write=FOnBeforeAutoFitColumns};
	__property TVTBeforeCellPaintEvent OnBeforeCellPaint = {read=FOnBeforeCellPaint, write=FOnBeforeCellPaint};
	__property TVTColumnExportEvent OnBeforeColumnExport = {read=FOnBeforeColumnExport, write=FOnBeforeColumnExport};
	__property TVTBeforeColumnWidthTrackingEvent OnBeforeColumnWidthTracking = {read=FOnBeforeColumnWidthTracking, write=FOnBeforeColumnWidthTracking};
	__property TVTBeforeDrawLineImageEvent OnBeforeDrawTreeLine = {read=FOnBeforeDrawLineImage, write=FOnBeforeDrawLineImage};
	__property TVTBeforeGetMaxColumnWidthEvent OnBeforeGetMaxColumnWidth = {read=FOnBeforeGetMaxColumnWidth, write=FOnBeforeGetMaxColumnWidth};
	__property TVTTreeExportEvent OnBeforeHeaderExport = {read=FOnBeforeHeaderExport, write=FOnBeforeHeaderExport};
	__property TVTBeforeHeaderHeightTrackingEvent OnBeforeHeaderHeightTracking = {read=FOnBeforeHeaderHeightTracking, write=FOnBeforeHeaderHeightTracking};
	__property TVTBeforeItemEraseEvent OnBeforeItemErase = {read=FOnBeforeItemErase, write=FOnBeforeItemErase};
	__property TVTBeforeItemPaintEvent OnBeforeItemPaint = {read=FOnBeforeItemPaint, write=FOnBeforeItemPaint};
	__property TVTNodeExportEvent OnBeforeNodeExport = {read=FOnBeforeNodeExport, write=FOnBeforeNodeExport};
	__property TVTPaintEvent OnBeforePaint = {read=FOnBeforePaint, write=FOnBeforePaint};
	__property TVTTreeExportEvent OnBeforeTreeExport = {read=FOnBeforeTreeExport, write=FOnBeforeTreeExport};
	__property TVTCanSplitterResizeColumnEvent OnCanSplitterResizeColumn = {read=FOnCanSplitterResizeColumn, write=FOnCanSplitterResizeColumn};
	__property TVTCanSplitterResizeHeaderEvent OnCanSplitterResizeHeader = {read=FOnCanSplitterResizeHeader, write=FOnCanSplitterResizeHeader};
	__property TVTCanSplitterResizeNodeEvent OnCanSplitterResizeNode = {read=FOnCanSplitterResizeNode, write=FOnCanSplitterResizeNode};
	__property TVTChangeEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TVTChangeEvent OnChecked = {read=FOnChecked, write=FOnChecked};
	__property TVTCheckChangingEvent OnChecking = {read=FOnChecking, write=FOnChecking};
	__property TVTChangeEvent OnCollapsed = {read=FOnCollapsed, write=FOnCollapsed};
	__property TVTChangingEvent OnCollapsing = {read=FOnCollapsing, write=FOnCollapsing};
	__property TVTColumnClickEvent OnColumnClick = {read=FOnColumnClick, write=FOnColumnClick};
	__property TVTColumnDblClickEvent OnColumnDblClick = {read=FOnColumnDblClick, write=FOnColumnDblClick};
	__property TVTColumnExportEvent OnColumnExport = {read=FOnColumnExport, write=FOnColumnExport};
	__property TVTHeaderNotifyEvent OnColumnResize = {read=FOnColumnResize, write=FOnColumnResize};
	__property TColumnChangeEvent OnColumnVisibilityChanged = {read=fOnColumnVisibilityChanged, write=fOnColumnVisibilityChanged};
	__property TVTColumnWidthDblClickResizeEvent OnColumnWidthDblClickResize = {read=FOnColumnWidthDblClickResize, write=FOnColumnWidthDblClickResize};
	__property TVTColumnWidthTrackingEvent OnColumnWidthTracking = {read=FOnColumnWidthTracking, write=FOnColumnWidthTracking};
	__property TVTCompareEvent OnCompareNodes = {read=FOnCompareNodes, write=FOnCompareNodes};
	__property TVTCreateDataObjectEvent OnCreateDataObject = {read=FOnCreateDataObject, write=FOnCreateDataObject};
	__property TVTCreateDragManagerEvent OnCreateDragManager = {read=FOnCreateDragManager, write=FOnCreateDragManager};
	__property TVTCreateEditorEvent OnCreateEditor = {read=FOnCreateEditor, write=FOnCreateEditor};
	__property TVTDragAllowedEvent OnDragAllowed = {read=FOnDragAllowed, write=FOnDragAllowed};
	__property TVTDragOverEvent OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property TVTDragDropEvent OnDragDrop = {read=FOnDragDrop, write=FOnDragDrop};
	__property TVTDrawHintEvent OnDrawHint = {read=FOnDrawHint, write=FOnDrawHint};
	__property TVTEditCancelEvent OnEditCancelled = {read=FOnEditCancelled, write=FOnEditCancelled};
	__property TVTEditChangingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TVTEditChangeEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property TVTOperationEvent OnEndOperation = {read=FOnEndOperation, write=FOnEndOperation};
	__property TVTChangeEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property TVTChangingEvent OnExpanding = {read=FOnExpanding, write=FOnExpanding};
	__property TVTFocusChangeEvent OnFocusChanged = {read=FOnFocusChanged, write=FOnFocusChanged};
	__property TVTFocusChangingEvent OnFocusChanging = {read=FOnFocusChanging, write=FOnFocusChanging};
	__property TVTFreeNodeEvent OnFreeNode = {read=FOnFreeNode, write=FOnFreeNode};
	__property TVTGetCellIsEmptyEvent OnGetCellIsEmpty = {read=FOnGetCellIsEmpty, write=FOnGetCellIsEmpty};
	__property TVTGetCursorEvent OnGetCursor = {read=FOnGetCursor, write=FOnGetCursor};
	__property TVTGetHeaderCursorEvent OnGetHeaderCursor = {read=FOnGetHeaderCursor, write=FOnGetHeaderCursor};
	__property TVTHelpContextEvent OnGetHelpContext = {read=FOnGetHelpContext, write=FOnGetHelpContext};
	__property TVTGetHintSizeEvent OnGetHintSize = {read=FOnGetHintSize, write=FOnGetHintSize};
	__property TVTHintKindEvent OnGetHintKind = {read=FOnGetHintKind, write=FOnGetHintKind};
	__property TVTGetImageEvent OnGetImageIndex = {read=FOnGetImage, write=FOnGetImage};
	__property TVTGetImageExEvent OnGetImageIndexEx = {read=FOnGetImageEx, write=FOnGetImageEx};
	__property TVTGetImageTextEvent OnGetImageText = {read=FOnGetImageText, write=FOnGetImageText};
	__property TVTGetLineStyleEvent OnGetLineStyle = {read=FOnGetLineStyle, write=FOnGetLineStyle};
	__property TVTGetNodeDataSizeEvent OnGetNodeDataSize = {read=FOnGetNodeDataSize, write=FOnGetNodeDataSize};
	__property TVTPopupEvent OnGetPopupMenu = {read=FOnGetPopupMenu, write=FOnGetPopupMenu};
	__property TVTGetUserClipboardFormatsEvent OnGetUserClipboardFormats = {read=FOnGetUserClipboardFormats, write=FOnGetUserClipboardFormats};
	__property TVTHeaderAddPopupItemEvent OnHeaderAddPopupItem = {read=FOnHeaderAddPopupItem, write=FOnHeaderAddPopupItem};
	__property TVTHeaderClickEvent OnHeaderClick = {read=FOnHeaderClick, write=FOnHeaderClick};
	__property TVTHeaderClickEvent OnHeaderDblClick = {read=FOnHeaderDblClick, write=FOnHeaderDblClick};
	__property TVTHeaderDraggedEvent OnHeaderDragged = {read=FOnHeaderDragged, write=FOnHeaderDragged};
	__property TVTHeaderDraggedOutEvent OnHeaderDraggedOut = {read=FOnHeaderDraggedOut, write=FOnHeaderDraggedOut};
	__property TVTHeaderDraggingEvent OnHeaderDragging = {read=FOnHeaderDragging, write=FOnHeaderDragging};
	__property TVTHeaderPaintEvent OnHeaderDraw = {read=FOnHeaderDraw, write=FOnHeaderDraw};
	__property TVTHeaderPaintQueryElementsEvent OnHeaderDrawQueryElements = {read=FOnHeaderDrawQueryElements, write=FOnHeaderDrawQueryElements};
	__property TVTHeaderHeightTrackingEvent OnHeaderHeightTracking = {read=FOnHeaderHeightTracking, write=FOnHeaderHeightTracking};
	__property TVTHeaderHeightDblClickResizeEvent OnHeaderHeightDblClickResize = {read=FOnHeaderHeightDblClickResize, write=FOnHeaderHeightDblClickResize};
	__property TVTHeaderMouseEvent OnHeaderMouseDown = {read=FOnHeaderMouseDown, write=FOnHeaderMouseDown};
	__property TVTHeaderMouseMoveEvent OnHeaderMouseMove = {read=FOnHeaderMouseMove, write=FOnHeaderMouseMove};
	__property TVTHeaderMouseEvent OnHeaderMouseUp = {read=FOnHeaderMouseUp, write=FOnHeaderMouseUp};
	__property TVTHotNodeChangeEvent OnHotChange = {read=FOnHotChange, write=FOnHotChange};
	__property TVTIncrementalSearchEvent OnIncrementalSearch = {read=FOnIncrementalSearch, write=FOnIncrementalSearch};
	__property TVTInitChildrenEvent OnInitChildren = {read=FOnInitChildren, write=FOnInitChildren};
	__property TVTInitNodeEvent OnInitNode = {read=FOnInitNode, write=FOnInitNode};
	__property TVTKeyActionEvent OnKeyAction = {read=FOnKeyAction, write=FOnKeyAction};
	__property TVTSaveNodeEvent OnLoadNode = {read=FOnLoadNode, write=FOnLoadNode};
	__property TVTSaveTreeEvent OnLoadTree = {read=FOnLoadTree, write=FOnLoadTree};
	__property TVTMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property TVTNodeClickEvent OnNodeClick = {read=FOnNodeClick, write=FOnNodeClick};
	__property TVTNodeCopiedEvent OnNodeCopied = {read=FOnNodeCopied, write=FOnNodeCopied};
	__property TVTNodeCopyingEvent OnNodeCopying = {read=FOnNodeCopying, write=FOnNodeCopying};
	__property TVTNodeClickEvent OnNodeDblClick = {read=FOnNodeDblClick, write=FOnNodeDblClick};
	__property TVTNodeExportEvent OnNodeExport = {read=FOnNodeExport, write=FOnNodeExport};
	__property TVTNodeHeightTrackingEvent OnNodeHeightTracking = {read=FOnNodeHeightTracking, write=FOnNodeHeightTracking};
	__property TVTNodeHeightDblClickResizeEvent OnNodeHeightDblClickResize = {read=FOnNodeHeightDblClickResize, write=FOnNodeHeightDblClickResize};
	__property TVTNodeMovedEvent OnNodeMoved = {read=FOnNodeMoved, write=FOnNodeMoved};
	__property TVTNodeMovingEvent OnNodeMoving = {read=FOnNodeMoving, write=FOnNodeMoving};
	__property TVTBackgroundPaintEvent OnPaintBackground = {read=FOnPaintBackground, write=FOnPaintBackground};
	__property TVTPrepareButtonImagesEvent OnPrepareButtonBitmaps = {read=FOnPrepareButtonImages, write=SetOnPrepareButtonImages};
	__property TVTRemoveFromSelectionEvent OnRemoveFromSelection = {read=FOnRemoveFromSelection, write=FOnRemoveFromSelection};
	__property TVTRenderOLEDataEvent OnRenderOLEData = {read=FOnRenderOLEData, write=FOnRenderOLEData};
	__property TVTChangeEvent OnResetNode = {read=FOnResetNode, write=FOnResetNode};
	__property TVTSaveNodeEvent OnSaveNode = {read=FOnSaveNode, write=FOnSaveNode};
	__property TVTSaveTreeEvent OnSaveTree = {read=FOnSaveTree, write=FOnSaveTree};
	__property TVTScrollEvent OnScroll = {read=FOnScroll, write=FOnScroll};
	__property TVTScrollBarShowEvent OnShowScrollBar = {read=FOnShowScrollBar, write=FOnShowScrollBar};
	__property TVTBeforeGetCheckStateEvent OnBeforeGetCheckState = {read=FOnBeforeGetCheckState, write=FOnBeforeGetCheckState};
	__property TVTOperationEvent OnStartOperation = {read=FOnStartOperation, write=FOnStartOperation};
	__property TVTStateChangeEvent OnStateChange = {read=FOnStateChange, write=FOnStateChange};
	__property TVTStructureChangeEvent OnStructureChange = {read=FOnStructureChange, write=FOnStructureChange};
	__property TVTUpdatingEvent OnUpdating = {read=FOnUpdating, write=FOnUpdating};
	
public:
	__fastcall virtual TBaseVirtualTree(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBaseVirtualTree();
	unsigned __fastcall AbsoluteIndex(PVirtualNode Node);
	virtual PVirtualNode __fastcall AddChild(PVirtualNode Parent, void * UserData = (void *)(0x0))/* overload */;
	PVirtualNode __fastcall AddChild(PVirtualNode Parent, const System::_di_IInterface UserData)/* overload */;
	PVirtualNode __fastcall AddChild(PVirtualNode Parent, System::TObject* const UserData)/* overload */;
	void __fastcall AddFromStream(System::Classes::TStream* Stream, PVirtualNode TargetNode);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	HIDESBASE void __fastcall BeginDrag(bool Immediate, int Threshold = 0xffffffff);
	void __fastcall BeginSynch();
	virtual void __fastcall BeginUpdate();
	void __fastcall CancelCutOrCopy();
	bool __fastcall CancelEditNode();
	void __fastcall CancelOperation();
	virtual bool __fastcall CanEdit(PVirtualNode Node, TColumnIndex Column);
	DYNAMIC bool __fastcall CanFocus();
	virtual void __fastcall Clear();
	void __fastcall ClearChecked();
	void __fastcall ClearSelection()/* overload */;
	PVirtualNode __fastcall CopyTo(PVirtualNode Source, TBaseVirtualTree* Tree, TVTNodeAttachMode Mode, bool ChildrenOnly)/* overload */;
	PVirtualNode __fastcall CopyTo(PVirtualNode Source, PVirtualNode Target, TVTNodeAttachMode Mode, bool ChildrenOnly)/* overload */;
	virtual void __fastcall CopyToClipboard();
	virtual void __fastcall CutToClipboard();
	void __fastcall DeleteChildren(PVirtualNode Node, bool ResetHasChildren = false);
	void __fastcall DeleteNode(PVirtualNode Node, bool pReIndex = true)/* overload */;
	void __fastcall DeleteNodes(const TNodeArray pNodes);
	virtual void __fastcall DeleteSelectedNodes();
	HIDESBASE bool __fastcall Dragging();
	virtual bool __fastcall EditNode(PVirtualNode Node, TColumnIndex Column);
	bool __fastcall EndEditNode();
	void __fastcall EndSynch();
	virtual void __fastcall EndUpdate();
	virtual void __fastcall EnsureNodeSelected();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	void __fastcall FinishCutOrCopy();
	void __fastcall FlushClipboard();
	virtual void __fastcall FullCollapse(PVirtualNode Node = (PVirtualNode)(0x0));
	virtual void __fastcall FullExpand(PVirtualNode Node = (PVirtualNode)(0x0));
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	System::Types::TRect __fastcall GetDisplayRect(PVirtualNode Node, TColumnIndex Column, bool TextOnly, bool Unclipped = false, bool ApplyCellContentMargin = false);
	bool __fastcall GetEffectivelyFiltered(PVirtualNode Node);
	bool __fastcall GetEffectivelyVisible(PVirtualNode Node);
	PVirtualNode __fastcall GetFirst(bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetFirstChecked(TCheckState State = (Virtualtrees::Types::TCheckState)(0x2), bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetFirstChild(PVirtualNode Node);
	PVirtualNode __fastcall GetFirstChildNoInit(PVirtualNode Node);
	PVirtualNode __fastcall GetFirstCutCopy(bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetFirstInitialized(bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetFirstLeaf();
	PVirtualNode __fastcall GetFirstLevel(unsigned NodeLevel);
	PVirtualNode __fastcall GetFirstNoInit(bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetFirstSelected(bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetFirstVisible(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = true, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetFirstVisibleChild(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetFirstVisibleChildNoInit(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetFirstVisibleNoInit(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = true, bool IncludeFiltered = false);
	virtual void __fastcall GetHitTestInfoAt(int X, int Y, bool Relative, THitInfo &HitInfo);
	PVirtualNode __fastcall GetLast(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetLastInitialized(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetLastNoInit(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetLastChild(PVirtualNode Node);
	PVirtualNode __fastcall GetLastChildNoInit(PVirtualNode Node);
	PVirtualNode __fastcall GetLastSelected(bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetLastVisible(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = true, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetLastVisibleChild(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetLastVisibleChildNoInit(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetLastVisibleNoInit(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = true, bool IncludeFiltered = false);
	virtual int __fastcall GetMaxColumnWidth(TColumnIndex Column, bool UseSmartColumnWidth = false);
	PVirtualNode __fastcall GetNext(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetNextChecked(PVirtualNode Node, TCheckState State = (Virtualtrees::Types::TCheckState)(0x2), bool ConsiderChildrenAbove = false)/* overload */;
	PVirtualNode __fastcall GetNextChecked(PVirtualNode Node, bool ConsiderChildrenAbove)/* overload */;
	PVirtualNode __fastcall GetNextCutCopy(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetNextInitialized(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetNextLeaf(PVirtualNode Node);
	PVirtualNode __fastcall GetNextLevel(PVirtualNode Node, unsigned NodeLevel);
	PVirtualNode __fastcall GetNextNoInit(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetNextSelected(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetNextSibling(PVirtualNode Node);
	PVirtualNode __fastcall GetNextSiblingNoInit(PVirtualNode Node);
	PVirtualNode __fastcall GetNextVisible(PVirtualNode Node, bool ConsiderChildrenAbove = true);
	PVirtualNode __fastcall GetNextVisibleNoInit(PVirtualNode Node, bool ConsiderChildrenAbove = true);
	PVirtualNode __fastcall GetNextVisibleSibling(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetNextVisibleSiblingNoInit(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetNodeAt(const System::Types::TPoint &P)/* overload */;
	PVirtualNode __fastcall GetNodeAt(int X, int Y)/* overload */;
	PVirtualNode __fastcall GetNodeAt(int X, int Y, bool Relative, int &NodeTop)/* overload */;
	void * __fastcall GetNodeData(PVirtualNode Node)/* overload */;
	template<typename T> T __fastcall GetNodeData(PVirtualNode pNode)/* overload */;
	template<typename T> System::DynamicArray<T> __fastcall GetSelectedData()/* overload */;
	template<typename T> T __fastcall GetInterfaceFromNodeData(PVirtualNode pNode)/* overload */;
	template<typename T> T __fastcall GetNodeDataAt(int pXCoord, int pYCoord);
	template<typename T> T __fastcall GetFirstSelectedNodeData();
	unsigned __fastcall GetNodeLevel(PVirtualNode Node);
	int __fastcall GetNodeLevelForSelectConstraint(PVirtualNode Node);
	int __fastcall GetOffset(TVTElement pElement, PVirtualNode pNode);
	void __fastcall GetOffsets(PVirtualNode pNode, /* out */ TVTOffsets &pOffsets, TVTElement pElement = (TVTElement)(0x8), int pColumn = 0xffffffff);
	PVirtualNode __fastcall GetPrevious(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetPreviousChecked(PVirtualNode Node, TCheckState State = (Virtualtrees::Types::TCheckState)(0x2), bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetPreviousCutCopy(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetPreviousInitialized(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetPreviousLeaf(PVirtualNode Node);
	PVirtualNode __fastcall GetPreviousLevel(PVirtualNode Node, unsigned NodeLevel);
	PVirtualNode __fastcall GetPreviousNoInit(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetPreviousSelected(PVirtualNode Node, bool ConsiderChildrenAbove = false);
	PVirtualNode __fastcall GetPreviousSibling(PVirtualNode Node);
	PVirtualNode __fastcall GetPreviousSiblingNoInit(PVirtualNode Node);
	PVirtualNode __fastcall GetPreviousVisible(PVirtualNode Node, bool ConsiderChildrenAbove = true);
	PVirtualNode __fastcall GetPreviousVisibleNoInit(PVirtualNode Node, bool ConsiderChildrenAbove = true);
	PVirtualNode __fastcall GetPreviousVisibleSibling(PVirtualNode Node, bool IncludeFiltered = false);
	PVirtualNode __fastcall GetPreviousVisibleSiblingNoInit(PVirtualNode Node, bool IncludeFiltered = false);
	TNodeArray __fastcall GetSortedCutCopySet(bool Resolve);
	TNodeArray __fastcall GetSortedSelection(bool Resolve);
	virtual void __fastcall GetTextInfo(PVirtualNode Node, TColumnIndex Column, Vcl::Graphics::TFont* const AFont, System::Types::TRect &R, System::UnicodeString &Text);
	System::Types::TRect __fastcall GetTreeRect();
	PVirtualNode __fastcall GetVisibleParent(PVirtualNode Node, bool IncludeFiltered = false);
	bool __fastcall HasAsParent(PVirtualNode Node, PVirtualNode PotentialParent);
	PVirtualNode __fastcall InsertNode(PVirtualNode Node, TVTNodeAttachMode Mode, void * UserData = (void *)(0x0));
	void __fastcall InvalidateChildren(PVirtualNode Node, bool Recursive);
	void __fastcall InvalidateColumn(TColumnIndex Column);
	virtual System::Types::TRect __fastcall InvalidateNode(PVirtualNode Node);
	void __fastcall InvalidateToBottom(PVirtualNode Node);
	void __fastcall InvertSelection(bool VisibleOnly);
	bool __fastcall IsEditing();
	bool __fastcall IsMouseSelecting();
	bool __fastcall IsEmpty();
	bool __fastcall IsUpdating();
	PVirtualNode __fastcall IterateSubtree(PVirtualNode Node, _di_TVTGetNodeProc Callback, void * Data, TVirtualNodeStates Filter = TVirtualNodeStates() , bool DoInit = false, bool ChildNodesOnly = false);
	virtual void __fastcall LoadFromFile(const System::Sysutils::TFileName FileName);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall MeasureItemHeight(TCanvas* const Canvas, PVirtualNode Node);
	void __fastcall MoveTo(PVirtualNode Source, PVirtualNode Target, TVTNodeAttachMode Mode, bool ChildrenOnly)/* overload */;
	void __fastcall MoveTo(PVirtualNode Node, TBaseVirtualTree* Tree, TVTNodeAttachMode Mode, bool ChildrenOnly)/* overload */;
	virtual void __fastcall PaintTree(TCanvas* TargetCanvas, const System::Types::TRect &Window, const System::Types::TPoint &Target, TVTInternalPaintOptions PaintOptions, Vcl::Graphics::TPixelFormat PixelFormat = (Vcl::Graphics::TPixelFormat)(0x0));
	virtual bool __fastcall PasteFromClipboard();
	void __fastcall PrepareDragImage(const System::Types::TPoint &HotSpot, const _di_IDataObject DataObject);
	void __fastcall Print(Vcl::Printers::TPrinter* Printer, bool PrintHeader);
	bool __fastcall ProcessDrop(const _di_IDataObject DataObject, PVirtualNode TargetNode, int &Effect, TVTNodeAttachMode Mode);
	bool __fastcall ProcessOLEData(TBaseVirtualTree* Source, const _di_IDataObject DataObject, PVirtualNode TargetNode, TVTNodeAttachMode Mode, bool Optimized);
	void __fastcall RepaintNode(PVirtualNode Node);
	virtual void __fastcall ReinitChildren(PVirtualNode Node, bool Recursive);
	void __fastcall InitRecursive(PVirtualNode Node, unsigned Levels = (unsigned)(0x7fffffff), bool pVisibleOnly = true);
	virtual void __fastcall ReinitNode(PVirtualNode Node, bool Recursive);
	virtual void __fastcall ResetNode(PVirtualNode Node);
	void __fastcall SaveToFile(const System::Sysutils::TFileName FileName);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, PVirtualNode Node = (PVirtualNode)(0x0));
	int __fastcall ScaledPixels(int pPixels);
	void __fastcall ScaleNodeHeights(int M, int D);
	bool __fastcall ScrollIntoView(PVirtualNode Node, bool Center, bool Horizontally = false)/* overload */;
	bool __fastcall ScrollIntoView(TColumnIndex Column, bool Center, PVirtualNode Node = (PVirtualNode)(0x0))/* overload */;
	void __fastcall SelectAll(bool VisibleOnly);
	void __fastcall SetCheckStateForAll(TCheckState aCheckState, bool pSelectedOnly, bool pExcludeDisabled = true);
	void __fastcall SetNodeData(PVirtualNode pNode, void * pUserData)/* overload */;
	void __fastcall SetNodeData(PVirtualNode pNode, const System::_di_IInterface pUserData)/* overload */;
	template<typename T> void __fastcall SetNodeData(PVirtualNode pNode, T pUserData)/* overload */;
	virtual void __fastcall Sort(PVirtualNode Node, TColumnIndex Column, TSortDirection Direction, bool DoInit = true);
	virtual void __fastcall SortTree(TColumnIndex Column, TSortDirection Direction, bool DoInit = true);
	void __fastcall ToggleNode(PVirtualNode Node);
	virtual void __fastcall UpdateHorizontalRange();
	void __fastcall UpdateHorizontalScrollBar(bool DoRepaint);
	void __fastcall UpdateRanges();
	virtual void __fastcall UpdateScrollBars(bool DoRepaint);
	void __fastcall UpdateVerticalRange();
	void __fastcall UpdateVerticalScrollBar(bool DoRepaint);
	HIDESBASE bool __fastcall UseRightToLeftReading();
	void __fastcall ValidateChildren(PVirtualNode Node, bool Recursive);
	void __fastcall ValidateNode(PVirtualNode Node, bool Recursive);
	TVTVirtualNodeEnumeration __fastcall Nodes(bool ConsiderChildrenAbove = false);
	TVTVirtualNodeEnumeration __fastcall CheckedNodes(TCheckState State = (Virtualtrees::Types::TCheckState)(0x2), bool ConsiderChildrenAbove = false);
	TVTVirtualNodeEnumeration __fastcall ChildNodes(PVirtualNode Node);
	TVTVirtualNodeEnumeration __fastcall CutCopyNodes(bool ConsiderChildrenAbove = false);
	TVTVirtualNodeEnumeration __fastcall InitializedNodes(bool ConsiderChildrenAbove = false);
	TVTVirtualNodeEnumeration __fastcall LeafNodes();
	TVTVirtualNodeEnumeration __fastcall LevelNodes(unsigned NodeLevel);
	TVTVirtualNodeEnumeration __fastcall NoInitNodes(bool ConsiderChildrenAbove = false);
	TVTVirtualNodeEnumeration __fastcall SelectedNodes(bool ConsiderChildrenAbove = false);
	TVTVirtualNodeEnumeration __fastcall VisibleNodes(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = true, bool IncludeFiltered = false);
	TVTVirtualNodeEnumeration __fastcall VisibleChildNodes(PVirtualNode Node, bool IncludeFiltered = false);
	TVTVirtualNodeEnumeration __fastcall VisibleChildNoInitNodes(PVirtualNode Node, bool IncludeFiltered = false);
	TVTVirtualNodeEnumeration __fastcall VisibleNoInitNodes(PVirtualNode Node = (PVirtualNode)(0x0), bool ConsiderChildrenAbove = true, bool IncludeFiltered = false);
	__property _di_IAccessible Accessible = {read=FAccessible, write=FAccessible};
	__property _di_IAccessible AccessibleItem = {read=FAccessibleItem, write=FAccessibleItem};
	__property System::UnicodeString AccessibleName = {read=FAccessibleName, write=FAccessibleName};
	__property PVirtualNode BottomNode = {read=GetBottomNode, write=SetBottomNode};
	__property int CheckedCount = {read=GetCheckedCount, nodefault};
	__property Vcl::Imglist::TCustomImageList* CheckImages = {read=FCheckImages};
	__property TCheckState CheckState[PVirtualNode Node] = {read=GetCheckState, write=SetCheckState};
	__property TCheckType CheckType[PVirtualNode Node] = {read=GetCheckType, write=SetCheckType};
	__property unsigned ChildCount[PVirtualNode Node] = {read=GetChildCount, write=SetChildCount};
	__property bool ChildrenInitialized[PVirtualNode Node] = {read=GetChildrenInitialized};
	__property int CutCopyCount = {read=GetCutCopyCount, nodefault};
	__property Virtualtrees::Dragimage::TVTDragImage* DragImage = {read=FDragImage};
	__property _di_IVTDragManager DragManager = {read=GetDragManager};
	__property PVirtualNode DropTargetNode = {read=FDropTargetNode, write=FDropTargetNode};
	__property _di_IVTEditLink EditLink = {read=FEditLink};
	__property System::UnicodeString EmptyListMessage = {read=FEmptyListMessage, write=SetEmptyListMessage};
	__property bool Expanded[PVirtualNode Node] = {read=GetExpanded, write=SetExpanded};
	__property TColumnIndex FocusedColumn = {read=FFocusedColumn, write=SetFocusedColumn, default=-2};
	__property PVirtualNode FocusedNode = {read=FFocusedNode, write=SetFocusedNode};
	__property Font;
	__property bool FullyVisible[PVirtualNode Node] = {read=GetFullyVisible, write=SetFullyVisible};
	__property bool HasChildren[PVirtualNode Node] = {read=GetHasChildren, write=SetHasChildren};
	__property TVTHeader* Header = {read=FHeader, write=SetHeader};
	__property PVirtualNode HotNode = {read=FCurrentHotNode, write=SetHotNode};
	__property TColumnIndex HotColumn = {read=FCurrentHotColumn, nodefault};
	__property bool IsDisabled[PVirtualNode Node] = {read=GetDisabled, write=SetDisabled};
	__property bool IsEffectivelyFiltered[PVirtualNode Node] = {read=GetEffectivelyFiltered};
	__property bool IsEffectivelyVisible[PVirtualNode Node] = {read=GetEffectivelyVisible};
	__property bool IsFiltered[PVirtualNode Node] = {read=GetFiltered, write=SetFiltered};
	__property bool IsVisible[PVirtualNode Node] = {read=GetVisible, write=SetVisible};
	__property bool MultiLine[PVirtualNode Node] = {read=GetMultiline, write=SetMultiline};
	__property unsigned NodeHeight[PVirtualNode Node] = {read=GetNodeHeight, write=SetNodeHeight};
	__property PVirtualNode NodeParent[PVirtualNode Node] = {read=GetNodeParent, write=SetNodeParent};
	__property int OffsetX = {read=FOffsetX, write=SetOffsetX, nodefault};
	__property System::Types::TPoint OffsetXY = {read=GetOffsetXY, write=SetOffsetXY};
	__property int OffsetY = {read=FOffsetY, write=SetOffsetY, nodefault};
	__property unsigned OperationCount = {read=FOperationCount, nodefault};
	__property PVirtualNode RootNode = {read=FRoot};
	__property System::UnicodeString SearchBuffer = {read=FSearchBuffer};
	__property bool Selected[PVirtualNode Node] = {read=GetSelected, write=SetSelected};
	__property bool SelectionLocked = {read=FSelectionLocked, write=FSelectionLocked, nodefault};
	__property unsigned TotalCount = {read=GetTotalCount, nodefault};
	__property TVirtualTreeStates TreeStates = {read=FStates, write=FStates};
	__property int SelectedCount = {read=FSelectionCount, nodefault};
	__property PVirtualNode TopNode = {read=GetTopNode, write=SetTopNode};
	__property System::Byte VerticalAlignment[PVirtualNode Node] = {read=GetVerticalAlignment, write=SetVerticalAlignment};
	__property unsigned VisibleCount = {read=FVisibleCount, nodefault};
	__property bool VisiblePath[PVirtualNode Node] = {read=GetVisiblePath, write=SetVisiblePath};
	__property unsigned UpdateCount = {read=FUpdateCount, nodefault};
	__property bool DoubleBuffered = {read=GetDoubleBuffered, write=SetDoubleBuffered, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TBaseVirtualTree(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


enum DECLSPEC_DENUM TVSTTextType : unsigned char { ttNormal, ttStatic };

enum DECLSPEC_DENUM TVSTTextSourceType : unsigned char { tstAll, tstInitialized, tstSelected, tstCutCopySet, tstVisible, tstChecked };

typedef void __fastcall (__closure *TVTPaintText)(TBaseVirtualTree* Sender, TCanvas* const TargetCanvas, PVirtualNode Node, TColumnIndex Column, TVSTTextType TextType);

typedef void __fastcall (__closure *TVSTGetTextEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, TVSTTextType TextType, System::UnicodeString &CellText);

typedef void __fastcall (__closure *TVSTGetHintEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, TVTTooltipLineBreakStyle &LineBreakStyle, System::UnicodeString &HintText);

typedef void __fastcall (__closure *TVSTNewTextEvent)(TBaseVirtualTree* Sender, PVirtualNode Node, TColumnIndex Column, System::UnicodeString NewText);

typedef void __fastcall (__closure *TVSTShortenStringEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString S, int TextSpace, System::UnicodeString &Result, bool &Done);

typedef void __fastcall (__closure *TVTMeasureTextEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Text, int &Extent);

typedef void __fastcall (__closure *TVTDrawTextEvent)(TBaseVirtualTree* Sender, TCanvas* TargetCanvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Text, const System::Types::TRect &CellRect, bool &DefaultDraw);

struct DECLSPEC_DRECORD TVSTGetCellTextEventArgs
{
public:
	PVirtualNode Node;
	TColumnIndex Column;
	System::UnicodeString CellText;
	System::UnicodeString StaticText;
	System::Classes::TAlignment StaticTextAlignment;
	TVTExportType ExportType;
	__fastcall TVSTGetCellTextEventArgs(PVirtualNode pNode, TColumnIndex pColumn, TVTExportType pExportType);
	TVSTGetCellTextEventArgs() {}
};


typedef void __fastcall (__closure *TVSTGetCellTextEvent)(TCustomVirtualStringTree* Sender, TVSTGetCellTextEventArgs &E);

class PASCALIMPLEMENTATION TCustomVirtualStringTree : public TBaseVirtualTree
{
	typedef TBaseVirtualTree inherited;
	
private:
	unsigned FInternalDataOffset;
	System::UnicodeString FDefaultText;
	int FTextHeight;
	int FEllipsisWidth;
	TVTPaintText FOnPaintText;
	TVSTGetTextEvent FOnGetText;
	TVSTGetCellTextEvent fOnGetCellText;
	TVSTGetHintEvent FOnGetHint;
	TVSTNewTextEvent FOnNewText;
	TVSTShortenStringEvent FOnShortenString;
	TVTMeasureTextEvent FOnMeasureTextWidth;
	TVTMeasureTextEvent FOnMeasureTextHeight;
	TVTDrawTextEvent FOnDrawText;
	bool __fastcall IsDefaultTextStored();
	System::UnicodeString __fastcall GetImageText(PVirtualNode Node, TVTImageKind Kind, TColumnIndex Column);
	TCustomStringTreeOptions* __fastcall GetOptions();
	System::UnicodeString __fastcall GetStaticText(PVirtualNode Node, TColumnIndex Column);
	HIDESBASE System::UnicodeString __fastcall GetText(PVirtualNode Node, TColumnIndex Column);
	void __fastcall ReadText(System::Classes::TReader* Reader);
	void __fastcall WriteText(System::Classes::TWriter* Writer);
	void __fastcall ResetInternalData(PVirtualNode Node, bool Recursive);
	void __fastcall SetDefaultText(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetOptions(TCustomStringTreeOptions* const Value);
	HIDESBASE void __fastcall SetText(PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Value);
	MESSAGE void __fastcall WMSetFont(Winapi::Messages::TWMSetFont &Msg);
	void __fastcall GetDataFromGrid(System::Classes::TStringList* const AStrings, const bool IncludeHeading = true);
	
protected:
	System::Classes::TStringList* FPreviouslySelected;
	void __fastcall InitializeTextProperties(TVTPaintInfo &PaintInfo);
	virtual void __fastcall PaintNormalText(TVTPaintInfo &PaintInfo, int TextOutFlags, System::UnicodeString Text);
	virtual void __fastcall PaintStaticText(const TVTPaintInfo &PaintInfo, System::Classes::TAlignment pStaticTextAlignment, const System::UnicodeString Text);
	virtual void __fastcall AdjustPaintCellRect(TVTPaintInfo &PaintInfo, TColumnIndex &NextNonEmpty);
	bool __fastcall CanExportNode(PVirtualNode Node);
	virtual int __fastcall CalculateStaticTextWidth(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Text);
	virtual int __fastcall CalculateTextWidth(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Text);
	virtual bool __fastcall ColumnIsEmpty(PVirtualNode Node, TColumnIndex Column);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual _di_IVTEditLink __fastcall DoCreateEditor(PVirtualNode Node, TColumnIndex Column);
	virtual System::UnicodeString __fastcall DoGetNodeHint(PVirtualNode Node, TColumnIndex Column, TVTTooltipLineBreakStyle &LineBreakStyle);
	virtual System::UnicodeString __fastcall DoGetNodeTooltip(PVirtualNode Node, TColumnIndex Column, TVTTooltipLineBreakStyle &LineBreakStyle);
	virtual int __fastcall DoGetNodeExtraWidth(PVirtualNode Node, TColumnIndex Column, TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual int __fastcall DoGetNodeWidth(PVirtualNode Node, TColumnIndex Column, TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual void __fastcall DoGetText(TVSTGetCellTextEventArgs &pEventArgs);
	virtual int __fastcall DoIncrementalSearch(PVirtualNode Node, const System::UnicodeString Text);
	virtual void __fastcall DoNewText(PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Text);
	virtual void __fastcall DoPaintNode(TVTPaintInfo &PaintInfo);
	virtual void __fastcall DoPaintText(PVirtualNode Node, TCanvas* const Canvas, TColumnIndex Column, TVSTTextType TextType);
	virtual System::UnicodeString __fastcall DoShortenString(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString S, int Width, int EllipsisWidth = 0x0);
	virtual void __fastcall DoTextDrawing(TVTPaintInfo &PaintInfo, const System::UnicodeString Text, const System::Types::TRect &CellRect, unsigned DrawFormat);
	virtual System::Types::TSize __fastcall DoTextMeasuring(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, const System::UnicodeString Text);
	virtual TTreeOptionsClass __fastcall GetOptionsClass();
	void __fastcall GetRenderStartValues(TVSTTextSourceType Source, PVirtualNode &Node, TGetNextNodeProc &NextNodeProc);
	HIDESBASE void * __fastcall InternalData(PVirtualNode Node);
	virtual void __fastcall MainColumnChanged();
	virtual bool __fastcall ReadChunk(System::Classes::TStream* Stream, int Version, PVirtualNode Node, int ChunkType, int ChunkSize);
	void __fastcall ReadOldStringOptions(System::Classes::TReader* Reader);
	virtual HRESULT __fastcall RenderOLEData(const Winapi::Activex::TFormatEtc &FormatEtcIn, /* out */ Winapi::Activex::TStgMedium &Medium, bool ForClipboard);
	virtual void __fastcall SetChildCount(PVirtualNode Node, unsigned NewChildCount);
	virtual void __fastcall WriteChunks(System::Classes::TStream* Stream, PVirtualNode Node);
	__property System::UnicodeString DefaultText = {read=FDefaultText, write=SetDefaultText, stored=false};
	__property int EllipsisWidth = {read=FEllipsisWidth, nodefault};
	__property TCustomStringTreeOptions* TreeOptions = {read=GetOptions, write=SetOptions};
	__property TVSTGetHintEvent OnGetHint = {read=FOnGetHint, write=FOnGetHint};
	__property TVSTGetTextEvent OnGetText = {read=FOnGetText, write=FOnGetText};
	__property TVSTGetCellTextEvent OnGetCellText = {read=fOnGetCellText, write=fOnGetCellText};
	__property TVSTNewTextEvent OnNewText = {read=FOnNewText, write=FOnNewText};
	__property TVTPaintText OnPaintText = {read=FOnPaintText, write=FOnPaintText};
	__property TVSTShortenStringEvent OnShortenString = {read=FOnShortenString, write=FOnShortenString};
	__property TVTMeasureTextEvent OnMeasureTextWidth = {read=FOnMeasureTextWidth, write=FOnMeasureTextWidth};
	__property TVTMeasureTextEvent OnMeasureTextHeight = {read=FOnMeasureTextHeight, write=FOnMeasureTextHeight};
	__property TVTDrawTextEvent OnDrawText = {read=FOnDrawText, write=FOnDrawText};
	
public:
	__fastcall virtual TCustomVirtualStringTree(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomVirtualStringTree();
	virtual PVirtualNode __fastcall AddChild(PVirtualNode Parent, void * UserData = (void *)(0x0))/* overload */;
	virtual int __fastcall ComputeNodeHeight(TCanvas* Canvas, PVirtualNode Node, TColumnIndex Column, System::UnicodeString S = System::UnicodeString());
	unsigned __int64 __fastcall ContentToClipboard(System::Word Format, TVSTTextSourceType Source);
	void __fastcall ContentToCustom(TVSTTextSourceType Source);
	System::UnicodeString __fastcall ContentToHTML(TVSTTextSourceType Source, const System::UnicodeString Caption = System::UnicodeString());
	System::RawByteString __fastcall ContentToRTF(TVSTTextSourceType Source);
	System::UnicodeString __fastcall ContentToText(TVSTTextSourceType Source, System::WideChar Separator)/* overload */;
	System::UnicodeString __fastcall ContentToUnicode _DEPRECATED_ATTRIBUTE1("Use ContentToText instead") (TVSTTextSourceType Source, System::WideChar Separator)/* overload */;
	System::UnicodeString __fastcall ContentToText(TVSTTextSourceType Source, const System::UnicodeString Separator)/* overload */;
	virtual void __fastcall GetTextInfo(PVirtualNode Node, TColumnIndex Column, Vcl::Graphics::TFont* const AFont, System::Types::TRect &R, System::UnicodeString &Text);
	virtual System::Types::TRect __fastcall InvalidateNode(PVirtualNode Node);
	System::UnicodeString __fastcall Path(PVirtualNode Node, TColumnIndex Column, System::WideChar Delimiter);
	virtual void __fastcall ReinitNode(PVirtualNode Node, bool Recursive);
	virtual void __fastcall AddToSelection(PVirtualNode Node, bool NotifySynced)/* overload */;
	virtual void __fastcall RemoveFromSelection(PVirtualNode Node);
	bool __fastcall SaveToCSVFile(const System::Sysutils::TFileName FileNameWithPath, const bool IncludeHeading);
	__property System::UnicodeString ImageText[PVirtualNode Node][TVTImageKind Kind][TColumnIndex Column] = {read=GetImageText};
	__property System::UnicodeString StaticText[PVirtualNode Node][TColumnIndex Column] = {read=GetStaticText};
	__property System::UnicodeString Text[PVirtualNode Node][TColumnIndex Column] = {read=GetText, write=SetText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomVirtualStringTree(HWND ParentWindow) : TBaseVirtualTree(ParentWindow) { }
	
	/* Hoisted overloads: */
	
public:
	inline PVirtualNode __fastcall  AddChild(PVirtualNode Parent, const System::_di_IInterface UserData){ return TBaseVirtualTree::AddChild(Parent, UserData); }
	inline PVirtualNode __fastcall  AddChild(PVirtualNode Parent, System::TObject* const UserData){ return TBaseVirtualTree::AddChild(Parent, UserData); }
	
protected:
	inline void __fastcall  AddToSelection(const TNodeArray NewItems, int NewLength, bool ForceInsert = false){ TBaseVirtualTree::AddToSelection(NewItems, NewLength, ForceInsert); }
	
};


class PASCALIMPLEMENTATION TVirtualStringTree : public TCustomVirtualStringTree
{
	typedef TCustomVirtualStringTree inherited;
	
private:
	HIDESBASE TStringTreeOptions* __fastcall GetOptions();
	HIDESBASE void __fastcall SetOptions(TStringTreeOptions* const Value);
	
protected:
	virtual TTreeOptionsClass __fastcall GetOptionsClass();
	
public:
	__property Canvas;
	__property RangeX;
	__property LastDragEffect;
	__property CheckImageKind = {default=1};
	
__published:
	__property AccessibleName = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AnimationDuration = {default=200};
	__property AutoExpandDelay = {default=1000};
	__property AutoScrollDelay = {default=1000};
	__property AutoScrollInterval = {default=1};
	__property Background;
	__property BackGroundImageTransparent = {default=0};
	__property BackgroundOffsetX = {index=0, default=0};
	__property BackgroundOffsetY = {index=1, default=0};
	__property BiDiMode;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BorderStyle = {default=1};
	__property BottomSpace = {default=0};
	__property ButtonFillMode = {default=0};
	__property ButtonStyle = {default=0};
	__property BorderWidth = {default=0};
	__property ChangeDelay = {default=0};
	__property ClipboardFormats;
	__property Color = {default=-16777211};
	__property Colors;
	__property Constraints;
	__property Ctl3D;
	__property CustomCheckImages;
	__property DefaultNodeHeight = {default=18};
	__property DefaultPasteMode = {default=4};
	__property DefaultText = {default=0};
	__property DragCursor = {default=-12};
	__property DragHeight = {default=350};
	__property DragKind = {default=0};
	__property DragImageKind = {default=0};
	__property DragMode = {default=0};
	__property DragOperations = {default=3};
	__property DragType = {default=0};
	__property DragWidth = {default=200};
	__property DrawSelectionMode = {default=0};
	__property EditDelay = {default=1000};
	__property EmptyListMessage = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Header;
	__property HintMode = {default=0};
	__property HotCursor = {default=0};
	__property Images;
	__property IncrementalSearch = {default=1};
	__property IncrementalSearchDirection = {default=0};
	__property IncrementalSearchStart = {default=2};
	__property IncrementalSearchTimeout = {default=1000};
	__property Indent = {default=18};
	__property LineMode = {default=0};
	__property LineStyle = {default=1};
	__property Margin = {default=4};
	__property NodeAlignment = {default=2};
	__property NodeDataSize = {default=-1};
	__property OperationCanceled;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RootNodeCount = {default=0};
	__property ScrollBarOptions;
	__property SelectionBlendFactor = {default=128};
	__property SelectionCurveRadius = {default=0};
	__property ShowHint;
	__property StateImages;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TextMargin = {default=4};
	__property TStringTreeOptions* TreeOptions = {read=GetOptions, write=SetOptions};
	__property Visible = {default=1};
	__property WantTabs = {default=0};
	__property OnAddToSelection;
	__property OnAdvancedHeaderDraw;
	__property OnAfterAutoFitColumn;
	__property OnAfterAutoFitColumns;
	__property OnAfterCellPaint;
	__property OnAfterColumnExport;
	__property OnAfterColumnWidthTracking;
	__property OnAfterGetMaxColumnWidth;
	__property OnAfterHeaderExport;
	__property OnAfterHeaderHeightTracking;
	__property OnAfterItemErase;
	__property OnAfterItemPaint;
	__property OnAfterNodeExport;
	__property OnAfterPaint;
	__property OnAfterTreeExport;
	__property OnBeforeAutoFitColumn;
	__property OnBeforeAutoFitColumns;
	__property OnBeforeCellPaint;
	__property OnBeforeColumnExport;
	__property OnBeforeColumnWidthTracking;
	__property OnBeforeDrawTreeLine;
	__property OnBeforeGetMaxColumnWidth;
	__property OnBeforeHeaderExport;
	__property OnBeforeHeaderHeightTracking;
	__property OnBeforeItemErase;
	__property OnBeforeItemPaint;
	__property OnBeforeNodeExport;
	__property OnBeforePaint;
	__property OnBeforeTreeExport;
	__property OnCanSplitterResizeColumn;
	__property OnCanSplitterResizeHeader;
	__property OnCanSplitterResizeNode;
	__property OnChange;
	__property OnChecked;
	__property OnChecking;
	__property OnClick;
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnColumnClick;
	__property OnColumnDblClick;
	__property OnColumnExport;
	__property OnColumnResize;
	__property OnColumnVisibilityChanged;
	__property OnColumnWidthDblClickResize;
	__property OnColumnWidthTracking;
	__property OnCompareNodes;
	__property OnContextPopup;
	__property OnCreateDataObject;
	__property OnCreateDragManager;
	__property OnCreateEditor;
	__property OnDblClick;
	__property OnDragAllowed;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDrawHint;
	__property OnDrawText;
	__property OnEditCancelled;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEndOperation;
	__property OnEnter;
	__property OnExit;
	__property OnExpanded;
	__property OnExpanding;
	__property OnFocusChanged;
	__property OnFocusChanging;
	__property OnFreeNode;
	__property OnGetCellText;
	__property OnGetCellIsEmpty;
	__property OnGetCursor;
	__property OnGetHeaderCursor;
	__property OnGetText;
	__property OnPaintText;
	__property OnGetHelpContext;
	__property OnGetHintKind;
	__property OnGetHintSize;
	__property OnGetImageIndex;
	__property OnGetImageIndexEx;
	__property OnGetImageText;
	__property OnGetHint;
	__property OnGetLineStyle;
	__property OnGetNodeDataSize;
	__property OnGetPopupMenu;
	__property OnGetUserClipboardFormats;
	__property OnHeaderAddPopupItem;
	__property OnHeaderClick;
	__property OnHeaderDblClick;
	__property OnHeaderDragged;
	__property OnHeaderDraggedOut;
	__property OnHeaderDragging;
	__property OnHeaderDraw;
	__property OnHeaderDrawQueryElements;
	__property OnHeaderHeightDblClickResize;
	__property OnHeaderHeightTracking;
	__property OnHeaderMouseDown;
	__property OnHeaderMouseMove;
	__property OnHeaderMouseUp;
	__property OnHotChange;
	__property OnIncrementalSearch;
	__property OnInitChildren;
	__property OnInitNode;
	__property OnKeyAction;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnLoadNode;
	__property OnLoadTree;
	__property OnMeasureItem;
	__property OnMeasureTextWidth;
	__property OnMeasureTextHeight;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnNewText;
	__property OnNodeClick;
	__property OnNodeCopied;
	__property OnNodeCopying;
	__property OnNodeDblClick;
	__property OnNodeExport;
	__property OnNodeHeightDblClickResize;
	__property OnNodeHeightTracking;
	__property OnNodeMoved;
	__property OnNodeMoving;
	__property OnPaintBackground;
	__property OnPrepareButtonBitmaps;
	__property OnRemoveFromSelection;
	__property OnRenderOLEData;
	__property OnResetNode;
	__property OnResize;
	__property OnSaveNode;
	__property OnSaveTree;
	__property OnScroll;
	__property OnShortenString;
	__property OnShowScrollBar;
	__property OnBeforeGetCheckState;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnStartOperation;
	__property OnStateChange;
	__property OnStructureChange;
	__property OnUpdating;
	__property OnCanResize;
	__property OnGesture;
	__property Touch;
public:
	/* TCustomVirtualStringTree.Create */ inline __fastcall virtual TVirtualStringTree(System::Classes::TComponent* AOwner) : TCustomVirtualStringTree(AOwner) { }
	/* TCustomVirtualStringTree.Destroy */ inline __fastcall virtual ~TVirtualStringTree() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TVirtualStringTree(HWND ParentWindow) : TCustomVirtualStringTree(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TVTDrawNodeEvent)(TBaseVirtualTree* Sender, const TVTPaintInfo &PaintInfo);

typedef void __fastcall (__closure *TVTGetCellContentMarginEvent)(TBaseVirtualTree* Sender, TCanvas* HintCanvas, PVirtualNode Node, TColumnIndex Column, TVTCellContentMarginType CellContentMarginType, System::Types::TPoint &CellContentMargin);

typedef void __fastcall (__closure *TVTGetNodeWidthEvent)(TBaseVirtualTree* Sender, TCanvas* HintCanvas, PVirtualNode Node, TColumnIndex Column, int &NodeWidth);

//-- var, const, procedure ---------------------------------------------------
static _DELPHI_CONST System::Int8 NoColumn = System::Int8(-1);
static _DELPHI_CONST System::Int8 InvalidColumn = System::Int8(-2);
static _DELPHI_CONST Virtualtrees::Types::TSortDirection sdAscending = (Virtualtrees::Types::TSortDirection)(0);
static _DELPHI_CONST Virtualtrees::Types::TSortDirection sdDescending = (Virtualtrees::Types::TSortDirection)(1);
static _DELPHI_CONST Virtualtrees::Types::TCheckType ctNone = (Virtualtrees::Types::TCheckType)(0);
static _DELPHI_CONST Virtualtrees::Types::TCheckType ctTriStateCheckBox = (Virtualtrees::Types::TCheckType)(1);
static _DELPHI_CONST Virtualtrees::Types::TCheckType ctCheckBox = (Virtualtrees::Types::TCheckType)(2);
static _DELPHI_CONST Virtualtrees::Types::TCheckType ctRadioButton = (Virtualtrees::Types::TCheckType)(3);
static _DELPHI_CONST Virtualtrees::Types::TCheckType ctButton = (Virtualtrees::Types::TCheckType)(4);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csUncheckedNormal = (Virtualtrees::Types::TCheckState)(0);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csUncheckedPressed = (Virtualtrees::Types::TCheckState)(1);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csCheckedNormal = (Virtualtrees::Types::TCheckState)(2);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csCheckedPressed = (Virtualtrees::Types::TCheckState)(3);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csMixedNormal = (Virtualtrees::Types::TCheckState)(4);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csMixedPressed = (Virtualtrees::Types::TCheckState)(5);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csUncheckedDisabled = (Virtualtrees::Types::TCheckState)(6);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csCheckedDisabled = (Virtualtrees::Types::TCheckState)(7);
static _DELPHI_CONST Virtualtrees::Types::TCheckState csMixedDisable = (Virtualtrees::Types::TCheckState)(8);
extern DELPHI_PACKAGE bool IsWinVistaOrAbove;
extern DELPHI_PACKAGE TBaseVirtualTree* __fastcall TreeFromNode(PVirtualNode Node);
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VirtualtreesHPP
