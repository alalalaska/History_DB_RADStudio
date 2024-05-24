// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTreesDR.dpk' rev: 36.00 (Windows)

#ifndef VirtualtreesdrHPP
#define VirtualtreesdrHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>	// (rtl)
#include <SysInit.hpp>
#include <VirtualTrees.hpp>
#include <VirtualTrees.Accessibility.hpp>
#include <VirtualTrees.AccessibilityFactory.hpp>
#include <VirtualTrees.Actions.hpp>
#include <VirtualTrees.Classes.hpp>
#include <VirtualTrees.ClipBoard.hpp>
#include <VirtualTrees.Colors.hpp>
#include <VirtualTrees.DataObject.hpp>
#include <VirtualTrees.DragImage.hpp>
#include <VirtualTrees.DragnDrop.hpp>
#include <VirtualTrees.DrawTree.hpp>
#include <VirtualTrees.EditLink.hpp>
#include <VirtualTrees.Export.hpp>
#include <VirtualTrees.Header.hpp>
#include <VirtualTrees.HeaderPopup.hpp>
#include <VirtualTrees.StyleHooks.hpp>
#include <VirtualTrees.Types.hpp>
#include <VirtualTrees.Utils.hpp>
#include <VirtualTrees.WorkerThread.hpp>
#include <System.Types.hpp>	// (rtl)
#include <System.UITypes.hpp>	// (rtl)
#include <Winapi.Windows.PkgHelper.hpp>	// (rtl)
#include <Winapi.Windows.hpp>	// (rtl)
#include <Winapi.Messages.hpp>	// (rtl)
#include <System.SysConst.hpp>	// (rtl)
#include <Winapi.ImageHlp.hpp>	// (rtl)
#include <Winapi.SHFolder.hpp>	// (rtl)
#include <Winapi.PsAPI.hpp>	// (rtl)
#include <System.RTLConsts.hpp>	// (rtl)
#include <System.Character.hpp>	// (rtl)
#include <System.Internal.ExcUtils.hpp>	// (rtl)
#include <System.SysUtils.hpp>	// (rtl)
#include <System.VarUtils.hpp>	// (rtl)
#include <System.Variants.hpp>	// (rtl)
#include <Winapi.ActiveX.hpp>	// (rtl)
#include <System.TypInfo.hpp>	// (rtl)
#include <System.Hash.hpp>	// (rtl)
#include <System.Math.hpp>	// (rtl)
#include <System.Generics.Defaults.hpp>	// (rtl)
#include <System.Generics.Collections.hpp>	// (rtl)
#include <System.TimeSpan.hpp>	// (rtl)
#include <System.Diagnostics.hpp>	// (rtl)
#include <System.SyncObjs.hpp>	// (rtl)
#include <System.Rtti.hpp>	// (rtl)
#include <System.Classes.hpp>	// (rtl)
#include <System.StrUtils.hpp>	// (rtl)
#include <System.AnsiStrings.hpp>	// (rtl)
#include <System.Win.ComConst.hpp>	// (rtl)
#include <System.Win.ComObj.hpp>	// (rtl)
#include <Winapi.oleacc.hpp>	// (rtl)
#include <Winapi.Wincodec.hpp>	// (rtl)
#include <Winapi.CommCtrl.hpp>	// (rtl)
#include <Winapi.Qos.hpp>	// (rtl)
#include <Winapi.Winsock2.hpp>	// (rtl)
#include <Winapi.IpExport.hpp>	// (rtl)
#include <Winapi.ShellAPI.hpp>	// (rtl)
#include <Winapi.RegStr.hpp>	// (rtl)
#include <Winapi.WinInet.hpp>	// (rtl)
#include <Winapi.UrlMon.hpp>	// (rtl)
#include <Winapi.ObjectArray.hpp>	// (rtl)
#include <Winapi.StructuredQueryCondition.hpp>	// (rtl)
#include <Winapi.PropSys.hpp>	// (rtl)
#include <Winapi.MSXMLIntf.hpp>	// (rtl)
#include <Winapi.ShlObj.hpp>	// (rtl)
#include <Winapi.KnownFolders.hpp>	// (rtl)
#include <System.Masks.hpp>	// (rtl)
#include <System.DateUtils.hpp>	// (rtl)
#include <System.IOUtils.hpp>	// (rtl)
#include <System.IniFiles.hpp>	// (rtl)
#include <System.Win.Registry.hpp>	// (rtl)
#include <System.UIConsts.hpp>	// (rtl)
#include <Vcl.Consts.hpp>	// (vcl)
#include <Vcl.Graphics.hpp>	// (vcl)
#include <Winapi.MultiMon.hpp>	// (rtl)
#include <System.Contnrs.hpp>	// (rtl)
#include <System.ImageList.hpp>	// (rtl)
#include <System.Messaging.hpp>	// (rtl)
#include <System.Actions.hpp>	// (rtl)
#include <Winapi.Imm.hpp>	// (rtl)
#include <Vcl.ActnList.hpp>	// (vcl)
#include <System.HelpIntfs.hpp>	// (rtl)
#include <Winapi.UxTheme.hpp>	// (rtl)
#include <Winapi.Dwmapi.hpp>	// (rtl)
#include <System.Win.Crtl.hpp>	// (rtl)
#include <System.ZLib.hpp>	// (rtl)
#include <Vcl.GraphUtil.hpp>	// (vcl)
#include <Vcl.StdCtrls.hpp>	// (vcl)
#include <System.MaskUtils.hpp>	// (rtl)
#include <Vcl.Clipbrd.hpp>	// (vcl)
#include <Vcl.Mask.hpp>	// (vcl)
#include <Winapi.CommDlg.hpp>	// (rtl)
#include <Winapi.WinSpool.hpp>	// (rtl)
#include <Vcl.Printers.hpp>	// (vcl)
#include <Winapi.RichEdit.hpp>	// (rtl)
#include <Vcl.ToolWin.hpp>	// (vcl)
#include <Vcl.ListActns.hpp>	// (vcl)
#include <Vcl.ComStrs.hpp>	// (vcl)
#include <Vcl.StdActns.hpp>	// (vcl)
#include <Vcl.ComCtrls.hpp>	// (vcl)
#include <System.WideStrUtils.hpp>	// (rtl)
#include <Winapi.Dlgs.hpp>	// (rtl)
#include <Vcl.Dialogs.hpp>	// (vcl)
#include <Vcl.ExtCtrls.hpp>	// (vcl)
#include <Vcl.Themes.hpp>	// (vcl)
#include <System.Win.Taskbar.hpp>	// (rtl)
#include <System.Win.TaskbarCore.hpp>	// (rtl)
#include <Winapi.ShellScaling.hpp>	// (rtl)
#include <Winapi.Wtsapi32.hpp>	// (rtl)
#include <Winapi.FlatSB.hpp>	// (rtl)
#include <Vcl.Forms.hpp>	// (vcl)
#include <Vcl.ImgList.hpp>	// (vcl)
#include <Vcl.Menus.hpp>	// (vcl)
#include <Winapi.TpcShrd.hpp>	// (rtl)
#include <Winapi.MsCTF.PkgHelper.hpp>	// (rtl)
#include <Winapi.MsCTF.hpp>	// (rtl)
#include <Winapi.MsInkAut.hpp>	// (rtl)
#include <Winapi.PenInputPanel.hpp>	// (rtl)
#include <Vcl.Controls.hpp>	// (vcl)
#include <System.Win.StdVCL.hpp>	// (rtl)
#include <Vcl.AxCtrls.hpp>	// (vcl)
#include <Winapi.MMSystem.hpp>	// (rtl)
// SO_SFX: 290
// PRG_EXT: .bpl
// BPI_DIR: ..\cpp\Win64\Debug
// OBJ_DIR: ..\cpp\Win64\Debug
// OBJ_EXT: .o

//-- user supplied -----------------------------------------------------------

namespace Virtualtreesdr
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
}	/* namespace Virtualtreesdr */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREESDR)
using namespace Virtualtreesdr;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VirtualtreesdrHPP
