//---------------------------------------------------------------------------

#ifndef Exception_setfilterH
#define Exception_setfilterH
//---------------------------------------------------------------------------
class Exception_SetFilter : public Exception
{
public:
	// ��� ������
	int errorCode;
    // ��������� �� ������
	String errorMessage;
	Exception_SetFilter (int code);
};
#endif

