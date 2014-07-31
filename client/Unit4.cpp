//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ShockwaveFlashObjects_TLB"
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
AnsiString as;
bool canswf=true;
//---------------------------------------------------------------------------
void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
	try{
		if(this->Timer1->Enabled){
			if(this->IdTCPClient1->Connected()){
				if(!this->IdTCPClient1->IOHandler->InputBufferIsEmpty()){
					as = this->IdTCPClient1->IOHandler->ReadLn("\n",5,512);
						AnsiString flkey = Fetch(as," ");
						if(flkey == "det") {
							this->ShockwaveFlash1->FlashVars = "qq=true&key=det&socketVar="+as;
						}else if(flkey == "new") {
							//AnsiString name = Fetch(as,",");
							this->ShockwaveFlash1->FlashVars = "qq=true&key=new&socketVar="+as;
						}else if(flkey == "sit") {
							AnsiString xsit = Fetch(as,",");
							AnsiString ysit = Fetch(as,",");
							this->ShockwaveFlash1->FlashVars="qq=true&key=sit&name="+as+"&X="+xsit+"&Y="+ysit;
						}


				}
			}
		}
	}catch(Exception *ex){
		this->Timer1->Enabled= false;
		this->IdTCPClient1->Disconnect();
		ShowMessage(ex->Message);

	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::IdTCPClient1Connected(TObject *Sender)
{
	this->Timer1->Enabled= true;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::IdTCPClient1Disconnected(TObject *Sender)
{
	this->Memo1->Lines->Add("Disconnected");
}
//---------------------------------------------------------------------------
void __fastcall TForm4::ShockwaveFlash1FSCommand(TObject *ASender,
      const WideString command, const WideString args)
{
	if(command=="got")this->ShockwaveFlash1->FlashVars = "qq=false";
	if(this->IdTCPClient1->Connected()){
		if(command == "u01"){
			if(this->IdTCPClient1->Connected()){
				this->IdTCPClient1->IOHandler->WriteLn("u01 "+args);    // u01 + loginitf._input.text
			}else{
				this->Memo1->Lines->Add("without link  01");
			}
		}else if(command == "u02"){
			if(this->IdTCPClient1->Connected()){
				this->IdTCPClient1->IOHandler->WriteLn("u02 "+args);   // u02 + x,y,playerName
				//this->Memo1->Lines->Add(args);
			}else{
				this->Memo1->Lines->Add("without link  02");
			}
		}else if(command == "u03"){
			if(this->IdTCPClient1->Connected()){
				this->IdTCPClient1->IOHandler->WriteLn("u03 "+args);
				this->Memo1->Lines->Add(args);
			}else{
				ShowMessage("without link socket");
			}
		}else if(command == "det"){
			if(this->IdTCPClient1->Connected()){
				this->IdTCPClient1->IOHandler->WriteLn("det det");
			}else{
				ShowMessage("without link socket");
			}
		}
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
      this->IdTCPClient1->Host = this->Edit2->Text;
	  this->IdTCPClient1->Port =1111;
	  this->IdTCPClient1->Connect();
	 AnsiString root = ExtractFilePath(Application->ExeName);
	 this->ShockwaveFlash1 ->Movie = root + "Flash\\game.swf";
	 this->Memo1->Lines->Add(this->ShockwaveFlash1 ->Movie);
	
}
//---------------------------------------------------------------------------
void __fastcall TForm4::fun(AnsiString command , AnsiString args){

}


void __fastcall TForm4::BtnDisConnectClick(TObject *Sender)
{
	if(this->IdTCPClient1->Connected()){
		this->IdTCPClient1->Disconnect();
		this->Timer1->Enabled= false;
	}else{
		ShowMessage("without link socket");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
    try{
			this->IdTCPClient1->Host = this->Edit2->Text;
			this->IdTCPClient1->Port =1111;
			this->IdTCPClient1->Connect();
		}catch(Exception *ex){
			ShowMessage(ex->Message);
		}
}
//---------------------------------------------------------------------------

