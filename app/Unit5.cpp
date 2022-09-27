//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Panel1Click(TObject *Sender)
{
    Form2->ADOQuery1->Active = false;
	Form2->ADOQuery1->SQL->Text = "select * from table1 where Operator="+QuotedStr(ComboBox1->Text);
    Form2->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

