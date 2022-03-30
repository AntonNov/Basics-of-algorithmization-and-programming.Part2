//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>
#include "Task.h"
#include "Solution.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

extern Stack *Begin;

extern double mas[201]; // Массив для вычисления

extern Set <char, (char)0, (char)255> znak ; // Множество символов-знаков

extern int Kol;

extern char a;

void Task::	From_infix_to_postfix()
{
try {

	Stack *t;

	Begin = NULL; // Стек операций пуст

	Form1->Label4->Caption=Form1->Label4->Caption+' '+a;

	char ss, a;

	String OutStr, InStr;

	// Входная и выходная строки

	OutStr = "";

	Form1->Edit2->Text = "";

	InStr = Form1->Edit1->Text;

	znak << '*' << '/' << '+' << '-' << '^';

	int len = InStr.Length(), k;

	for (k = 1; k <= len; k++) {

		ss = InStr[k];

		// Открывающую скобку записываем в стек

		if ( ss == '(' ) Begin = InStack(Begin, ss);

		if ( ss == ')' ) {

		// Выталкиваем из стека все знаки операций до открывающей скобки

			while ( (Begin -> info) != '(' ) {

				Begin = OutStack(Begin,&a); // Считываем элемент из стека

				 // Записываем в строку

				OutStr+=a;

			}

			Begin = OutStack(Begin,&a); // Удаляем из стека скобку «(»

		}
		// Букву (операнд) заносим в выходную строку

		if (ss >= 'a' && ss <= 'z' )

		OutStr+=ss;

		/* Если знак операции, то переписываем из стека в
		выходную строку все операции с большим или равным приоритетом */

		if (znak.Contains(ss)) {

		while ( Begin != NULL && Prior (Begin -> info) >= Prior(ss) ) {

			Begin = OutStack(Begin, &a);

			OutStr+=a;
		}

		Begin = InStack(Begin, ss);

		}

	}
	// Если стек не пуст, переписываем все

	// операции в выходную строку

	while ( Begin != NULL){

		Begin = OutStack(Begin, &a);

		OutStr+=a;

	}

	Form1->Edit2->Text = OutStr;

	// Выводим полученную строку
	}
	catch(Exception &exception)
	{
		Application->Title=" ";

		ShowMessage("Ошибка");
	}
}
void Task::Calculate()
{
	char ch;

	String OutStr = Form1->Edit2->Text;

	for (int i=1; i<Kol; i++) {

		ch = Form1->StringGrid1->Cells[0][i][1];

		mas[int(ch)]=StrToFloat(Form1->StringGrid1->Cells[1][i]);

	}

	Form1->Edit3->Text=FloatToStr(Rezult(OutStr));
}

Task *lab4;
