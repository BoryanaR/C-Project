/*
 * Operations.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#include "Operations.h"
#include "GrassWorker.h"
#include<iostream>
using namespace std;

Operations::Operations() {


}

void Operations::addWorker(Worker& obj) {
	workers.push_back(&obj);
}

void Operations::printAllSal() {
	for(unsigned int i=0; i<workers.size(); i++){
		workers[i]->print();

		if(GrassWorker* ptr=dynamic_cast<GrassWorker*>(workers[i])){
			cout<<ptr->getArea();
			cout<<ptr->calculate();

		}
	}
}

Operations::~Operations() {

}

