//---------------------------------------------------------------------------

#ifndef EjerciciosH
#define EjerciciosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *Numeros1;
	TMenuItem *Numeros2;
	TMenuItem *Sumadedigitosimpares1;
	void __fastcall Sumadedigitosimpares1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
