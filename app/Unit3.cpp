//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)

{   //Image1->Canvas->Font->Size = 24;
	//Image1->Canvas->Font->Color = clBlack;
	//Image1->Canvas->TextOutW(0,0,"����������");
}
bool hintL = true;
//---------------------------------------------------------------------------
void __fastcall TForm3::N1Click(TObject *Sender)
{   if(hintL == true){
	Label1->Visible = true;
	Label2->Visible = true;
	Label3->Visible = true;
	Label4->Visible = true;
	Label5->Visible = true;
	Label7->Visible = true;
	Label8->Visible = true;
	Label9->Visible = true;
	Label10->Visible = true;
	hintL = false;
	}
	else{
	Label1->Visible = false;
	Label2->Visible = false;
	Label3->Visible = false;
	Label4->Visible = false;
	Label5->Visible = false;
	Label7->Visible = false;
	Label8->Visible = false;
	Label9->Visible = false;
	Label10->Visible = false;
	hintL = true;
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Panel1Click(TObject *Sender)
{
	if (Edit1->Text !="" && Edit2->Text !="" && Edit4->Text != "" && MaskEdit1->Text != "" && Edit5->Text != "" && Edit6->Text != "" && Edit7->Text != "" ) {
		Form2->ADOQuery1->Insert();
		Form2->ADOQuery1->FieldByName("NameAgent")->AsString = Edit1->Text;
		Form2->ADOQuery1->FieldByName("Address")->AsString = Edit2->Text;
		Form2->ADOQuery1->FieldByName("Operator")->AsString = ComboBox1->Text;
		Form2->ADOQuery1->FieldByName("PhoneNumber")->AsString = MaskEdit1->Text;
		Form2->ADOQuery1->FieldByName("Status")->AsString = ComboBox2->Text;
		Form2->ADOQuery1->FieldByName("E-mail")->AsString = Edit4->Text;
		Form2->ADOQuery1->FieldByName("CityName")->AsString = Edit6->Text;
		Form2->ADOQuery1->FieldByName("Notes")->AsString = Edit5->Text;
		Form2->ADOQuery1->FieldByName("NormalAge")->AsString = Edit7->Text;
		if(picname->Caption != "picname"){
		Form2->ADOQuery1->FieldByName("photo")->AsString = picname->Caption;
		}
		Form2->ADOQuery1->Post();
		}
		else{
			ShowMessage("����� ����������� ������� ����������");
			ShowMessage(picname->Caption);
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Panel2Click(TObject *Sender)
{
	Form3->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
	if(OpenPictureDialog1->Execute()){
		picname->Caption = OpenPictureDialog1->FileName;
		Image2->Picture->LoadFromFile(OpenPictureDialog1->FileName);

	}
}
//---------------------------------------------------------------------------

