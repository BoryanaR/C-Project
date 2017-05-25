/*
 * Filtres.cpp
 *
 *  Created on: 18.05.2017 ã.
 *      Author: Borqna
 */

#include "Filtres.h"
#include "Book.h"
#include<iostream>
using namespace std;

Filtres::Filtres(){

}
Filtres::~Filtres(){

}
void Filtres::addBook(Book& object) {

	for (unsigned int i = 0; i < myVector.size(); i++) {
		if (myVector[i].getIsbn() == object.getIsbn()) {
			return;
		} else {
			myVector.push_back(object);
		}
	}
	myVector.push_back(object);
}
void Filtres::searchByNameBook(string book) {
	for (unsigned int i = 0; i < myVector.size(); i++) {
		if (book == myVector[i].getName()) {
			myVector[i].print();
		}
	}
}

void Filtres::searchByGenre() {
	int childrens = 0;
	int classic = 0;
	int fantastic = 0;
	int biographical = 0;
	int love = 0;

	for (unsigned int i = 0; i < myVector.size(); i++) {
		if (myVector[i].getGenre() == "love") {
			love++;
		}
		if (myVector[i].getGenre() == "childrens") {
			childrens++;
		}
		if (myVector[i].getGenre() == "classic") {
			classic++;
		}
		if (myVector[i].getGenre() == "fantastic") {
			fantastic++;
		}
		if (myVector[i].getGenre() == "biographical") {
			biographical++;
		}
	}
	cout << "love-> " << love << "classic-> " << classic << "fantastic->"
			<< fantastic << "childrens->" << childrens << "biographical->"
			<< biographical << endl;

}

