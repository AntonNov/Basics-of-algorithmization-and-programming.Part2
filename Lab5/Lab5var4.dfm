object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Lab5var4'
  ClientHeight = 380
  ClientWidth = 406
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 280
    Top = 23
    Width = 110
    Height = 13
    Caption = #1057#1075#1077#1085#1077#1088#1080#1088#1086#1074#1072#1090#1100' '#1095#1080#1089#1083#1086
  end
  object Label2: TLabel
    Left = 96
    Top = 13
    Width = 45
    Height = 13
    Caption = #1054#1095#1077#1088#1077#1076#1100
  end
  object Label3: TLabel
    Left = 298
    Top = 85
    Width = 79
    Height = 13
    Caption = #1054#1090#1089#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
  end
  object Label4: TLabel
    Left = 312
    Top = 149
    Width = 47
    Height = 13
    Caption = #1059#1076#1072#1083#1080#1090#1100' '
  end
  object PushButton: TButton
    Left = 288
    Top = 42
    Width = 89
    Height = 33
    Caption = 'Push'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = PushButtonClick
  end
  object SortButton: TButton
    Left = 288
    Top = 104
    Width = 89
    Height = 33
    Caption = 'Sort'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = SortButtonClick
  end
  object PopButton: TButton
    Left = 288
    Top = 168
    Width = 89
    Height = 33
    Caption = 'Pop'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = PopButtonClick
  end
  object ListBox1: TListBox
    Left = 40
    Top = 32
    Width = 169
    Height = 305
    ItemHeight = 13
    TabOrder = 3
  end
end
