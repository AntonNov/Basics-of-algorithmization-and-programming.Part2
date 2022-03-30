//---------------------------------------------------------------------------

#pragma hdrstop

#include "Exception_setfilter.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
	Exception_SetFilter::Exception_SetFilter (int code) : Exception("SetFilter exception")
	{
		errorCode = code;
		switch (code) {
		case 1:
			errorMessage = "���-�� ������� ������ ���� �����\n��������������� ������.";
			break;
		case 2:
			errorMessage = "���� ������ ������ ���� ������������\n��������������� ������.";
			break;
		}
	}
