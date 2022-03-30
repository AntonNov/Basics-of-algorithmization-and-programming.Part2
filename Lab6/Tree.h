//---------------------------------------------------------------------------

#ifndef TreeH
#define TreeH
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vcl.h>
#include <math.h>
#include <memory>

class node {
public:
	//ключ, по которому добавляются имена в бинарном дереве поиска
	int key;
	//информационная часть
	AnsiString name;
	//левое, правое поддерево
	node *left, *right;
	//добавить узел по ключу и строке
	void add(node **tree, int x, AnsiString str);
	//симметричный(внутренний) обход
	void simmetricPrint(node *tree, TMemo *mem);
	//прямой обход
	void preOrderPrint(node *tree, TMemo *mem);
	//обратный обход
	void postOrderPrint(node *tree, TMemo *mem);
	//удаление
	void deleteTree(node *tree);
	 //Глубина узла равна числу его предков+1
	int getDeep(node *tree);
	 //Удалить узел
	void deleteNode(node **tree, int data);
	/*Сбалансированное дерево - то, в котором количество узлов справа и слева
	отличаются не более, чем на единицу*/
	void balance(node **tree);
	//Найти узел
	void findNode(node *tree, TEdit *edit);

private:
	int max(int a, int b);

};


#endif
