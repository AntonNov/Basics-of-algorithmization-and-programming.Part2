//---------------------------------------------------------------------------

#pragma hdrstop

#include "Exception_setproperty.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
	MyException::MyException (int code) : Exception("Myexception")
	{
        errorCode = code;
		switch (code) {
		case 0:
			errorMessage = "There is already such train";
			break;
		case 1:
			errorMessage = "impossible to perform an order";
			break;

		}
	}
	int MyException::ErrorCode()
	{
		return errorCode;
	}
	String MyException::ErrorMessage()
	{
		return errorMessage;
    }
