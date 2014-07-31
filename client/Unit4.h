//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <OleCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <ExtCtrls.hpp>
#include "ShockwaveFlashObjects_TLB.hpp"
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TIdTCPClient *IdTCPClient1;
	TMemo *Memo1;
	TTimer *Timer1;
	TEdit *Edit2;
	TLabel *Label1;
	TShockwaveFlash *ShockwaveFlash1;
	TButton *Button1;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall IdTCPClient1Connected(TObject *Sender);
	void __fastcall IdTCPClient1Disconnected(TObject *Sender);
	void __fastcall ShockwaveFlash1FSCommand(TObject *ASender,
	const WideString command, const WideString args);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall BtnDisConnectClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
    void __fastcall fun(AnsiString command , AnsiString args);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
