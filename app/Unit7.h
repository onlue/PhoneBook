//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TDBText *DBText1;
	TLabel *Label1;
	TDBText *DBText2;
	TLabel *Label2;
	TDBText *DBText3;
	TLabel *Label3;
	TDBText *DBText4;
	TLabel *Label4;
	TDBText *DBText5;
	TLabel *Label5;
	TLabel *Label6;
	TDBText *DBText6;
	TDBText *DBText7;
	TLabel *Label7;
	TDBText *DBText8;
	TDBText *DBText9;
	TLabel *Label8;
	TLabel *Label9;
	TEdit *Edit1;
	TUpDown *UpDown1;
	TLabel *Label10;
	TImage *Image1;
	TImage *Image2;
	void __fastcall UpDown1Click(TObject *Sender, TUDBtnType Button);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
