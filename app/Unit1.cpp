//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
   Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel1Click(TObject *Sender)
{
	TLocateOptions Options;
	if(Form2->ADOQuery1->Locate("NameAgent",Edit1->Text,Options)){
		Form2->ADOQuery1->Delete();
	}
	else if(Form2->ADOQuery1->Locate("Code",Edit1->Text,Options)){
		Form2->ADOQuery1->Delete();
	}
	else if(Form2->ADOQuery1->Locate("PhoneNumber",Edit1->Text,Options)){
		Form2->ADOQuery1->Delete();
	}
	else if(Form2->ADOQuery1->Locate("Address",Edit1->Text,Options)){
		Form2->ADOQuery1->Delete();
	}

	else{
		ShowMessage("��� ��������");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel2Click(TObject *Sender)
{
    Form1->Close();
}
//---------------------------------------------------------------------------

