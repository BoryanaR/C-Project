/*
 * Office.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#include "Office.h"
#include<iostream>
using namespace std;

Office::Office():FirmForEducation() {
	this->type="N/A";
	this->address="N/A";
	this->hallNumber=0;
}

Office::~Office() {

}

const string& Office::getAddress() const {
	return address;
}

void Office::setAddress(const string& address) {
	this->address = address;
}

int Office::getHallNumber() const {
	return hallNumber;
}

void Office::setHallNumber(int hallNumber) {
	this->hallNumber = hallNumber;
}

const string& Office::getType() const {
	return type;
}

Office::Office(string name, int number, int duration, double basePrice,
		string type, string address, int hallNumber):FirmForEducation(name, number, duration, basePrice) {
	this->type=type;
	this->address=address;
	this->hallNumber=hallNumber;
}

void Office::setType(const string& type) {
	this->type = type;
}

void Office::courseInfo() {
	FirmForEducation::courseInfo();
cout << "Type of course : " << getType() << " Course address : " << getAddress() << " Number of hall : " << getHallNumber() << endl;

}

double Office::calculatePrice() {
	return FirmForEducation::getBasePrice() * typeQueficient();

}

int Office::typeQueficient() {
	int quefficient = 0;
	if(getType() == "Dayly"){
		quefficient = 3;
	}
	if(getType() == "Evening"){
		quefficient = 8;
	}
	if(getType() == "Saturday/Sunday"){
		quefficient = 12;
	}
	return quefficient;
}
