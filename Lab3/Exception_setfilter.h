//---------------------------------------------------------------------------

#ifndef Exception_setfilterH
#define Exception_setfilterH
//---------------------------------------------------------------------------
class Exception_SetFilter : public Exception
{
public:
	// код ошибки
	int errorCode;
    // сообщение об ошибке
	String errorMessage;
	Exception_SetFilter (int code);
};
#endif

