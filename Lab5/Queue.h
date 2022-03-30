//---------------------------------------------------------------------------

#ifndef QueueH
#define QueueH
//---------------------------------------------------------------------------
#endif
// ���� ����������� ������
template <typename T>
class Node
{
private:
// ������
	T data;
public:
//��������� � ���������� ����
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
//�������
template <typename T>
class Queue
{

public:
	Node<T> *head;
	Node<T> *tail;
	// pop() - ������� � ������ (��� �������)
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
	// push() - �������� � ����� (��� �������)
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


