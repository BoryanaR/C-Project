/*
 * Filtres.h
 *
 *  Created on: 18.05.2017 ã.
 *      Author: Borqna
 */

#ifndef FILTRES_H_
#define FILTRES_H_
#include "Book.h"
#include<vector>
#include<iostream>
using namespace std;

class Filtres {
public:
	Filtres();


	void addBook(Book& object);

	void searchByNameBook(string);
	void searchByGenre();


	virtual ~Filtres();

private:

	vector<Book>myVector;

};

#endif
