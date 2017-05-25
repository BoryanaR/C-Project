/*
 * Author.cpp
 *
 *  Created on: 18.05.2017 ã.
 *      Author: Borqna
 */

#include "Author.h"
#include<iostream>
using namespace std;

Author::Author(string firtsName,string familyName,string nationality) {
    this->firstName=firtsName;
    this->familyName=familyName;
    this->nationality=nationality;
}
Author::Author(){
	this->firstName="N/A";
	this->familyName="N/A";
	this->nationality="N/A";
}
void Author::setFirstName(string firstName){
	this->firstName=firstName;
}
void Author::setFamilyName(string familyName){
	this->nationality=nationality;
}
string Author::getFirstName(){
	return this->firstName;
}
string Author::getFamilyName(){
	return this->familyName;
}
string Author::getNationality(){
	return this->nationality;
}
void Author::print(){
	cout<<getFirstName()<<" "<<getFamilyName()<<" "<<getNationality()<<endl;
}


Author::~Author() {

}

