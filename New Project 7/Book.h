/*
 * Book.h
 *
 *  Created on: 25.05.2017 ã.
 *      Author: Borqna
 */

#ifndef BOOK_H_
#define BOOK_H_
#include<string>
using namespace std;

class Book {
public:
	Book(string,string,int,double);
	Book();
	virtual ~Book();

	void print();
	const string& getAuthor() const;
	void setAuthor(const string& author);
	double getPrice() const;
	void setPrice(double price);
	const string& getTitle() const;
	void setTitle(const string& title);
	int getYear() const;
	void setYear(int year);

private:
	string title;
	string author;
	int year;
	double price;
};

#endif /* BOOK_H_ */
