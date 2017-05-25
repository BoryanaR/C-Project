/*
 * Book.h
 *
 *  Created on: 18.05.2017 ã.
 *      Author: Borqna
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "Author.h"
#include<string>
#include<iostream>
using namespace std;

class Book {
public:
	Book(string,string,int,int,Author&);
	Book();

	virtual void print();
	void setName(string);
	void setGenre(string);
	void setYearIssue(int);
	void setIsbn(int);
	void setAuthor(Author&);

	string getName();
	string getGenre();
	int getYearIssue();
	int getIsbn();
	Author& getauthorObject();


	virtual ~Book();

private:

	string name;
	string genre;
	int yearIssue;
	int isbn;
	Author authoObject;



};

#endif
