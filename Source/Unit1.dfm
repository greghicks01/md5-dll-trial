object Md5MainFrm: TMd5MainFrm
  Left = 205
  Top = 193
  Width = 528
  Height = 264
  Caption = 'MD5 Test'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 11
    Top = 12
    Width = 29
    Height = 13
    Caption = 'DATA'
  end
  object Label2: TLabel
    Left = 11
    Top = 44
    Width = 30
    Height = 13
    Caption = 'HASH'
  end
  object Label3: TLabel
    Left = 11
    Top = 76
    Width = 77
    Height = 13
    Caption = 'HASH LENGTH'
  end
  object Edit1: TEdit
    Left = 96
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '00000000'
  end
  object Edit2: TEdit
    Left = 96
    Top = 40
    Width = 249
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 240
    Top = 6
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 96
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button2: TButton
    Left = 24
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Button2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object FileName: TEdit
    Left = 32
    Top = 152
    Width = 337
    Height = 21
    TabOrder = 5
    Text = 'FileName'
  end
  object OpenDialog1: TOpenDialog
    Left = 120
    Top = 104
  end
end
