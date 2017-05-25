/*
 * Door.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#include "Door.h"
#include <iostream>
#include <iomanip>
using namespace std;



 istream& operator>>(istream &input, Door &door){

	 input.ignore(2);
	 input>>setw(3)>>door.lenght;
     input.ignore(1);
     input>>setw(3)>>door.height;
     input.ignore(1);
     input>>setw(3)>>door.width;
     input.ignore(1);
     input>>setw(3)>>door.color;

     return input;

}

ostream& operator<<(ostream &output,const Door &door){
	output<< "door=>" <<door.getLenght()<< " x " << door.getHeight()
			<< " x " << door.getWidth() << ":" << door.getColor();

	return output;
}


Door::Door() {
	this->lenght = 0.0;
	this->height = 0.0;
	this->width = 0.0;

	this->color = " ";

}

Door::~Door() {
}

const string& Door::getColor() const {
	return color;
}

void Door::setColor(const string& color) {
	this->color = color;
}

double Door::getHeight() const {
	return height;
}

void Door::setHeight(double height) {
	if(height > 1 && height < 2.5){
		this->height = height;
	}else{
		cout << "Invalid height !!!" << endl;
	}
}

double Door::getLenght() const {
	return lenght;
}

void Door::setLenght(double lenght) {
	if(lenght > 0.6 && lenght < 1.5){
		this->lenght = lenght;
	}else{
		cout << "Invalid lenght !!!" << endl;
	}
}

double Door::getWidth() const {
	return width;
}

Door::Door(double lenght, double height, double width, string color) {
	setLenght(lenght);
	setHeight(height);
	setWidth(width);
	setColor(color);
}

void Door::setWidth(double width) {
	this->width = width;
}

Door& Door::operator +(Door& right) {

	double newLenght = this->lenght + right.lenght;
	double newHeight = this->height + right.height;
	double newWidth = this->width + right.width;

	Door *dPtr = new Door(newLenght, newHeight, newWidth,"blank");

	return *dPtr;

}
bool Door::operator ==(Door& right) {
	if(this->lenght == right.lenght && this->height == right.height
			&& this->width == right.width){
		return true;
	}else{

		return false;
	}

}

bool Door::operator <(Door& right) {
	if(this->lenght < right.lenght || this->height < right.height

		|| this->width < right.width){
	return true;
}else
{
	return false;
}
}

bool Door::operator >(Door& right) {
	if(this->lenght > right.lenght || this->height > right.height

		|| this->width > right.width){
	return true;
}else
{
	return false;
}
}
