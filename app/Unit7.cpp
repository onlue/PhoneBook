//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::UpDown1Click(TObject *Sender, TUDBtnType Button)
{
 Label1->Font->Size = StrToInt(Edit1->Text);
 Label2->Font->Size = StrToInt(Edit1->Text);
 Label3->Font->Size = StrToInt(Edit1->Text);
 Label4->Font->Size = StrToInt(Edit1->Text);
 Label5->Font->Size = StrToInt(Edit1->Text);
 Label6->Font->Size = StrToInt(Edit1->Text);
 Label7->Font->Size = StrToInt(Edit1->Text);
 Label8->Font->Size = StrToInt(Edit1->Text);
 Label9->Font->Size = StrToInt(Edit1->Text);
 DBText1->Font->Size = StrToInt(Edit1->Text);
 DBText2->Font->Size = StrToInt(Edit1->Text);
 DBText3->Font->Size = StrToInt(Edit1->Text);
 DBText4->Font->Size = StrToInt(Edit1->Text);
 DBText5->Font->Size = StrToInt(Edit1->Text);
 DBText6->Font->Size = StrToInt(Edit1->Text);
 DBText7->Font->Size = StrToInt(Edit1->Text);
 DBText8->Font->Size = StrToInt(Edit1->Text);
 DBText9->Font->Size = StrToInt(Edit1->Text);
 if(StrToInt(Edit1->Text)>15){
	Edit1->Text = IntToStr(15);
 }
}
//---------------------------------------------------------------------------



