//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>
#include "Task.h"
#include "Solution.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

extern Stack *Begin;

extern double mas[201]; // ������ ��� ����������

extern Set <char, (char)0, (char)255> znak ; // ��������� ��������-������

extern int Kol;

extern char a;

void Task::	From_infix_to_postfix()
{
try {

	Stack *t;

	Begin = NULL; // ���� �������� ����

	Form1->Label4->Caption=Form1->Label4->Caption+' '+a;

	char ss, a;

	String OutStr, InStr;

	// ������� � �������� ������

	OutStr = "";

	Form1->Edit2->Text = "";

	InStr = Form1->Edit1->Text;

	znak << '*' << '/' << '+' << '-' << '^';

	int len = InStr.Length(), k;

	for (k = 1; k <= len; k++) {

		ss = InStr[k];

		// ����������� ������ ���������� � ����

		if ( ss == '(' ) Begin = InStack(Begin, ss);

		if ( ss == ')' ) {

		// ����������� �� ����� ��� ����� �������� �� ����������� ������

			while ( (Begin -> info) != '(' ) {

				Begin = OutStack(Begin,&a); // ��������� ������� �� �����

				 // ���������� � ������

				OutStr+=a;

			}

			Begin = OutStack(Begin,&a); // ������� �� ����� ������ �(�

		}
		// ����� (�������) ������� � �������� ������

		if (ss >= 'a' && ss <= 'z' )

		OutStr+=ss;

		/* ���� ���� ��������, �� ������������ �� ����� �
		�������� ������ ��� �������� � ������� ��� ������ ����������� */

		if (znak.Contains(ss)) {

		while ( Begin != NULL && Prior (Begin -> info) >= Prior(ss) ) {

			Begin = OutStack(Begin, &a);

			OutStr+=a;
		}

		Begin = InStack(Begin, ss);

		}

	}
	// ���� ���� �� ����, ������������ ���

	// �������� � �������� ������

	while ( Begin != NULL){

		Begin = OutStack(Begin, &a);

		OutStr+=a;

	}

	Form1->Edit2->Text = OutStr;

	// ������� ���������� ������
	}
	catch(Exception &exception)
	{
		Application->Title=" ";

		ShowMessage("������");
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
