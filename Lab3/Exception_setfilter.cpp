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
			errorMessage = "Кол-во товаров должно быть целым\nнеотрицательным числом.";
			break;
		case 2:
			errorMessage = "Цена товара должна быть вещественным\nнеотрицательным числом.";
			break;
		}
	}
