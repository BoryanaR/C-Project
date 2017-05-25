/*
 * TwoDayPackage.cpp
 *
 *  Created on: 4.05.2017 ã.
 *      Author: Borqna
 */

#include "TwoDayPackage.h"
#include<iostream>
using namespace std;

TwoDayPackage::TwoDayPackage(double weight,double cost,Clients& senderObject,Clients&  receieverObject,double twoDay):
	Package(weight,cost,senderObject,receieverObject){

	 if(twoDay > 0){
	        setTwoDay(twoDay);
	    }
	    else
	    {
	        cout << "Please insert a POSITIVE value for TwoDay, current value = 0" << endl;
	        setTwoDay(0);
	    }
	}

TwoDayPackage::TwoDayPackage():Package() {
	this->twoDay=0;
}
void TwoDayPackage::setTwoDay(double twoDay){
	this->twoDay=twoDay;
}
double TwoDayPackage::getTwoDay()	{
	return this->twoDay;
}
double TwoDayPackage::calculateCost(){
  return Package::calculateCost() + getTwoDay();
}
void TwoDayPackage::print(){

    cout << "Weight -> " << getWeight() << endl;
    cout << "Cost per KG -> " << getCost() << endl;
    cout << "Sender:" << endl;
    getsenderObject().print();
    cout << "Receiever:" << endl;
    getreceiverObject().print();
    cout << "Total Cost -> " << calculateCost() << " LV." << endl;

}
TwoDayPackage::~TwoDayPackage() {

}

