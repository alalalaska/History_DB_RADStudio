// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.Types.pas' rev: 36.00 (Windows)

#ifndef Virtualtrees_TypesHPP
#define Virtualtrees_TypesHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.Themes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EVirtualTreeError;
struct TCheckStateHelper /* Helper for enum 'TCheckState' */;
struct TSortDirectionHelper /* Helper for enum 'TSortDirection' */;
class DELPHICLASS TCustomVirtualTreeOptions;
class DELPHICLASS TVirtualTreeOptions;
class DELPHICLASS TCustomStringTreeOptions;
class DELPHICLASS TStringTreeOptions;
class DELPHICLASS TScrollBarOptions;
//-- type declarations -------------------------------------------------------
typedef int TDimension;

typedef int TColumnIndex;

typedef unsigned TColumnPosition;

typedef unsigned *PCardinal;

#pragma pack(push,4)
class PASCALIMPLEMENTATION EVirtualTreeError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg, const System::TVarRec *Args, const System::NativeInt Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVirtualTreeError(System::NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVirtualTreeError(System::NativeUInt Ident, const System::TVarRec *Args, const System::NativeInt Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const System::NativeInt Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg, const System::TVarRec *Args, const System::NativeInt Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVirtualTreeError(System::NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const System::NativeInt Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVirtualTreeError(System::NativeUInt Ident, const System::TVarRec *Args, const System::NativeInt Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVirtualTreeError() { }
	
};

#pragma pack(pop)

typedef System::Word TAutoScrollInterval;

typedef System::Word TVTScrollIncrement;

typedef System::DynamicArray<tagFORMATETC> TFormatEtcArray;

typedef System::DynamicArray<System::Word> TFormatArray;

enum DECLSPEC_DENUM TSmartAutoFitType : unsigned char { smaAllColumns, smaNoColumn, smaUseColumnOption };

enum DECLSPEC_DENUM TAddPopupItemType : unsigned char { apNormal, apDisabled, apHidden };

enum DECLSPEC_DENUM TCheckType : unsigned char { ctNone, ctTriStateCheckBox, ctCheckBox, ctRadioButton, ctButton };

enum DECLSPEC_DENUM TCheckState : unsigned char { csUncheckedNormal, csUncheckedPressed, csCheckedNormal, csCheckedPressed, csMixedNormal, csMixedPressed, csUncheckedDisabled, csCheckedDisabled, csMixedDisabled };

enum DECLSPEC_DENUM TVTColumnOption : unsigned char { coAllowClick, coDraggable, coEnabled, coParentBidiMode, coParentColor, coResizable, coShowDropMark, coVisible, coAutoSpring, coFixed, coSmartResize, coAllowFocus, coDisableAnimatedResize, coWrapCaption, coUseCaptionAlignment, coEditable, coStyleColor };

typedef System::Set<TVTColumnOption, TVTColumnOption::coAllowClick, TVTColumnOption::coStyleColor> TVTColumnOptions;

enum DECLSPEC_DENUM TVirtualTreeColumnStyle : unsigned char { vsText, vsOwnerDraw };

enum DECLSPEC_DENUM TVTHeaderColumnLayout : unsigned char { blGlyphLeft, blGlyphRight, blGlyphTop, blGlyphBottom };

enum DECLSPEC_DENUM TSortDirection : unsigned char { sdAscending, sdDescending };

enum DECLSPEC_DENUM TVTDropMarkMode : unsigned char { dmmNone, dmmLeft, dmmRight };

typedef System::Set<Vcl::Graphutil::TScrollDirection, Vcl::Graphutil::TScrollDirection::sdLeft, Vcl::Graphutil::TScrollDirection::sdDown> TScrollDirections;

enum DECLSPEC_DENUM TVTPaintOption : unsigned char { toHideFocusRect, toHideSelection, toHotTrack, toPopupMode, toShowBackground, toShowButtons, toShowDropmark, toShowHorzGridLines, toShowRoot, toShowTreeLines, toShowVertGridLines, toThemeAware, toUseBlendedImages, toGhostedIfUnfocused, toFullVertGridLines, toAlwaysHideSelection, toUseBlendedSelection, toStaticBackground, toChildrenAbove, toFixedIndent, toUseExplorerTheme, toHideTreeLinesIfThemed, toShowFilteredNodes };

typedef System::Set<TVTPaintOption, TVTPaintOption::toHideFocusRect, TVTPaintOption::toShowFilteredNodes> TVTPaintOptions;

enum DECLSPEC_DENUM TVTAnimationOption : unsigned char { toAnimatedToggle, toAdvancedAnimatedToggle };

typedef System::Set<TVTAnimationOption, TVTAnimationOption::toAnimatedToggle, TVTAnimationOption::toAdvancedAnimatedToggle> TVTAnimationOptions;

enum DECLSPEC_DENUM TVTAutoOption : unsigned char { toAutoDropExpand, toAutoExpand, toAutoScroll, toAutoScrollOnExpand, toAutoSort, toAutoSpanColumns, toAutoTristateTracking, toAutoHideButtons, toAutoDeleteMovedNodes, toDisableAutoscrollOnFocus, toAutoChangeScale, toAutoFreeOnCollapse, toDisableAutoscrollOnEdit, toAutoBidiColumnOrdering };

typedef System::Set<TVTAutoOption, TVTAutoOption::toAutoDropExpand, TVTAutoOption::toAutoBidiColumnOrdering> TVTAutoOptions;

enum DECLSPEC_DENUM TVTSelectionOption : unsigned char { toDisableDrawSelection, toExtendedFocus, toFullRowSelect, toLevelSelectConstraint, toMiddleClickSelect, toMultiSelect, toRightClickSelect, toSiblingSelectConstraint, toCenterScrollIntoView, toSimpleDrawSelection, toAlwaysSelectNode, toRestoreSelection, toSyncCheckboxesWithSelection };

typedef System::Set<TVTSelectionOption, TVTSelectionOption::toDisableDrawSelection, TVTSelectionOption::toSyncCheckboxesWithSelection> TVTSelectionOptions;

enum DECLSPEC_DENUM TVTEditOptions : unsigned char { toDefaultEdit, toVerticalEdit, toHorizontalEdit };

enum DECLSPEC_DENUM TVTMiscOption : unsigned char { toAcceptOLEDrop, toCheckSupport, toEditable, toFullRepaintOnResize, toGridExtensions, toInitOnSave, toReportMode, toToggleOnDblClick, toWheelPanning, toReadOnly, toVariableNodeHeight, toFullRowDrag, toNodeHeightResize, toNodeHeightDblClickResize, toEditOnClick, toEditOnDblClick, toReverseFullExpandHotKey };

typedef System::Set<TVTMiscOption, TVTMiscOption::toAcceptOLEDrop, TVTMiscOption::toReverseFullExpandHotKey> TVTMiscOptions;

enum DECLSPEC_DENUM TVTExportMode : unsigned char { emAll, emChecked, emUnchecked, emVisibleDueToExpansion, emSelected };

enum DECLSPEC_DENUM TVTStringOption : unsigned char { toSaveCaptions, toShowStaticText, toAutoAcceptEditChange };

typedef System::Set<TVTStringOption, TVTStringOption::toSaveCaptions, TVTStringOption::toAutoAcceptEditChange> TVTStringOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomVirtualTreeOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Controls::TCustomControl* FOwner;
	TVTPaintOptions FPaintOptions;
	TVTAnimationOptions FAnimationOptions;
	TVTAutoOptions FAutoOptions;
	TVTSelectionOptions FSelectionOptions;
	TVTMiscOptions FMiscOptions;
	TVTExportMode FExportMode;
	TVTEditOptions FEditOptions;
	void __fastcall SetAnimationOptions(const TVTAnimationOptions Value);
	void __fastcall SetAutoOptions(const TVTAutoOptions Value);
	void __fastcall SetMiscOptions(const TVTMiscOptions Value);
	void __fastcall SetPaintOptions(const TVTPaintOptions Value);
	void __fastcall SetSelectionOptions(const TVTSelectionOptions Value);
	
protected:
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
	
public:
	__fastcall virtual TCustomVirtualTreeOptions(Vcl::Controls::TCustomControl* AOwner);
	void __fastcall InternalSetMiscOptions(const TVTMiscOptions Value);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__property TVTAnimationOptions AnimationOptions = {read=FAnimationOptions, write=SetAnimationOptions, default=0};
	__property TVTAutoOptions AutoOptions = {read=FAutoOptions, write=SetAutoOptions, default=1497};
	__property TVTExportMode ExportMode = {read=FExportMode, write=FExportMode, default=0};
	__property TVTMiscOptions MiscOptions = {read=FMiscOptions, write=SetMiscOptions, default=16809};
	__property TVTPaintOptions PaintOptions = {read=FPaintOptions, write=SetPaintOptions, default=7008};
	__property TVTSelectionOptions SelectionOptions = {read=FSelectionOptions, write=SetSelectionOptions, default=0};
	__property TVTEditOptions EditOptions = {read=FEditOptions, write=FEditOptions, default=0};
	__property Vcl::Controls::TCustomControl* Owner = {read=FOwner};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCustomVirtualTreeOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TTreeOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualTreeOptions : public TCustomVirtualTreeOptions
{
	typedef TCustomVirtualTreeOptions inherited;
	
__published:
	__property AnimationOptions = {default=0};
	__property AutoOptions = {default=1497};
	__property ExportMode = {default=0};
	__property MiscOptions = {default=16809};
	__property PaintOptions = {default=7008};
	__property SelectionOptions = {default=0};
public:
	/* TCustomVirtualTreeOptions.Create */ inline __fastcall virtual TVirtualTreeOptions(Vcl::Controls::TCustomControl* AOwner) : TCustomVirtualTreeOptions(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TVirtualTreeOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomStringTreeOptions : public TCustomVirtualTreeOptions
{
	typedef TCustomVirtualTreeOptions inherited;
	
private:
	TVTStringOptions FStringOptions;
	void __fastcall SetStringOptions(const TVTStringOptions Value);
	
public:
	__fastcall virtual TCustomStringTreeOptions(Vcl::Controls::TCustomControl* AOwner);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__property TVTStringOptions StringOptions = {read=FStringOptions, write=SetStringOptions, default=5};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCustomStringTreeOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringTreeOptions : public TCustomStringTreeOptions
{
	typedef TCustomStringTreeOptions inherited;
	
__published:
	__property AnimationOptions = {default=0};
	__property AutoOptions = {default=1497};
	__property ExportMode = {default=0};
	__property MiscOptions = {default=16809};
	__property PaintOptions = {default=7008};
	__property SelectionOptions = {default=0};
	__property StringOptions = {default=5};
	__property EditOptions = {default=0};
public:
	/* TCustomStringTreeOptions.Create */ inline __fastcall virtual TStringTreeOptions(Vcl::Controls::TCustomControl* AOwner) : TCustomStringTreeOptions(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TStringTreeOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TScrollBarStyle : unsigned char { sbmRegular, sbm3D };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TScrollBarOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAlwaysVisible;
	Vcl::Controls::TCustomControl* FOwner;
	System::Uitypes::TScrollStyle FScrollBars;
	TScrollBarStyle FScrollBarStyle;
	TVTScrollIncrement FIncrementX;
	TVTScrollIncrement FIncrementY;
	void __fastcall SetAlwaysVisible(bool Value);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	void __fastcall SetScrollBarStyle(TScrollBarStyle Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TScrollBarOptions(Vcl::Controls::TCustomControl* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AlwaysVisible = {read=FAlwaysVisible, write=SetAlwaysVisible, default=0};
	__property TVTScrollIncrement HorizontalIncrement = {read=FIncrementX, write=FIncrementX, default=20};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=FScrollBars, write=SetScrollBars, default=3};
	__property TScrollBarStyle ScrollBarStyle = {read=FScrollBarStyle, write=SetScrollBarStyle, default=0};
	__property TVTScrollIncrement VerticalIncrement = {read=FIncrementY, write=FIncrementY, default=20};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TScrollBarOptions() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static _DELPHI_CONST System::Int8 VTTreeStreamVersion = System::Int8(0x3);
static _DELPHI_CONST System::Int8 VTHeaderStreamVersion = System::Int8(0x6);
static _DELPHI_CONST System::Word CacheThreshold = System::Word(0x7d0);
static _DELPHI_CONST System::Byte FadeAnimationStepCount = System::Byte(0xff);
static _DELPHI_CONST System::Int8 ShadowSize = System::Int8(0x5);
static _DELPHI_CONST System::Int8 cDefaultTextMargin = System::Int8(0x4);
static _DELPHI_CONST System::Int8 NoColumn = System::Int8(-1);
static _DELPHI_CONST System::Int8 InvalidColumn = System::Int8(-2);
static _DELPHI_CONST System::Int8 ckEmpty = System::Int8(0x0);
static _DELPHI_CONST System::Int8 ckRadioUncheckedNormal = System::Int8(0x1);
static _DELPHI_CONST System::Int8 ckRadioUncheckedHot = System::Int8(0x2);
static _DELPHI_CONST System::Int8 ckRadioUncheckedPressed = System::Int8(0x3);
static _DELPHI_CONST System::Int8 ckRadioUncheckedDisabled = System::Int8(0x4);
static _DELPHI_CONST System::Int8 ckRadioCheckedNormal = System::Int8(0x5);
static _DELPHI_CONST System::Int8 ckRadioCheckedHot = System::Int8(0x6);
static _DELPHI_CONST System::Int8 ckRadioCheckedPressed = System::Int8(0x7);
static _DELPHI_CONST System::Int8 ckRadioCheckedDisabled = System::Int8(0x8);
static _DELPHI_CONST System::Int8 ckCheckUncheckedNormal = System::Int8(0x9);
static _DELPHI_CONST System::Int8 ckCheckUncheckedHot = System::Int8(0xa);
static _DELPHI_CONST System::Int8 ckCheckUncheckedPressed = System::Int8(0xb);
static _DELPHI_CONST System::Int8 ckCheckUncheckedDisabled = System::Int8(0xc);
static _DELPHI_CONST System::Int8 ckCheckCheckedNormal = System::Int8(0xd);
static _DELPHI_CONST System::Int8 ckCheckCheckedHot = System::Int8(0xe);
static _DELPHI_CONST System::Int8 ckCheckCheckedPressed = System::Int8(0xf);
static _DELPHI_CONST System::Int8 ckCheckCheckedDisabled = System::Int8(0x10);
static _DELPHI_CONST System::Int8 ckCheckMixedNormal = System::Int8(0x11);
static _DELPHI_CONST System::Int8 ckCheckMixedHot = System::Int8(0x12);
static _DELPHI_CONST System::Int8 ckCheckMixedPressed = System::Int8(0x13);
static _DELPHI_CONST System::Int8 ckCheckMixedDisabled = System::Int8(0x14);
static _DELPHI_CONST System::Int8 ckButtonNormal = System::Int8(0x15);
static _DELPHI_CONST System::Int8 ckButtonHot = System::Int8(0x16);
static _DELPHI_CONST System::Int8 ckButtonPressed = System::Int8(0x17);
static _DELPHI_CONST System::Int8 ckButtonDisabled = System::Int8(0x18);
static _DELPHI_CONST System::Int8 ExpandTimer = System::Int8(0x1);
static _DELPHI_CONST System::Int8 EditTimer = System::Int8(0x2);
static _DELPHI_CONST System::Int8 HeaderTimer = System::Int8(0x3);
static _DELPHI_CONST System::Int8 ScrollTimer = System::Int8(0x4);
static _DELPHI_CONST System::Int8 ChangeTimer = System::Int8(0x5);
static _DELPHI_CONST System::Int8 StructureChangeTimer = System::Int8(0x6);
static _DELPHI_CONST System::Int8 SearchTimer = System::Int8(0x7);
static _DELPHI_CONST System::Int8 ThemeChangedTimer = System::Int8(0x8);
static _DELPHI_CONST System::Word ThemeChangedTimerDelay = System::Word(0x1f4);
static _DELPHI_CONST System::Word CM_DENYSUBCLASSING = System::Word(0xce3);
static _DELPHI_CONST System::Word CM_AUTOADJUST = System::Word(0xce8);
extern DELPHI_PACKAGE GUID IID_IDropTargetHelper;
extern DELPHI_PACKAGE GUID IID_IDragSourceHelper;
extern DELPHI_PACKAGE GUID IID_IDropTarget;
#define CFSTR_VIRTUALTREE L"Virtual Tree Data"
#define CFSTR_VTREFERENCE L"Virtual Tree Reference"
#define CFSTR_HTML L"HTML Format"
#define CFSTR_RTF L"Rich Text Format"
#define CFSTR_RTFNOOBJS L"Rich Text Format Without Objects"
#define CFSTR_CSV L"CSV"
static _DELPHI_CONST System::Word hcTFEditLinkIsNil = System::Word(0x7d0);
static _DELPHI_CONST System::Word hcTFWrongMoveError = System::Word(0x7d1);
static _DELPHI_CONST System::Word hcTFWrongStreamFormat = System::Word(0x7d2);
static _DELPHI_CONST System::Word hcTFWrongStreamVersion = System::Word(0x7d3);
static _DELPHI_CONST System::Word hcTFStreamTooSmall = System::Word(0x7d4);
static _DELPHI_CONST System::Word hcTFCorruptStream1 = System::Word(0x7d5);
static _DELPHI_CONST System::Word hcTFCorruptStream2 = System::Word(0x7d6);
static _DELPHI_CONST System::Word hcTFClipboardFailed = System::Word(0x7d7);
static _DELPHI_CONST System::Word hcTFCannotSetUserData = System::Word(0x7d8);
static _DELPHI_CONST short crHeaderSplit _DEPRECATED_ATTRIBUTE1("Use vrHSplit instead")  = short(-14);
static _DELPHI_CONST short crVertSplit _DEPRECATED_ATTRIBUTE1("Use vrVSplit instead")  = short(-15);
#define DefaultPaintOptions (System::Set<TVTPaintOption, TVTPaintOption::toHideFocusRect, TVTPaintOption::toShowFilteredNodes>() << TVTPaintOption::toShowButtons << TVTPaintOption::toShowDropmark << TVTPaintOption::toShowRoot << TVTPaintOption::toShowTreeLines << TVTPaintOption::toThemeAware << TVTPaintOption::toUseBlendedImages )
#define DefaultAnimationOptions System::Set<System::Byte>()
#define DefaultAutoOptions (System::Set<TVTAutoOption, TVTAutoOption::toAutoDropExpand, TVTAutoOption::toAutoBidiColumnOrdering>() << TVTAutoOption::toAutoDropExpand << TVTAutoOption::toAutoScrollOnExpand << TVTAutoOption::toAutoSort << TVTAutoOption::toAutoTristateTracking << TVTAutoOption::toAutoHideButtons << TVTAutoOption::toAutoDeleteMovedNodes << TVTAutoOption::toAutoChangeScale )
#define DefaultSelectionOptions System::Set<System::Byte>()
#define DefaultMiscOptions (System::Set<TVTMiscOption, TVTMiscOption::toAcceptOLEDrop, TVTMiscOption::toReverseFullExpandHotKey>() << TVTMiscOption::toAcceptOLEDrop << TVTMiscOption::toFullRepaintOnResize << TVTMiscOption::toInitOnSave << TVTMiscOption::toToggleOnDblClick << TVTMiscOption::toWheelPanning << TVTMiscOption::toEditOnClick )
#define DefaultStringOptions (System::Set<TVTStringOption, TVTStringOption::toSaveCaptions, TVTStringOption::toAutoAcceptEditChange>() << TVTStringOption::toSaveCaptions << TVTStringOption::toAutoAcceptEditChange )
}	/* namespace Types */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_TYPES)
using namespace Virtualtrees::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_TypesHPP
