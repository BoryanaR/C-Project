/*
 * Address.h
 *
 *  Created on: 2.05.2017 ã.
 *      Author: Borqna
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include<iostream>
#include<string>
using namespace std;

class Address {
public:
	Address(string,string,string,int);
	Address();

	void print();
	void setStreet(string);
	void setCity(string);
	void setCountry(string);
	void setZipCode(int);

	string getStreet();
	string getCity();
	string getCountry();
	int getZipCode();



	virtual ~Address();

private:
	string street;
	string city;
	string country;
	int zipCode;
};

#endif /* ADDRESS_H_ */
