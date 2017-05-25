/*
 * Starts.cpp
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#include "Starts.h"
#include<iostream>
using namespace std;

Starts::Starts(int date,int hour,string tipe,Disciplines1& dsc,Athletes& atl)
:disciplinesObject(dsc),athletesObject(atl) {
    this->date=date;
    this->hour=hour;
    this->tipe=tipe;
}
Starts::Starts(){
	this->date=0;
	this->hour=0;
	this->tipe="N/V";
}
void Starts::setDate(int date){
	this->date=date;
}
void Starts::setHour(int hour){
	this->hour=hour;
}
void Starts::setTipe(string tipe){
	this->tipe=tipe;
}
void Starts::setDisciplines1(Disciplines1& dsc){
	this->disciplinesObject=dsc;
}
void Starts::setAthletes(Athletes& atl){
	this->athletesObject=atl;
}
int Starts::getDate(){
	return this->date;
}
int Starts::getHour(){
	return this->hour;
}
string Starts::getTipe(){
	return this->tipe;
}
Disciplines1& Starts::getDisciplinesObject(){
	return this->disciplinesObject;
}
Athletes& Starts::getAthletesObject(){
	return this->athletesObject;
}
void Starts::print(){
	cout<<getDate()<<" "<<getHour()<<" "<<getTipe()<<endl;
	disciplinesObject.print();
	athletesObject.print();
}








Starts::~Starts() {

}

