object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Client'
  ClientHeight = 369
  ClientWidth = 608
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
    Left = 87
    Top = 350
    Width = 58
    Height = 13
    Caption = #36664#20837'IP'#20301#32622
  end
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 160
    Height = 328
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 151
    Top = 347
    Width = 66
    Height = 21
    TabOrder = 1
    Text = '127.0.0.1'
  end
  object ShockwaveFlash1: TShockwaveFlash
    Left = 174
    Top = 8
    Width = 426
    Height = 328
    TabOrder = 2
    OnFSCommand = ShockwaveFlash1FSCommand
    ControlData = {
      6755665500090000072C0000E621000008000200000000000800000000000800
      0000000008000E000000570069006E0064006F00770000000800060000002D00
      310000000800060000002D003100000008000A00000048006900670068000000
      08000200000000000800060000002D0031000000080000000000080002000000
      0000080010000000530068006F00770041006C006C0000000800040000003000
      0000080004000000300000000800020000000000080000000000080002000000
      00000D0000000000000000000000000000000000080004000000310000000800
      0400000030000000080000000000080004000000300000000800080000006100
      6C006C00000008000C000000660061006C00730065000000}
  end
  object Button1: TButton
    Left = 240
    Top = 342
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object IdTCPClient1: TIdTCPClient
    OnDisconnected = IdTCPClient1Disconnected
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    OnConnected = IdTCPClient1Connected
    Port = 0
    ReadTimeout = -1
    Left = 8
    Top = 352
  end
  object Timer1: TTimer
    Interval = 50
    OnTimer = Timer1Timer
    Left = 48
    Top = 352
  end
end
