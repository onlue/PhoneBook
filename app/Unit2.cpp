//---------------------------------------------------------------------------

#include <vcl.h>
#include <jpeg.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit9.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDateTime Tm;
TForm2 *Form2;
TTime tm;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
		ADOConnection2->Provider = "Microsoft.Jet.OLEDB.4.0";
		ADOConnection2->ConnectionString = "TimeDate.mdb";
		ADOQuery2->Active = true;
   ADOQuery1->Active = false;
   ADOConnection1->Provider = "Microsoft.Jet.OLEDB.4.0";
   ADOConnection1->ConnectionString = "bd.mdb";
   ADOQuery1->Active = true;
   Label2->Caption = Tm.CurrentDateTime();
   Label2->Left = Form2->Width/4;
   Image2->Top = Form2->Height/4;
   Image2->Height = 250;
   Image2->Width = 250;


}
//---------------------------------------------------------------------------

void __fastcall TForm2::N4Click(TObject *Sender)
{
    Form3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N5Click(TObject *Sender)
{
    Form1->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TForm2::N8Click(TObject *Sender)
{
	ADOQuery1->Active=false;
	ADOQuery1->SQL->Text = "select * from table1 ORDER BY NameAgent ASC";
	ADOQuery1->Active=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::N9Click(TObject *Sender)
{
	ADOQuery1->Active=false;
	ADOQuery1->SQL->Text = "select * from table1 ";
	ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm2::N10Click(TObject *Sender)
{
	Form5->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer1Timer(TObject *Sender)
{

	Label2->Caption = Tm.CurrentDateTime();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::N6Click(TObject *Sender)
{
Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N11Click(TObject *Sender)
{
    Form6->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N12Click(TObject *Sender)
{
  ADOQuery1->Active=false;
	ADOQuery1->SQL->Text = "select * from table1 ORDER BY NormalAge DESC";
	ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N13Click(TObject *Sender)
{
   ADOQuery1->Active=false;
	ADOQuery1->SQL->Text = "select * from table1 ORDER BY NormalAge ASC";
	ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N3Click(TObject *Sender)
{
	ShowMessage("���������� ����������, ������������ ��� �������� �������� ������� � ��������� ������ ����������");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DBCtrlGrid1Click(TObject *Sender)
{
	Form7->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::ADOQuery1AfterScroll(TDataSet *DataSet)
{
	if(ADOQuery1->FieldByName("photo")->AsString != ""){
		Image2->Picture->LoadFromFile(ADOQuery1->FieldByName("photo")->AsString);
	}
	else{
	  Image2->Picture->LoadFromFile("none.png");
	}


}
//---------------------------------------------------------------------------
int fixUpScroll = 0;
int fixDownScroll = 0;
void __fastcall TForm2::FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
   ++fixUpScroll;
   if(fixUpScroll%5==0){
		DBCtrlGrid1->DoKey(gkScrollUp);
   }


}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
		  bool &Handled)
{
	++fixDownScroll;
   if(fixDownScroll%5==0){
		DBCtrlGrid1->DoKey(gkScrollDown);
   }


}
//---------------------------------------------------------------------------

bool index = false;

void __fastcall TForm2::N14Click(TObject *Sender)
{   if(index != true){
		Panel1->Visible = true;
		Panel2->Visible = true;
		index = true;
	}
	else{
		Panel1->Visible = false;
		Panel2->Visible = false;
        index = false;
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Panel1Click(TObject *Sender)
{
    DBCtrlGrid1->DoKey(gkScrollDown);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Panel2Click(TObject *Sender)
{
	DBCtrlGrid1->DoKey(gkScrollUp);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::�����������Click(TObject *Sender)
{
	Form9->TimePicker1->Time = 0;
	Form9->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::notesTimerTimer(TObject *Sender)
{
		tm=Now();
		ADOQuery2->First();
			while(!ADOQuery2->Eof){
				if(tm.FormatString("hh:nn:00") == ADOQuery2->Fields->FieldByName("TimeNote")->AsString){
					ShowMessage(ADOQuery2->Fields->FieldByName("Note")->AsString);
                    ADOQuery2->Delete();
				}
				ADOQuery2->Next();
			}
}
//---------------------------------------------------------------------------


