// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Shockwaveflashobjects_tlb.pas' rev: 11.00

#ifndef Shockwaveflashobjects_tlbHPP
#define Shockwaveflashobjects_tlbHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Activex.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Olectrls.hpp>	// Pascal unit
#include <Oleserver.hpp>	// Pascal unit
#include <Stdvcl.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Shockwaveflashobjects_tlb
{
//-- type declarations -------------------------------------------------------
__interface IShockwaveFlash;
typedef System::DelphiInterface<IShockwaveFlash> _di_IShockwaveFlash;
typedef IShockwaveFlash ShockwaveFlash;
;

__interface IFlashObjectInterface;
typedef System::DelphiInterface<IFlashObjectInterface> _di_IFlashObjectInterface;
typedef IFlashObjectInterface FlashObjectInterface;
;

typedef tagDISPPARAMS *PUserType1;

typedef unsigned *PSYSUINT1;

typedef GUID *PUserType2;

__interface  INTERFACE_UUID("{D27CDB6C-AE6D-11CF-96B8-444553540000}") IShockwaveFlash  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_ReadyState(int &Get_ReadyState_result) = 0 ;
	virtual HRESULT __safecall Get_TotalFrames(int &Get_TotalFrames_result) = 0 ;
	virtual HRESULT __safecall Get_Playing(Word &Get_Playing_result) = 0 ;
	virtual HRESULT __safecall Set_Playing(Word pVal) = 0 ;
	virtual HRESULT __safecall Get_Quality(int &Get_Quality_result) = 0 ;
	virtual HRESULT __safecall Set_Quality(int pVal) = 0 ;
	virtual HRESULT __safecall Get_ScaleMode(int &Get_ScaleMode_result) = 0 ;
	virtual HRESULT __safecall Set_ScaleMode(int pVal) = 0 ;
	virtual HRESULT __safecall Get_AlignMode(int &Get_AlignMode_result) = 0 ;
	virtual HRESULT __safecall Set_AlignMode(int pVal) = 0 ;
	virtual HRESULT __safecall Get_BackgroundColor(int &Get_BackgroundColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackgroundColor(int pVal) = 0 ;
	virtual HRESULT __safecall Get_Loop(Word &Get_Loop_result) = 0 ;
	virtual HRESULT __safecall Set_Loop(Word pVal) = 0 ;
	virtual HRESULT __safecall Get_Movie(WideString &Get_Movie_result) = 0 ;
	virtual HRESULT __safecall Set_Movie(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_FrameNum(int &Get_FrameNum_result) = 0 ;
	virtual HRESULT __safecall Set_FrameNum(int pVal) = 0 ;
	virtual HRESULT __safecall SetZoomRect(int left, int top, int right, int bottom) = 0 ;
	virtual HRESULT __safecall Zoom(int factor) = 0 ;
	virtual HRESULT __safecall Pan(int x, int y, int mode) = 0 ;
	virtual HRESULT __safecall Play(void) = 0 ;
	virtual HRESULT __safecall Stop(void) = 0 ;
	virtual HRESULT __safecall Back(void) = 0 ;
	virtual HRESULT __safecall Forward(void) = 0 ;
	virtual HRESULT __safecall Rewind(void) = 0 ;
	virtual HRESULT __safecall StopPlay(void) = 0 ;
	virtual HRESULT __safecall GotoFrame(int FrameNum) = 0 ;
	virtual HRESULT __safecall CurrentFrame(int &CurrentFrame_result) = 0 ;
	virtual HRESULT __safecall IsPlaying(Word &IsPlaying_result) = 0 ;
	virtual HRESULT __safecall PercentLoaded(int &PercentLoaded_result) = 0 ;
	virtual HRESULT __safecall FrameLoaded(int FrameNum, Word &FrameLoaded_result) = 0 ;
	virtual HRESULT __safecall FlashVersion(int &FlashVersion_result) = 0 ;
	virtual HRESULT __safecall Get_WMode(WideString &Get_WMode_result) = 0 ;
	virtual HRESULT __safecall Set_WMode(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_SAlign(WideString &Get_SAlign_result) = 0 ;
	virtual HRESULT __safecall Set_SAlign(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_Menu(Word &Get_Menu_result) = 0 ;
	virtual HRESULT __safecall Set_Menu(Word pVal) = 0 ;
	virtual HRESULT __safecall Get_Base(WideString &Get_Base_result) = 0 ;
	virtual HRESULT __safecall Set_Base(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_Scale(WideString &Get_Scale_result) = 0 ;
	virtual HRESULT __safecall Set_Scale(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_DeviceFont(Word &Get_DeviceFont_result) = 0 ;
	virtual HRESULT __safecall Set_DeviceFont(Word pVal) = 0 ;
	virtual HRESULT __safecall Get_EmbedMovie(Word &Get_EmbedMovie_result) = 0 ;
	virtual HRESULT __safecall Set_EmbedMovie(Word pVal) = 0 ;
	virtual HRESULT __safecall Get_BGColor(WideString &Get_BGColor_result) = 0 ;
	virtual HRESULT __safecall Set_BGColor(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_Quality2(WideString &Get_Quality2_result) = 0 ;
	virtual HRESULT __safecall Set_Quality2(const WideString pVal) = 0 ;
	virtual HRESULT __safecall LoadMovie(int layer, const WideString url) = 0 ;
	virtual HRESULT __safecall TGotoFrame(const WideString target, int FrameNum) = 0 ;
	virtual HRESULT __safecall TGotoLabel(const WideString target, const WideString label_) = 0 ;
	virtual HRESULT __safecall TCurrentFrame(const WideString target, int &TCurrentFrame_result) = 0 ;
	virtual HRESULT __safecall TCurrentLabel(const WideString target, WideString &TCurrentLabel_result) = 0 ;
	virtual HRESULT __safecall TPlay(const WideString target) = 0 ;
	virtual HRESULT __safecall TStopPlay(const WideString target) = 0 ;
	virtual HRESULT __safecall SetVariable(const WideString name, const WideString value) = 0 ;
	virtual HRESULT __safecall GetVariable(const WideString name, WideString &GetVariable_result) = 0 ;
	virtual HRESULT __safecall TSetProperty(const WideString target, int property_, const WideString value) = 0 ;
	virtual HRESULT __safecall TGetProperty(const WideString target, int property_, WideString &TGetProperty_result) = 0 ;
	virtual HRESULT __safecall TCallFrame(const WideString target, int FrameNum) = 0 ;
	virtual HRESULT __safecall TCallLabel(const WideString target, const WideString label_) = 0 ;
	virtual HRESULT __safecall TSetPropertyNum(const WideString target, int property_, double value) = 0 ;
	virtual HRESULT __safecall TGetPropertyNum(const WideString target, int property_, double &TGetPropertyNum_result) = 0 ;
	virtual HRESULT __safecall TGetPropertyAsNumber(const WideString target, int property_, double &TGetPropertyAsNumber_result) = 0 ;
	virtual HRESULT __safecall Get_SWRemote(WideString &Get_SWRemote_result) = 0 ;
	virtual HRESULT __safecall Set_SWRemote(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_FlashVars(WideString &Get_FlashVars_result) = 0 ;
	virtual HRESULT __safecall Set_FlashVars(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_AllowScriptAccess(WideString &Get_AllowScriptAccess_result) = 0 ;
	virtual HRESULT __safecall Set_AllowScriptAccess(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_MovieData(WideString &Get_MovieData_result) = 0 ;
	virtual HRESULT __safecall Set_MovieData(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_InlineData(System::_di_IInterface &Get_InlineData_result) = 0 ;
	virtual HRESULT __safecall Set_InlineData(const System::_di_IInterface ppIUnknown) = 0 ;
	virtual HRESULT __safecall Get_SeamlessTabbing(Word &Get_SeamlessTabbing_result) = 0 ;
	virtual HRESULT __safecall Set_SeamlessTabbing(Word pVal) = 0 ;
	virtual HRESULT __safecall EnforceLocalSecurity(void) = 0 ;
	virtual HRESULT __safecall Get_Profile(Word &Get_Profile_result) = 0 ;
	virtual HRESULT __safecall Set_Profile(Word pVal) = 0 ;
	virtual HRESULT __safecall Get_ProfileAddress(WideString &Get_ProfileAddress_result) = 0 ;
	virtual HRESULT __safecall Set_ProfileAddress(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_ProfilePort(int &Get_ProfilePort_result) = 0 ;
	virtual HRESULT __safecall Set_ProfilePort(int pVal) = 0 ;
	virtual HRESULT __safecall CallFunction(const WideString request, WideString &CallFunction_result) = 0 ;
	virtual HRESULT __safecall SetReturnValue(const WideString returnValue) = 0 ;
	virtual HRESULT __safecall DisableLocalSecurity(void) = 0 ;
	virtual HRESULT __safecall Get_AllowNetworking(WideString &Get_AllowNetworking_result) = 0 ;
	virtual HRESULT __safecall Set_AllowNetworking(const WideString pVal) = 0 ;
	virtual HRESULT __safecall Get_AllowFullScreen(WideString &Get_AllowFullScreen_result) = 0 ;
	virtual HRESULT __safecall Set_AllowFullScreen(const WideString pVal) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ReadyState() { int r; HRESULT hr = Get_ReadyState(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ReadyState = {read=_scw_Get_ReadyState};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TotalFrames() { int r; HRESULT hr = Get_TotalFrames(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int TotalFrames = {read=_scw_Get_TotalFrames};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Playing() { Word r; HRESULT hr = Get_Playing(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Playing = {read=_scw_Get_Playing, write=Set_Playing};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Quality() { int r; HRESULT hr = Get_Quality(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int Quality = {read=_scw_Get_Quality, write=Set_Quality};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ScaleMode() { int r; HRESULT hr = Get_ScaleMode(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ScaleMode = {read=_scw_Get_ScaleMode, write=Set_ScaleMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_AlignMode() { int r; HRESULT hr = Get_AlignMode(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int AlignMode = {read=_scw_Get_AlignMode, write=Set_AlignMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackgroundColor() { int r; HRESULT hr = Get_BackgroundColor(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int BackgroundColor = {read=_scw_Get_BackgroundColor, write=Set_BackgroundColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Loop() { Word r; HRESULT hr = Get_Loop(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Loop = {read=_scw_Get_Loop, write=Set_Loop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Movie() { WideString r; HRESULT hr = Get_Movie(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Movie = {read=_scw_Get_Movie, write=Set_Movie};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FrameNum() { int r; HRESULT hr = Get_FrameNum(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int FrameNum = {read=_scw_Get_FrameNum, write=Set_FrameNum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_WMode() { WideString r; HRESULT hr = Get_WMode(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString WMode = {read=_scw_Get_WMode, write=Set_WMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SAlign() { WideString r; HRESULT hr = Get_SAlign(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SAlign = {read=_scw_Get_SAlign, write=Set_SAlign};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Menu() { Word r; HRESULT hr = Get_Menu(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Menu = {read=_scw_Get_Menu, write=Set_Menu};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Base() { WideString r; HRESULT hr = Get_Base(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Base = {read=_scw_Get_Base, write=Set_Base};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Scale() { WideString r; HRESULT hr = Get_Scale(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Scale = {read=_scw_Get_Scale, write=Set_Scale};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DeviceFont() { Word r; HRESULT hr = Get_DeviceFont(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DeviceFont = {read=_scw_Get_DeviceFont, write=Set_DeviceFont};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EmbedMovie() { Word r; HRESULT hr = Get_EmbedMovie(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EmbedMovie = {read=_scw_Get_EmbedMovie, write=Set_EmbedMovie};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_BGColor() { WideString r; HRESULT hr = Get_BGColor(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString BGColor = {read=_scw_Get_BGColor, write=Set_BGColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Quality2() { WideString r; HRESULT hr = Get_Quality2(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Quality2 = {read=_scw_Get_Quality2, write=Set_Quality2};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SWRemote() { WideString r; HRESULT hr = Get_SWRemote(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SWRemote = {read=_scw_Get_SWRemote, write=Set_SWRemote};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FlashVars() { WideString r; HRESULT hr = Get_FlashVars(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FlashVars = {read=_scw_Get_FlashVars, write=Set_FlashVars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AllowScriptAccess() { WideString r; HRESULT hr = Get_AllowScriptAccess(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AllowScriptAccess = {read=_scw_Get_AllowScriptAccess, write=Set_AllowScriptAccess};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_MovieData() { WideString r; HRESULT hr = Get_MovieData(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString MovieData = {read=_scw_Get_MovieData, write=Set_MovieData};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::_di_IInterface _scw_Get_InlineData() { System::_di_IInterface r; HRESULT hr = Get_InlineData(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::_di_IInterface InlineData = {read=_scw_Get_InlineData, write=Set_InlineData};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_SeamlessTabbing() { Word r; HRESULT hr = Get_SeamlessTabbing(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word SeamlessTabbing = {read=_scw_Get_SeamlessTabbing, write=Set_SeamlessTabbing};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Profile() { Word r; HRESULT hr = Get_Profile(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Profile = {read=_scw_Get_Profile, write=Set_Profile};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ProfileAddress() { WideString r; HRESULT hr = Get_ProfileAddress(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ProfileAddress = {read=_scw_Get_ProfileAddress, write=Set_ProfileAddress};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ProfilePort() { int r; HRESULT hr = Get_ProfilePort(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ProfilePort = {read=_scw_Get_ProfilePort, write=Set_ProfilePort};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AllowNetworking() { WideString r; HRESULT hr = Get_AllowNetworking(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AllowNetworking = {read=_scw_Get_AllowNetworking, write=Set_AllowNetworking};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AllowFullScreen() { WideString r; HRESULT hr = Get_AllowFullScreen(r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AllowFullScreen = {read=_scw_Get_AllowFullScreen, write=Set_AllowFullScreen};
};

__dispinterface IShockwaveFlashDisp;
typedef System::DelphiInterface<IShockwaveFlashDisp> _di_IShockwaveFlashDisp;
__dispinterface  INTERFACE_UUID("{D27CDB6C-AE6D-11CF-96B8-444553540000}") IShockwaveFlashDisp  : public IDispatch 
{
	
};

__dispinterface _IShockwaveFlashEvents;
typedef System::DelphiInterface<_IShockwaveFlashEvents> _di__IShockwaveFlashEvents;
__dispinterface  INTERFACE_UUID("{D27CDB6D-AE6D-11CF-96B8-444553540000}") _IShockwaveFlashEvents  : public IDispatch 
{
	
};

__interface IFlashFactory;
typedef System::DelphiInterface<IFlashFactory> _di_IFlashFactory;
__interface  INTERFACE_UUID("{D27CDB70-AE6D-11CF-96B8-444553540000}") IFlashFactory  : public IInterface 
{
	
};

__interface IDispatchEx;
typedef System::DelphiInterface<IDispatchEx> _di_IDispatchEx;
__interface IServiceProvider;
typedef System::DelphiInterface<IServiceProvider> _di_IServiceProvider;
__interface  INTERFACE_UUID("{A6EF9860-C720-11D0-9337-00A0C90DCAA9}") IDispatchEx  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall GetDispID(const WideString bstrName, unsigned grfdex, /* out */ int &pid) = 0 ;
	virtual HRESULT __stdcall RemoteInvokeEx(int id, unsigned lcid, unsigned dwFlags, tagDISPPARAMS &pdp, /* out */ OleVariant &pvarRes, /* out */ tagEXCEPINFO &pei, const _di_IServiceProvider pspCaller, unsigned cvarRefArg, unsigned &rgiRefArg, OleVariant &rgvarRefArg) = 0 ;
	virtual HRESULT __stdcall DeleteMemberByName(const WideString bstrName, unsigned grfdex) = 0 ;
	virtual HRESULT __stdcall DeleteMemberByDispID(int id) = 0 ;
	virtual HRESULT __stdcall GetMemberProperties(int id, unsigned grfdexFetch, /* out */ unsigned &pgrfdex) = 0 ;
	virtual HRESULT __stdcall GetMemberName(int id, /* out */ WideString &pbstrName) = 0 ;
	virtual HRESULT __stdcall GetNextDispID(unsigned grfdex, int id, /* out */ int &pid) = 0 ;
	virtual HRESULT __stdcall GetNameSpaceParent(/* out */ System::_di_IInterface &ppunk) = 0 ;
};

__interface  INTERFACE_UUID("{D27CDB72-AE6D-11CF-96B8-444553540000}") IFlashObjectInterface  : public IDispatchEx 
{
	
};

__interface  INTERFACE_UUID("{6D5140C1-7436-11CE-8034-00AA006009FA}") IServiceProvider  : public IInterface 
{
	
public:
	virtual HRESULT __stdcall RemoteQueryService(GUID &guidService, GUID &riid, /* out */ System::_di_IInterface &ppvObject) = 0 ;
};

typedef void __fastcall (__closure *TShockwaveFlashOnReadyStateChange)(System::TObject* ASender, int newState);

typedef void __fastcall (__closure *TShockwaveFlashOnProgress)(System::TObject* ASender, int percentDone);

typedef void __fastcall (__closure *TShockwaveFlashFSCommand)(System::TObject* ASender, const WideString command, const WideString args);

typedef void __fastcall (__closure *TShockwaveFlashFlashCall)(System::TObject* ASender, const WideString request);

class DELPHICLASS TShockwaveFlash;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TShockwaveFlash : public Olectrls::TOleControl 
{
	typedef Olectrls::TOleControl inherited;
	
private:
	TShockwaveFlashOnReadyStateChange FOnReadyStateChange;
	TShockwaveFlashOnProgress FOnProgress;
	TShockwaveFlashFSCommand FOnFSCommand;
	TShockwaveFlashFlashCall FOnFlashCall;
	_di_IShockwaveFlash FIntf;
	_di_IShockwaveFlash __fastcall GetControlInterface();
	
protected:
	HIDESBASE void __fastcall CreateControl(void);
	virtual void __fastcall InitControlData(void);
	System::_di_IInterface __fastcall Get_InlineData();
	void __fastcall Set_InlineData(const System::_di_IInterface ppIUnknown);
	
public:
	void __fastcall SetZoomRect(int left, int top, int right, int bottom);
	void __fastcall Zoom(int factor);
	void __fastcall Pan(int x, int y, int mode);
	void __fastcall Play(void);
	void __fastcall Stop(void);
	void __fastcall Back(void);
	void __fastcall Forward(void);
	void __fastcall Rewind(void);
	void __fastcall StopPlay(void);
	void __fastcall GotoFrame(int FrameNum);
	int __fastcall CurrentFrame(void);
	Word __fastcall IsPlaying(void);
	int __fastcall PercentLoaded(void);
	Word __fastcall FrameLoaded(int FrameNum);
	int __fastcall FlashVersion(void);
	void __fastcall LoadMovie(int layer, const WideString url);
	void __fastcall TGotoFrame(const WideString target, int FrameNum);
	void __fastcall TGotoLabel(const WideString target, const WideString label_);
	int __fastcall TCurrentFrame(const WideString target);
	WideString __fastcall TCurrentLabel(const WideString target);
	void __fastcall TPlay(const WideString target);
	void __fastcall TStopPlay(const WideString target);
	void __fastcall SetVariable(const WideString name, const WideString value);
	WideString __fastcall GetVariable(const WideString name);
	void __fastcall TSetProperty(const WideString target, int property_, const WideString value);
	WideString __fastcall TGetProperty(const WideString target, int property_);
	void __fastcall TCallFrame(const WideString target, int FrameNum);
	void __fastcall TCallLabel(const WideString target, const WideString label_);
	void __fastcall TSetPropertyNum(const WideString target, int property_, double value);
	double __fastcall TGetPropertyNum(const WideString target, int property_);
	double __fastcall TGetPropertyAsNumber(const WideString target, int property_);
	void __fastcall EnforceLocalSecurity(void);
	WideString __fastcall CallFunction(const WideString request);
	void __fastcall SetReturnValue(const WideString returnValue);
	void __fastcall DisableLocalSecurity(void);
	__property _di_IShockwaveFlash ControlInterface = {read=GetControlInterface};
	__property _di_IShockwaveFlash DefaultInterface = {read=GetControlInterface};
	__property int ReadyState = {read=GetIntegerProp, index=-525, nodefault};
	__property int TotalFrames = {read=GetIntegerProp, index=124, nodefault};
	__property System::_di_IInterface InlineData = {read=GetIUnknownProp, write=SetIUnknownProp, index=191};
	
__published:
	__property Anchors  = {default=3};
	__property TabStop  = {default=1};
	__property Align  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragMode  = {default=0};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnStartDrag ;
	__property Word Playing = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=125, nodefault};
	__property int Quality = {read=GetIntegerProp, write=SetIntegerProp, stored=false, index=105, nodefault};
	__property int ScaleMode = {read=GetIntegerProp, write=SetIntegerProp, stored=false, index=120, nodefault};
	__property int AlignMode = {read=GetIntegerProp, write=SetIntegerProp, stored=false, index=121, nodefault};
	__property int BackgroundColor = {read=GetIntegerProp, write=SetIntegerProp, stored=false, index=123, nodefault};
	__property Word Loop = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=106, nodefault};
	__property WideString Movie = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=102};
	__property int FrameNum = {read=GetIntegerProp, write=SetIntegerProp, stored=false, index=107, nodefault};
	__property WideString WMode = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=133};
	__property WideString SAlign = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=134};
	__property Word Menu = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=135, nodefault};
	__property WideString Base = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=136};
	__property WideString Scale = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=137};
	__property Word DeviceFont = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=138, nodefault};
	__property Word EmbedMovie = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=139, nodefault};
	__property WideString BGColor = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=140};
	__property WideString Quality2 = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=141};
	__property WideString SWRemote = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=159};
	__property WideString FlashVars = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=170};
	__property WideString AllowScriptAccess = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=171};
	__property WideString MovieData = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=190};
	__property Word SeamlessTabbing = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=192, nodefault};
	__property Word Profile = {read=GetWordBoolProp, write=SetWordBoolProp, stored=false, index=194, nodefault};
	__property WideString ProfileAddress = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=195};
	__property int ProfilePort = {read=GetIntegerProp, write=SetIntegerProp, stored=false, index=196, nodefault};
	__property WideString AllowNetworking = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=201};
	__property WideString AllowFullScreen = {read=GetWideStringProp, write=SetWideStringProp, stored=false, index=202};
	__property TShockwaveFlashOnReadyStateChange OnReadyStateChange = {read=FOnReadyStateChange, write=FOnReadyStateChange};
	__property TShockwaveFlashOnProgress OnProgress = {read=FOnProgress, write=FOnProgress};
	__property TShockwaveFlashFSCommand OnFSCommand = {read=FOnFSCommand, write=FOnFSCommand};
	__property TShockwaveFlashFlashCall OnFlashCall = {read=FOnFlashCall, write=FOnFlashCall};
public:
	#pragma option push -w-inl
	/* TOleControl.Create */ inline __fastcall virtual TShockwaveFlash(Classes::TComponent* AOwner) : Olectrls::TOleControl(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TOleControl.Destroy */ inline __fastcall virtual ~TShockwaveFlash(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TShockwaveFlash(HWND ParentWindow) : Olectrls::TOleControl(ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS CoFlashObjectInterface;
#pragma pack(push,4)
class PASCALIMPLEMENTATION CoFlashObjectInterface : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IFlashObjectInterface __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IFlashObjectInterface __fastcall CreateRemote(TMetaClass* vmt, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoFlashObjectInterface(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoFlashObjectInterface(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TFlashObjectInterface;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TFlashObjectInterface : public Oleserver::TOleServer 
{
	typedef Oleserver::TOleServer inherited;
	
private:
	_di_IFlashObjectInterface FIntf;
	_di_IFlashObjectInterface __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData(void);
	
public:
	__fastcall virtual TFlashObjectInterface(Classes::TComponent* AOwner);
	__fastcall virtual ~TFlashObjectInterface(void);
	virtual void __fastcall Connect(void);
	void __fastcall ConnectTo(_di_IFlashObjectInterface svrIntf);
	virtual void __fastcall Disconnect(void);
	HRESULT __fastcall GetDispID(const WideString bstrName, unsigned grfdex, /* out */ int &pid);
	HRESULT __fastcall RemoteInvokeEx(int id, unsigned lcid, unsigned dwFlags, tagDISPPARAMS &pdp, /* out */ OleVariant &pvarRes, /* out */ tagEXCEPINFO &pei, const _di_IServiceProvider pspCaller, unsigned cvarRefArg, unsigned &rgiRefArg, OleVariant &rgvarRefArg);
	HRESULT __fastcall DeleteMemberByName(const WideString bstrName, unsigned grfdex);
	HRESULT __fastcall DeleteMemberByDispID(int id);
	HRESULT __fastcall GetMemberProperties(int id, unsigned grfdexFetch, /* out */ unsigned &pgrfdex);
	HRESULT __fastcall GetMemberName(int id, /* out */ WideString &pbstrName);
	HRESULT __fastcall GetNextDispID(unsigned grfdex, int id, /* out */ int &pid);
	HRESULT __fastcall GetNameSpaceParent(/* out */ System::_di_IInterface &ppunk);
	__property _di_IFlashObjectInterface DefaultInterface = {read=GetDefaultInterface};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Shortint ShockwaveFlashObjectsMajorVersion = 0x1;
static const Shortint ShockwaveFlashObjectsMinorVersion = 0x0;
extern PACKAGE GUID LIBID_ShockwaveFlashObjects;
extern PACKAGE GUID IID_IShockwaveFlash;
extern PACKAGE GUID DIID__IShockwaveFlashEvents;
extern PACKAGE GUID CLASS_ShockwaveFlash;
extern PACKAGE GUID IID_IFlashFactory;
extern PACKAGE GUID IID_IDispatchEx;
extern PACKAGE GUID IID_IFlashObjectInterface;
extern PACKAGE GUID IID_IServiceProvider;
extern PACKAGE GUID CLASS_FlashObjectInterface;
extern PACKAGE System::ResourceString _dtlServerPage;
#define Shockwaveflashobjects_tlb_dtlServerPage System::LoadResourceString(&Shockwaveflashobjects_tlb::_dtlServerPage)
extern PACKAGE System::ResourceString _dtlOcxPage;
#define Shockwaveflashobjects_tlb_dtlOcxPage System::LoadResourceString(&Shockwaveflashobjects_tlb::_dtlOcxPage)
extern PACKAGE void __fastcall Register(void);

}	/* namespace Shockwaveflashobjects_tlb */
using namespace Shockwaveflashobjects_tlb;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Shockwaveflashobjects_tlb
