object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = #1056#1072#1073#1086#1090#1072' '#1089' '#1080#1089#1090#1086#1088#1080#1077#1081' '#1073#1088#1072#1091#1079#1077#1088#1072
  ClientHeight = 441
  ClientWidth = 889
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object infoLabel: TLabel
    Left = 8
    Top = 296
    Width = 3
    Height = 15
  end
  object HistoryFileLabel: TLabel
    Left = 8
    Top = 400
    Width = 3
    Height = 15
  end
  object VirtualStringTree: TVirtualStringTree
    Left = 8
    Top = 8
    Width = 873
    Height = 257
    Colors.BorderColor = 15987699
    Colors.DisabledColor = clGray
    Colors.DropMarkColor = 15385233
    Colors.DropTargetColor = 15385233
    Colors.DropTargetBorderColor = 15385233
    Colors.FocusedSelectionColor = 15385233
    Colors.FocusedSelectionBorderColor = 15385233
    Colors.GridLineColor = 15987699
    Colors.HeaderHotColor = clBlack
    Colors.HotColor = clBlack
    Colors.SelectionRectangleBlendColor = 15385233
    Colors.SelectionRectangleBorderColor = 15385233
    Colors.SelectionTextColor = clBlack
    Colors.TreeLineColor = 9471874
    Colors.UnfocusedColor = clGray
    Colors.UnfocusedSelectionColor = clWhite
    Colors.UnfocusedSelectionBorderColor = clWhite
    Header.AutoSizeIndex = 0
    TabOrder = 0
    OnAddToSelection = DopInfo
    OnGetText = Text
    Touch.InteractiveGestures = [igPan, igPressAndTap]
    Touch.InteractiveGestureOptions = [igoPanSingleFingerHorizontal, igoPanSingleFingerVertical, igoPanInertia, igoPanGutter, igoParentPassthrough]
    Columns = <
      item
        Position = 0
        Text = 'URL'
        Width = 500
      end
      item
        Position = 1
        Text = 'Title'
        Width = 600
      end>
  end
  object OpenHistoryButton: TButton
    Left = 8
    Top = 336
    Width = 185
    Height = 41
    Caption = #1054#1090#1082#1088#1099#1090#1100' '#1073#1072#1079#1091' '#1076#1072#1085#1085#1099#1093
    TabOrder = 1
    OnClick = OpenHistoryButtonClick
  end
  object DeleteRecordButton: TButton
    Left = 344
    Top = 336
    Width = 185
    Height = 41
    Caption = #1059#1076#1072#1083#1077#1085#1080#1077' '#1079#1072#1087#1080#1089#1080' '
    TabOrder = 2
    OnClick = DeleteRecordButtonClick
  end
  object OpenHistoryDialog: TOpenDialog
    Left = 728
    Top = 336
  end
end
