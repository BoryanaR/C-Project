/*
 * Cost.cpp
 *
 *  Created on: 4.05.2017 ã.
 *      Author: Borqna
 */

#include "Cost.h"
#include "Address.h"
#include<iostream>
#include<vector>
using namespace std;

Cost::Cost(Package& packageObject,TwoDayPackage& twoDayObject,OvernightPackage& overNightObject):
		packageObject(packageObject),twoDayObject(twoDayObject),overNightObject(overNightObject) {
     this->packageObject=packageObject;
     this->twoDayObject=twoDayObject;
     this->overNightObject=overNightObject;

     packageVector.push_back(packageObject);
     twoDayVector.push_back(twoDayObject);
     overNightVector.push_back(overNightObject);
}
void Cost::setPackage(Package& packageObject){
	this->packageObject=packageObject;
}
void Cost::setTwoDayPackage(TwoDayPackage& twodayObject){
	this->twoDayObject=twodayObject;
}
void Cost::setOvernightPackage(OvernightPackage&  overNightObject){
	this->overNightObject=overNightObject;
}
Package& Cost::getPackageObject(){
	return this->packageObject;
}
TwoDayPackage& Cost::getTwoDayObject(){
	return this->twoDayObject;
}
OvernightPackage& Cost::getovernightObject(){
	return this->overNightObject;
}
void Cost::calculateTotalCostPackage(){
    double totalCost = 0;

    for(unsigned int i = 0; i < packageVector.size(); i++){
        totalCost = totalCost + packageVector[i].calculateCost();
    }
      cout << "Total Cost Package -> " << totalCost << " LV." << endl;
}

void Cost::calculateTotalCostTwoDay(){
    double totalCost = 0;

    for(unsigned int i = 0; i < twoDayVector.size(); i++){
        totalCost = totalCost + twoDayVector[i].calculateCost();
    }
      cout << "Total Cost TwoDay -> " << totalCost << " LV." << endl;
}

void Cost::calculateTotalCostOverNigt(){
    double totalCost = 0;

    for(unsigned int i = 0; i < overNightVector.size(); i++){
        totalCost = totalCost + overNightVector[i].calculateCost();
    }
    cout << "Total Cost OverNight -> " << totalCost << " LV." << endl;
}

void Cost::filterPerCostPackage(double cost){
      for(unsigned int i = 0; i < packageVector.size(); i++){

        if(packageVector[i].calculateCost() == cost){

            packageVector[i].print();
            cout << endl;
   }else{
            if(i + 1 == packageVector.size()){
                cout << "NO objects with " << cost << " of cost" << endl;
            }
        }
    }
}

void Cost::filterPerCostTwoDay(double cost){
    for(unsigned int i = 0; i < twoDayVector.size(); i++){

        if(twoDayVector[i].getCost() == cost){

            twoDayVector[i].print();
             cout << endl;

   }else{
          if(i + 1 == twoDayVector.size()){
                cout << "NO objects with " << cost << " of cost" << endl;
            }
        }
    }
}


void Cost::filterPerCostOverNight(double cost){
    for(unsigned int i = 0; i < overNightVector.size(); i++){

        if(overNightVector[i].getCost() == cost){

            overNightVector[i].print();
             cout << endl;
    }else{
            if(i + 1 == overNightVector.size()){
                cout << "NO objects with " << cost << " of cost" << endl;
            }
        }
    }
}
void Cost::filterPerCountryPackage(string country){
    for(unsigned int i = 0; i < packageVector.size(); i++){

  if(packageVector[i].getsenderObject().getName() == country || packageVector[i].getreceiverObject().getName() == country){

            packageVector[i].print();

            cout << endl;

    }else{
            if(i + 1 == packageVector.size()){

                cout << "NO Objects with " << country << " of country" << endl;
            }
        }
    }
}

void Cost::filterPerCountryTwoDay(string country){
    for(unsigned int i = 0; i < twoDayVector.size(); i++){

    	if(twoDayVector[i].getsenderObject().getName() == country || twoDayVector[i].getreceiverObject().getName()== country)
        {
            twoDayVector[i].print();
             cout << endl;

    } else{
            if(i + 1 == twoDayVector.size()){
                cout << "NO objects with " << country << " of country" << endl;
            }
        }
    }
}

void Cost::filterPerCountryOverNight(string country){
    for(unsigned int i = 0; i < overNightVector.size(); i++){

        if(overNightVector[i].getsenderObject().getName() == country || overNightVector[i].getreceiverObject().getName() == country)
        {
            overNightVector[i].print();

            cout << endl;

    } else{
            if(i + 1 == overNightVector.size()){
                cout << "NO objects with " << country << " of country" << endl;
            }
        }
    }
}












Cost::~Cost() {

}

