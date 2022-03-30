//---------------------------------------------------------------------------

#pragma hdrstop

#include "Map.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Map::Map(int t) : n(t) {
	if (n < 0) {
		throw "InvalidSizeExepion";
	}
	arr = new Stack *[n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new Stack;
	}
}

Map::~Map() {
	for (int i = 0; i < n; ++i) {
		delete arr[i];
	}
	delete arr;
}
//по ключу определяем место
void Map::add(int t) {
	arr[t % n]->add(t);
}

void Map::print(TMemo *mem) {
	for (int i = 0; i < n; ++i) {

		mem->Lines->Add(IntToStr(i) + ": " + arr[i]->print());

	}
}
//по ключу определяем место и удаляем
void Map::deleteNode(int t) {
	arr[t % n]->deleteNode(t);
}
//по ключу определяем место и находим
bool Map::findNode(int t) {
	return arr[t % n]->findNode(t);
}