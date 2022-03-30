//---------------------------------------------------------------------------

#ifndef Exception_setpropertyH
#define Exception_setpropertyH
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <string.h>
//---------------------------------------------------------------------------
class MyException : public Exception
{
	// ��� ������
	int errorCode;
	// ��������� �� ������
	String errorMessage;
public:
	MyException (int code);
    //getters
	int ErrorCode();
	String ErrorMessage();
};
#endif
