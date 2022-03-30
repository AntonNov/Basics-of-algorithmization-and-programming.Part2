//---------------------------------------------------------------------------

#ifndef SolutionH
#define SolutionH
#include "Queue.h"
//---------------------------------------------------------------------------
template <typename T>
 class Solution  : public Queue<T>
 {
	// обмен узлов
	void swap(Node<T> *i, Node<T> *j)
	{
		i->next=j->next;
		j->next=i;

		if(i->next)
		{
			i->next->prev=i;

		}else
		{
			Queue<T>::head=i;

		}

		j->prev=i->prev;
		i->prev=j;
		if(j->prev)
		{
			j->prev->next=j;
		}
		else
		{

			Queue<T>::tail=j;
		}
	}
	public:
	//сортировка пузырьком
	void sort()
	{
		for(Node<T> *i = Queue<T>::head; i; i=i->prev)
		{
			for(Node<T> *j = Queue<T>::head; j!=Queue<T>::tail; j=j->prev)
			{
				if(j->prev->Get_value()<j->Get_value()){
					swap(j->prev,j);
					j=j->next;

				}

			}
		}
	}
 };
#endif

