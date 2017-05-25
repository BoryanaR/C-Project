/*
 * Worker.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#include "Worker.h"
#include<string>
#include<iostream>
using namespace std;

Worker::Worker() {
	// TODO Auto-generated constructor stub
	setName("");
	setAddress("");
	setEgn("");

}


const string& Worker::getAddress() const {
	return address;
}

void Worker::setAddress(const string& address) {
	this->address = address;
}

const string& Worker::getEgn() const {
	return egn;
}

void Worker::setEgn(const string& egn) {
	this->egn = egn;
}

const string& Worker::getName() const {
	return name;
}

Worker::Worker(string name, string egn, string address) {
	setName(name);
	setEgn(egn);
	setAddress(address);
}

//double Worker::calculate() {
//	return 0;
//}

void Worker::print() {
	cout<<getName()<<" "<<getEgn()<<" "<<getAddress()<<endl;
}

void Worker::setName(const string& name) {
	this->name = name;
}
