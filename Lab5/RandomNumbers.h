//---------------------------------------------------------------------------

#ifndef RandomNumbersH
#define RandomNumbersH
//---------------------------------------------------------------------------

template <typename T>
class RandNum
{
protected:
	// ���� ��������
	T value;
public:
	// �������� value o� 0 �� 100
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
