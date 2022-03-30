//---------------------------------------------------------------------------

#ifndef QueueH
#define QueueH
//---------------------------------------------------------------------------
#endif
// узел двусвязного списка
template <typename T>
class Node
{
private:
// данные
	T data;
public:
//следующий и предыдущий узлы
	Node *next;
	Node *prev;
	Node()
	{
		next=nullptr;
		prev=nullptr;
	}
	~Node(){}
	// getter
	T Get_value()
	{
		return data;
	}
	// setter
	void Set_value(T value)
	{
		data = value;
	}
};
//очередь
template <typename T>
class Queue
{

public:
	Node<T> *head;
	Node<T> *tail;
	// pop() - удалить с начала (для очереди)
	void pop()
	{
		Node<T> *tmp=head;
		if(head==tail)
		{
			head=nullptr;
			tail=nullptr;
		}else
		{
			head->prev->next=nullptr;
			head=head->prev;
		}
		delete tmp;
	}
	// push() - добавить в конец (для очереди)
	void push(T x)
	{

		Node<T> *tmp = new Node<T>;
		tmp->Set_value(x);
		if(tail==nullptr)
		{
			tail=tmp;
			head=tmp;
		}else
		{
			tail->prev=tmp;
			tmp->next=tail;
			tail=tmp;
		}
	}

	Queue()
	{
		head=nullptr;
		tail=nullptr;
	}
	~Queue()
	{
		while(!head)
		{
			Node<T> *tmp=head;
			head=head->prev;
			delete tmp;
		}
	}
};


