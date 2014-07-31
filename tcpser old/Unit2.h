//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "IdCustomTCPServer.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPServer.hpp>

//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TMemo *Memo1;
	TIdTCPServer *IdTCPServer1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall IdTCPServer1Connect(TIdContext *AContext);
	void __fastcall IdTCPServer1Execute(TIdContext *AContext);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
private:	// User declarations
	TStringList *list;
public:		// User declarations

	__fastcall TForm2(TComponent* Owner);
    int membernumber;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
