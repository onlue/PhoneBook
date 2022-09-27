//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TPanel *Panel1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	void __fastcall ColorBox1Change(TObject *Sender);
	void __fastcall Panel1Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif