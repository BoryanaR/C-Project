/*
 * Address.cpp
 *
 *  Created on: 2.05.2017 ã.
 *      Author: Borqna
 */

#include "Address.h"
#include<iostream>
#include<string>
using namespace std;

Address::Address(string street,string city,string country,int zipCode) {
	this->street=street;
	this->city=city;
	this->country=country;
	this->zipCode=zipCode;
}
Address::Address(){
	this->street="N/V ";
	this->city="N/V";
	this->country="N/V";
	this->zipCode=0;
}

void Address::setStreet(string street){
	this->street=street;
}
void Address::setCity(string sity){
	this->city=city;
}
void Address::setCountry(string country){
	this->country=country;
}
void Address::setZipCode(int zipCode){
	this->zipCode=zipCode;
}
string Address::getStreet(){
	return this->street;
}
string Address::getCity(){
	return this->city;
}
string Address::getCountry(){
	return this->country;
}
int Address::getZipCode(){
	return this->zipCode;
}

void Address::print(){
	cout<<getStreet()<<" "<<getCity()<<" "<<getCountry()<<" "<<getZipCode()<<endl;
}

Address::~Address() {

}

