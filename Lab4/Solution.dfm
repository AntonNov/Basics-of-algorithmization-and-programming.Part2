object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Lab4Var4'
  ClientHeight = 498
  ClientWidth = 769
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 328
    Top = 29
    Width = 104
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1074#1099#1088#1072#1078#1077#1085#1080#1077
  end
  object Label2: TLabel
    Left = 328
    Top = 101
    Width = 85
    Height = 13
    Caption = #1055#1086#1083#1091#1095#1077#1085#1085#1072#1103' '#1054#1055#1047
  end
  object Label3: TLabel
    Left = 328
    Top = 237
    Width = 53
    Height = 13
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
  end
  object Label4: TLabel
    Left = 321
    Top = 171
    Width = 156
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1077' '#1087#1077#1088#1077#1084#1077#1085#1085#1086#1081
  end
  object Edit1: TEdit
    Left = 328
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 328
    Top = 120
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object StringGrid1: TStringGrid
    Left = 112
    Top = 64
    Width = 129
    Height = 161
    ColCount = 2
    FixedColor = clHotLight
    FixedCols = 0
    RowCount = 6
    FixedRows = 0
    ScrollBars = ssNone
    TabOrder = 2
    RowHeights = (
      24
      24
      24
      24
      24
      34)
  end
  object Button1: TButton
    Left = 552
    Top = 46
    Width = 75
    Height = 25
    Caption = #1055#1077#1088#1077#1074#1077#1089#1090#1080
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 552
    Top = 254
    Width = 75
    Height = 25
    Caption = #1055#1086#1089#1095#1080#1090#1072#1090#1100
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit3: TEdit
    Left = 328
    Top = 256
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object Edit4: TEdit
    Left = 328
    Top = 190
    Width = 121
    Height = 21
    TabOrder = 6
  end
  object Button3: TButton
    Left = 552
    Top = 188
    Width = 75
    Height = 25
    Hint = 
      #1042#1074#1086#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1103' '#1087#1077#1088#1077#1084#1077#1085#1085#1099#1093' '#1090#1086#1083#1100#1082#1086' '#1087#1086#1089#1083#1077' '#1090#1086#1075#1086', '#1082#1072#1082' '#1074#1074#1077#1076#1105#1090#1077' '#1074#1099#1088#1072#1078 +
      #1077#1085#1080#1077'!!'
    Caption = #1042#1074#1077#1089#1090#1080
    ParentShowHint = False
    ShowHint = True
    TabOrder = 7
    OnClick = Button3Click
  end
end
