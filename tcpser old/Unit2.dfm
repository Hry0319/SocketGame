object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'SERVER'
  ClientHeight = 279
  ClientWidth = 351
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 232
    Top = 8
    Width = 111
    Height = 55
    Caption = 'start'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 69
    Width = 335
    Height = 201
    TabOrder = 1
  end
  object IdTCPServer1: TIdTCPServer
    Bindings = <>
    DefaultPort = 1111
    OnConnect = IdTCPServer1Connect
    OnExecute = IdTCPServer1Execute
    Left = 56
    Top = 16
  end
end
