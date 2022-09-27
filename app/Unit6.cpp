//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Panel1Click(TObject *Sender)
{
	  Form2->ADOQuery1->Active = False;
	  Form2->ADOQuery1->SQL->Text = "Select * from table1 where NormalAge between :paramone and :paramtwo";
	  Form2->ADOQuery1->Parameters->ParamByName("paramone")->Value = StrToInt(Edit1->Text);
	  Form2->ADOQuery1->Parameters->ParamByName("paramtwo")->Value = StrToInt(Edit2->Text);
	  Form2->ADOQuery1->Active = True;
}
//---------------------------------------------------------------------------

