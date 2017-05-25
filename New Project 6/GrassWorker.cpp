/*
 * GrassWorker.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#include "GrassWorker.h"
#include "Worker.h"
#include<iostream>
using namespace std;

GrassWorker::GrassWorker():Worker() {
	setArea(0);
	setStavka(0);

}

GrassWorker::~GrassWorker() {

}

int GrassWorker::getArea() const {
	return area;
}

void GrassWorker::setArea(int area) {
	this->area = area;
}

int GrassWorker::getStavka() const {
	return stavka;
}

GrassWorker::GrassWorker(string name, string egn, string address, int area,
		int stavka):Worker(name,egn,address) {
	setArea(area);
	setStavka(stavka);
}

void GrassWorker::print() {
	Worker::print();
	cout<<getArea()<<" "<<getStavka()<<endl;
}

double GrassWorker::calculate() {
	return getArea() * getStavka();
}

void GrassWorker::setStavka(int stavka) {
	this->stavka = stavka;
}
