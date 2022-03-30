//---------------------------------------------------------------------------

#ifndef StackH
#define StackH

//---------------------------------------------------------------------------
class Node {
public:
//информационная часть
	int value;
//указатель на следующий узел
	Node *next;
};

class Stack {
public:
//начало стека
	Node *beginList;

	Stack();

	~Stack();
//добавить узел
	void add(int t);
//распечатать стек
	AnsiString print();
//удалить узел
	void deleteNode(int t);
//найти узел
	bool findNode(int t);
};

#endif
