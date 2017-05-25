/*
 * Package.cpp
 *
 *  Created on: 2.05.2017 ã.
 *      Author: Borqna
 */

#include "Package.h"
#include "Clients.h"
#include<iostream>
using namespace std;

Package::Package(double weight,double cost,Clients& send,Clients& receiv):senderObject(send),receieverObject(receiv){
    this->weight=weight;
    this->cost=cost;
}
Package::Package(){
	this->weight=0;
	this->cost=0;
}

void Package::setWeight(double weight){
	  if(weight < 0){
	         cout << "Please insert a POSITIVE weight, the current weight will be imposted to 0" << endl;
	         this->weight = 0;
	   } else{
	     this->weight = weight;
	    }
	  }


void Package::setCost(double cost){
	 if(cost < 0){
	        cout << "Please insert a POSITIVE cost, the current cost will be imposted to 0" << endl;

	        this->cost = 0;
	 } else{
	        this->cost = cost;
	    }
	}

void Package::setSender(Clients& send){
	this->senderObject=send;
}
void Package::setReceiever(Clients& receiv){
	this->receieverObject=receiv;
}
double Package::getWeight(){
	return this->weight;
}
double Package::getCost(){
	return this->cost;
}
Clients& Package::getsenderObject(){
	return this->senderObject;
}
Clients& Package::getreceiverObject(){
	return this->receieverObject;
}
double Package::calculateCost(){
    return getWeight() * getCost();
}
void Package::print(){

    cout << "Weight -> " << getWeight() << endl;

    cout << "Cost per kg -> " << getCost() << endl;

    cout << "Sender:" << endl;

    senderObject.print();

    cout << "Receiever:" << endl;

    receieverObject.print();

    cout << "Total Cost -> " << calculateCost() << " LV." << endl;
}











Package::~Package() {

}

