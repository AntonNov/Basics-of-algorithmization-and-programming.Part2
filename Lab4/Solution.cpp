//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Solution.h"
#include "Task.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

extern Task *lab4;

Stack *Begin;

double mas[201]; // Массив для вычисления

Set <char, (char)0, (char)255> znak ; // Множество символов-знаков

int Kol = 6;

int counter = 1;

char a = 'a';
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	char a = 'a';

	StringGrid1->Cells[0][0] ="Имя";

	StringGrid1->Cells[1][0]="Знач.";

	for(int i = 1; i<Kol; i++) {

		StringGrid1->Cells[0][i] = a++;

	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	lab4->From_infix_to_postfix();
}

double Rezult(String Str) {

	char ch, ch1, ch2;

	double op1, op2, rez;

	znak << '*' << '/' << '+' << '-' << '^';

	char chr = 'z'+1;

	for (int i=1, len = Str.Length(); i <= len; i++){

		ch=Str[i];

	if (! znak.Contains(ch)) Begin = InStack(Begin, ch);
	else {

		Begin = OutStack(Begin,&ch1);

		Begin = OutStack(Begin,&ch2);

		op1 = mas[int (ch1)];

		op2 = mas[int (ch2)];

		switch (ch){

			case '+' : rez=op2+op1; break;

			case '-' : rez=op2-op1; break;

			case '*' : rez=op2*op1; break;

			case '/' : rez=op2/op1; break;

			case '^' : rez=pow(op2,op1); break;

		}

		mas[int (chr)] = rez;

		Begin = InStack(Begin,chr);

		chr++; }
	}

	return rez;
}
Stack* InStack(Stack *p, char in) {

	// Захватываем память для элемента

	Stack *t = new Stack;

	t -> info = in; // Формируем информационную часть

	t -> next = p; // Формируем адресную часть

return t; }

Stack* OutStack(Stack* p, char *out) {

	// Устанавливаем указатель t на вершину p

	Stack *t = p;

	*out = p -> info;

	// Переставляем вершину p на следующий элемент

	p = p -> next;

	delete t; // Удаляем бывшую вершину t

	return p; // Возвращаем новую вершину p

}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{

	if (counter < Kol) {

		try {

			StrToFloat(Edit4->Text);

			StringGrid1->Cells[1][counter] = Edit4->Text;

			if ((counter+1)<Kol) {

				String str = "Введите значение переменной  ";

				Label4->Caption=str+=++a;

			}

			counter++;

			Edit4->Clear();

			if (!(counter < Kol))
			{
				Label4->Caption="Спасибо, ввод закончен!";
			}

		}
		catch (...) {

			  Application->Title="Предупреждение";

			  ShowMessage("Вы зачем ввели не число??");
		}


	}
	else
	{

		Application->Title="Предупреждение";

		ShowMessage("Зачем вы пытаетесь до сих пор что-то ввести?");
	}
}
int Prior ( char a ){

	switch ( a ) {

		case '^': return 4;

		case '*': case '/': return 3;

		case '-': case '+': return 2;

		case '(': return 1;

	}

	return 0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	lab4->Calculate();
}
//---------------------------------------------------------------------------

