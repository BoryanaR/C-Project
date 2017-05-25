/*
 * FirmForEducation.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#include "FirmForEducation.h"
#include<iostream>
using namespace std;

FirmForEducation::FirmForEducation() {
	this->name="N/A";
	this->number=0;
	this->duration=0;
	this->basePrice=0;
}

FirmForEducation::FirmForEducation(string name, int number, int duration,double basePrice) {
	this->name=name;
	this->number=number;
	this->duration=duration;
	this->basePrice=basePrice;
}

FirmForEducation::~FirmForEducation() {

}

double FirmForEducation::getBasePrice() const {
	return this->basePrice;
}

void FirmForEducation::setBasePrice(double basePrice) {
	this->basePrice=basePrice;
}

int FirmForEducation::getDuration() const {
	return this->duration;
}

void FirmForEducation::setDuration(int duration) {
	this->duration=duration;
}

const string& FirmForEducation::getName() const {
	return this->name;
}

void FirmForEducation::setName(const string& name) {
	this->name=name;
}

int FirmForEducation::getNumber() const {
	return this->number;
}

void FirmForEducation::setNumber(int number) {
	this->number=number;
}

void FirmForEducation::courseInfo() {

	cout << "Name of course : " << getName() << " Duration : " << getDuration() << endl;

}

double FirmForEducation::calculatePrice() {
	return 0;
}
