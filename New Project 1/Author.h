/*
 * Author.h
 *
 *  Created on: 18.05.2017 ã.
 *      Author: Borqna
 */

#ifndef AUTHOR_H_
#define AUTHOR_H_
#include<string>
#include<iostream>
using namespace std;

class Author {
public:
	Author(string,string,string);
	Author();

	virtual void print();
	void setFirstName(string);
	void setFamilyName(string);
	void setNationality(string);

	string getFirstName();
	string getFamilyName();
	string getNationality();



	virtual ~Author();
private:

	string firstName;
	string familyName;
	string nationality;

};

#endif
