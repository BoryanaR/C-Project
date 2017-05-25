/*
 * Online.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#include "Online.h"

Online::Online():FirmForEducation() {
	this->level="N/A";
	this->type="N/A";
	this->hour="N/A";

}

Online::~Online() {

}

const string& Online::getHour() const {
	return hour;
}

void Online::setHour(const string& hour) {
	this->hour = hour;
}

const string& Online::getLevel() const {
	return level;
}

void Online::setLevel(const string& level) {
	this->level = level;
}

const string& Online::getType() const {
	return type;
}

Online::Online(string name, int number, int duration, double basePrice,
		string level, string type, string hour):FirmForEducation(name, number, duration, basePrice) {
	this->level=level;
	this->type=type;
	this->hour=hour;
}

void Online::setType(const string& type) {
	this->type = type;
}

void Online::courseInfo() {
	FirmForEducation::courseInfo();
	cout <<"Type of course " << getType() << endl;
}

int Online::levelQuefficient() {
	int quefficient = 0;
	if(getLevel() == "Begginer"){
		quefficient = 5;
	}
	if(getLevel() == "Advanced"){
		quefficient = 10;
	}
	if(getLevel() == "Expert"){
		quefficient =15;
	}
	return quefficient;
}

double Online::calculatePrice() {

	return FirmForEducation::getBasePrice() * levelQuefficient() * typeQuefficient();

}

int Online::typeQuefficient() {
	int typeQefficient = 0;
	if(getType() == "Individual"){
		typeQefficient = 6;
	}
	if(getType() == "Small-group"){
		typeQefficient = 4;
	}
	if(getType() == "Big-group"){
		typeQefficient = 2;
	}
	return typeQefficient;
}

