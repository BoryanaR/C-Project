/*
 * Athletes.cpp
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#include "Athletes.h"
#include<string>
#include<iostream>
using namespace std;

Athletes::Athletes(string firstName,string familyName,double bestAchievement,string nationality) {
	this->firstName=firstName;
	this->familyName=familyName;
	this->bestAchievement=bestAchievement;
	this->nationality=nationality;
}
Athletes::Athletes(){
	this->firstName="N/V ";
	this->familyName="N/V ";
	this->bestAchievement=0;
	this->nationality="N/V";
}

void Athletes::setFirstName(string firstName){
	this->firstName=firstName;
}
void Athletes::setFamilyName(string familyName){
	this->familyName=familyName;
}
void Athletes::setbestAchievement(double bestAchievement){
	this->bestAchievement=bestAchievement;
}
void Athletes::setNationality(string nationality){
	this->nationality=nationality;
}
string Athletes::getFirstName(){
	return this->firstName;
}
string Athletes::getFamilyName(){
	return this->familyName;
}
double Athletes::getBestAchievement(){
	return this->bestAchievement;
}
string Athletes::getNationality(){
	return this->nationality;
}
void Athletes::print(){
	cout<<getFirstName()<<" "<<getFamilyName()<<" "<<getBestAchievement()<<" "<<getNationality()<<endl;
}




Athletes::~Athletes() {

}

