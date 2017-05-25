/*
 * Office.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#ifndef OFFICE_H_
#define OFFICE_H_
#include<string>
#include<iostream>
using namespace std;
#include "FirmForEducation.h"

class Office: public FirmForEducation {
public:
	Office();
	Office(string name, int number, int duration, double basePrice, string type,
			string address, int hallNumber);
	virtual ~Office();
	const string& getAddress() const;
	void setAddress(const string& address);
	int getHallNumber() const;
	void setHallNumber(int hallNumber);
	const string& getType() const;
	void setType(const string& type);

	virtual void courseInfo();
	double calculatePrice();

	int typeQueficient();

private:

	string type;
	string address;
	int hallNumber;

};

#endif
