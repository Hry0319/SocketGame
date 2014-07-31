//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "IdCustomTCPServer"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if(!IdTCPServer1->Active){IdTCPServer1->Active=true;
		this->Button1->Caption="stop";
	}
	else{ IdTCPServer1->Active=false;
   		this->Button1->Caption="start";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::IdTCPServer1Connect(TIdContext *AContext)
{
	this->Memo1->Lines->Add("client online" );
}
//---------------------------------------------------------------------------



void __fastcall TForm2::IdTCPServer1Execute(TIdContext *AContext)
{
	if(AContext->Connection->IOHandler->Readable(5)){
		AnsiString temp = AContext->Connection->IOHandler->ReadLn();
		AnsiString tmp = Fetch(temp ," ");
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
		if(tmp == "u01"){                 // 辦新帳號
			AnsiString reg = Fetch(temp ," ");
			list->AddObject(reg,AContext);
			membernumber++;
			this->Memo1->Lines->Add(reg);
			AContext->Connection->IOHandler->Write("new "+reg);   // new + name
			AContext->Connection->IOHandler->Write("\n");
		}else if(tmp == "u02"){      //座標
        	list->Sort();
			for(int j=0;j<membernumber;j++){
				TIdContext *AContOther;
				AContOther = (TIdContext*)list->Objects[j];
				if(AContOther==AContext){continue;}
				AContOther->Connection->IOHandler->Write("sit "+temp);    // sit + x,y,playerName
				AContOther->Connection->IOHandler->Write("\n");
			}
		}else if(tmp == "u03"){         //子彈移動
        	list->Sort();
			if(list->IndexOfObject(AContext)==-1){
				AContext->Connection->IOHandler->WriteLn(" no account !!");
			}else{
				AnsiString blxsit = Fetch(temp ," ");
				AnsiString blysit = Fetch(temp ," ");
				for(int j=0;j<=membernumber;j++){
					TIdContext *AContOther;
					AContOther = (TIdContext*)list->Objects[j];
					if(AContOther == AContext) continue;
					AContOther->Connection->IOHandler->Write("bullet");
					AContOther->Connection->IOHandler->Write(blxsit);
					AContOther->Connection->IOHandler->Write(" ");
					AContOther->Connection->IOHandler->Write(blysit);
					AContOther->Connection->IOHandler->Write("\n");
				}
			}
		}else if(tmp == "u04"){         //碰撞+血量
        	if(list->IndexOfObject(AContext)==-1){
				AContext->Connection->IOHandler->WriteLn(" no account !!");
			}else{
				AnsiString hit = Fetch(temp ," ");
				AnsiString hp = Fetch(temp ," ");
				for(int j=0;j<=membernumber;j++){
					TIdContext *AContOther;
					AContOther = (TIdContext*)list->Objects[j];
					AContOther->Connection->IOHandler->Write("hithp");
					AContOther->Connection->IOHandler->Write(hit);
					AContOther->Connection->IOHandler->Write(" ");
					AContOther->Connection->IOHandler->Write(hp);
					AContOther->Connection->IOHandler->Write("\n");
				}
			}
		}else if(tmp == "det"){
        	list->Sort();
			if(membernumber>0){
				for(int j=0;j<membernumber;j++){
				   AContext->Connection->IOHandler->Write("det "+list->Strings[j]);   //det +regname
				   AContext->Connection->IOHandler->Write("\n");
				}
			}
		}else{
		   //	AContext->Connection->IOHandler->WriteLn();
		}
///////////////////////////////////////////////////////////////////////
		//AContext->Connection->IOHandler->Write(">");

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
	 list = new TStringList();
	 membernumber=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormDestroy(TObject *Sender)
{
	list->Free();
}
//---------------------------------------------------------------------------


