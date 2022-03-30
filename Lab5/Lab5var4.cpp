//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lab5var4.h"
#include "Solution.h"
#include "RandomNumbers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
RandNum<int> randNum;
auto queue = new Solution<int>;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->ListBox1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	try
	{
		delete queue;
	}
	catch(...)
	{
		ShowMessage("Ошибка");
	}
}
//---------------------------------------------------------------------------
void showQueue()
{
	Form1->ListBox1->Clear();
	Node<int> *tmp = queue->head;
	while(tmp!=NULL)
	{
		Form1->ListBox1->Items->Add(IntToStr(tmp->Get_value()));
		tmp=tmp->prev;
	}
}

void __fastcall TForm1::PushButtonClick(TObject *Sender)
{
   try
   {
	   queue->push(randNum.Get_value());
   }
   catch(...)
   {
		ShowMessage("Что-то пошло не так...");
   }
   showQueue();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SortButtonClick(TObject *Sender)
{
	if(queue->head!=queue->tail)
	{
	   queue->sort();
	   showQueue();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PopButtonClick(TObject *Sender)
{
	if(queue->head!=NULL)
	{
		queue->pop();
	}
	showQueue();
}
//---------------------------------------------------------------------------


