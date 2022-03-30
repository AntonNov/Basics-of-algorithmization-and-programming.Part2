//---------------------------------------------------------------------------

#ifndef Lab5var4H
#define Lab5var4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *PushButton;
	TButton *SortButton;
	TButton *PopButton;
	TListBox *ListBox1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall PushButtonClick(TObject *Sender);
	void __fastcall SortButtonClick(TObject *Sender);
	void __fastcall PopButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
