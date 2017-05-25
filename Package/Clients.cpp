/*
 * Clients.cpp
 *
 *  Created on: 2.05.2017 ã.
 *      Author: Borqna
 */

#include "Clients.h"
#include "Address.h"
#include<iostream>
#include<string>
using namespace std;

Clients::Clients(string name,Address& addr):add(addr) {
	this->name=name;
}
Clients::Clients(){
	this->name="N/V";
}

void Clients::setName(string name){
	this->name=name;
}
void Clients::setAddress(Address&addr){
	this->add=addr;
}
string Clients::getName(){
	return this->name;
}
Address& Clients::getAdd(){
	return this->add;
}
void Clients::print(){
	cout<<getName()<<endl;
	add.print();
}






Clients::~Clients() {

}

