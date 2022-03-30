//---------------------------------------------------------------------------
#include "Stack.h"

#ifndef MapH
#define MapH

//---------------------------------------------------------------------------
class Map {
public:
	//размер карты
	int n;
	//массив стеков
	Stack **arr;

	Map(int t);

	~Map();
	//добавить
	void add(int t);

	void print(TMemo *mem);

	void deleteNode(int t);

	bool findNode(int t);

};

#endif
