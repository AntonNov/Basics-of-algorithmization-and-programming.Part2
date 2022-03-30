//---------------------------------------------------------------------------

#ifndef RandomNumbersH
#define RandomNumbersH
//---------------------------------------------------------------------------

template <typename T>
class RandNum
{
protected:
	// само значение
	T value;
public:
	// получить value oт 0 до 100
	RandNum()
	{
		Get_value();
	}
	T Get_value ()
	{
		return value = random(101);
	}
};
#endif
