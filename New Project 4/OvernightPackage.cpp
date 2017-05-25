/*
 * OvernightPackage.cpp
 *
 *  Created on: 4.05.2017 ã.
 *      Author: Borqna
 */

#include "OvernightPackage.h"
#include<iostream>
using namespace std;

OvernightPackage::OvernightPackage(double weight,double cost,Clients& senderObject,Clients& receieverObject,double costPerWeight):
	Package(weight,cost, senderObject,receieverObject){
	 if(costPerWeight > 0){
	        this->costPerWeight = costPerWeight;

}else{
	        cout << "Please insert POSITIVE value for CostPerWeight, current value = 0" << endl;
	        this->costPerWeight = 0;
	    }
	}

OvernightPackage::OvernightPackage():Package(){
     this->costPerWeight = 0;
}
void OvernightPackage::setCostPerWeight(double costPerWeight){
	this->costPerWeight=costPerWeight;
}
double OvernightPackage::getCostPerWeight(){
	return this->costPerWeight;
}
double OvernightPackage::calculateCost(){
   return (getCostPerWeight() + getCost()) * getWeight();
}
void OvernightPackage::print(){

    cout << "Weight -> " << getWeight() << endl;
    cout << "Cost per KG -> " << getCostPerWeight() + getCost() << endl;
    cout << "Sender:" << endl;
    getsenderObject().print();
    cout << "Receiever:" << endl;
    getreceiverObject().print();
    cout << "Total Cost -> " << calculateCost() << " LV." << endl;


}

OvernightPackage::~OvernightPackage() {

}

