//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "MyMap.h"
#include "Lab7Var4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TApp *App;
MyMap *map = NULL;

//---------------------------------------------------------------------------
__fastcall TApp::TApp(TComponent *Owner)
		: TForm(Owner) {
	Memo->Clear();

}

//---------------------------------------------------------------------------
void __fastcall TApp::FormClose(TObject *Sender, TCloseAction &Action) {
	delete map;
}

//---------------------------------------------------------------------------
void __fastcall TApp::ButtonRandomClick(TObject *Sender) {
	try {
		delete map;
		map = new MyMap(StrToInt(EditSize->Text));
		map->random();
		Memo->Clear();
		map->print(Memo);
	} catch (...) {
		Application->Title = "Error";
		ShowMessage("Invalid input");
	}
}
//---------------------------------------------------------------------------


void __fastcall TApp::ButtonDeleteClick(TObject *Sender) {
	try {
		map->deleteNode(StrToInt(EditFindOrDelete->Text));
		Memo->Clear();
		map->print(Memo);
	} catch (...) {}
}
//---------------------------------------------------------------------------

void __fastcall TApp::ButtonFindMinClick(TObject *Sender) {
	try {
		ShowMessage(map->getMin());
	} catch (...) {
		ShowMessage("Нет элементов!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TApp::ButtonFindClick(TObject *Sender) {
	try {
		if (map->findNode(StrToInt(EditFindOrDelete->Text))) {
			ShowMessage("Содержит");
		} else {
			ShowMessage("Не содержит");
        }
    } catch (...) {}
}
//---------------------------------------------------------------------------

