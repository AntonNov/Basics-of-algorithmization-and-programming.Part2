//---------------------------------------------------------------------------

#ifndef ListH
#define ListH
#include <vcl.h>
#include <iostream>
//---------------------------------------------------------------------------
class Node{
	String day;
	String destination;
	int hh;
	int mm;
	int seats;
	int id;
	public:
	Node* next;

	Node();
	~Node();
	 //setters & getters
	void setDay(String s);
	String getDay();

	void setDestination(String s);
	String getDestination();

	void setHH(int h);
	int getHH();

	void setMM(int m);
	int getMM();

	void setSeats(int seats);
	int getSeats();

	void setId(int id);
	int getId();

};

class List{

public:

	Node* head;

	List();

	~List();
    //добавить
 	void Push(Node *tmp);
};
#endif
