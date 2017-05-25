/*
 * Disciplines1.cpp
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#include "Disciplines1.h"
#include<iostream>
#include<string>
using namespace std;

Disciplines1::Disciplines1(string name,double worldRecord,double recordOftheRace){
    this->name=name;
    this->worldRecord=worldRecord;
    this->recordOftheRace=recordOftheRace;
}

Disciplines1::Disciplines1(){
	this->name="N/V";
	this->worldRecord=0;
	this->recordOftheRace=0;
}
void Disciplines1::setName(string name){
	this->name=name;
}
void Disciplines1::setWorldRecord(double worldRecord){
	this->worldRecord=worldRecord;
}
void Disciplines1::setRecordOftheRace(double recordoftheRace){
	this->recordOftheRace=recordoftheRace;
}
string Disciplines1::getName(){
	return this->name;
}
double Disciplines1::getWorldRecord(){
	return this->worldRecord;
}
double Disciplines1::getRecordOftheRace(){
	return this->recordOftheRace;
}
void Disciplines1::print(){
	cout<<getName()<<" "<<getWorldRecord()<<" "<<getRecordOftheRace()<<endl;
}




Disciplines1::~Disciplines1() {

}













