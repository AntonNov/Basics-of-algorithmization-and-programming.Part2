//---------------------------------------------------------------------------

#pragma hdrstop

#include "Candidate.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Candidate::Candidate() {}

Candidate::~Candidate() {}

void Candidate::setId(int id) {
	if (id < 0) {
		throw 1;
	}
	this->id = id;
}

int Candidate::getId() {
	return id;
}

void Candidate::setAge(int age) {
	if (age < 0) {
		throw 1;
	}
	this->age = age;
}

int Candidate::getAge() {
	return age;
}

void Candidate::setWeight(int weight) {
	if (weight < 0) {
		throw 1;
	}
	this->weight = weight;
}

int Candidate::getWeight() {
	return weight;
}

void Candidate::setHeight(int height) {
	if (height < 0) {
		throw 1;
	}
	this->height = height;
}

int Candidate::getHeight() {
	return height;
}

void Candidate::setName(String name) {
	this->name = name;
}

String Candidate::getName() {
	return name;
}

void Candidate::setSex(String sex) {
	if (sex == "M" || sex == "F") {
		this->sex = sex;
	} else {
		throw 1;
	}

}

String Candidate::getSex() {
	return sex;
}

void Candidate::setHabbit(String habbit) {
	this->habbit = habbit;
}

String Candidate::getHabbit() {
	return habbit;
}

void Candidate::setHobby(String hobby) {
	this->hobby = hobby;
}

String Candidate::getHobby() {
	return hobby;
}

void Candidate::setIsFree(int isFree) {

	this->isFree = isFree;

}

int Candidate::getIsFree() {
	return isFree;
}

void Candidate::setMaxAge(int maxAge) {
	if (maxAge < 0) {
		throw 1;
	}
	this->maxAge = maxAge;
}

int Candidate::getMaxAge() {
	return maxAge;
}

void Candidate::setMinAge(int minAge) {
	if (minAge < 0) {
		throw 1;
	}
	this->minAge = minAge;
}

int Candidate::getMinAge() {
	return minAge;
}

void Candidate::setMaxHeight(int maxHeight) {
	if (maxHeight < 0) {
		throw 1;
	}
	this->maxHeight = maxHeight;
}

int Candidate::getMaxHeight() {
	return maxHeight;
}

void Candidate::setMinHeight(int minHeight) {
	if (minHeight < 0) {
		throw 1;
	}
	this->minHeight = minHeight;
}

int Candidate::getMinHeight() {
	return minHeight;
}

void Candidate::setMaxWeight(int maxWeight) {
	if (maxWeight < 0) {
		throw 1;
	}
	this->maxWeight = maxWeight;
}

int Candidate::getMaxWeight() {
	return maxWeight;
}

void Candidate::setMinWeight(int minWeight) {
	if (minWeight < 0) {
		throw 1;
	}
	this->minWeight = minWeight;
}

int Candidate::getMinWeight() {
	return minWeight;
}
