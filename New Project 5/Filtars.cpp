/*
 * Filtars.cpp
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#include "Filtars.h"

Filtars::Filtars() {

}
Filtars::~Filtars() {

}


const vector<Athletes>& Filtars::getAtlvec() const {
	return atlvec;
}

void Filtars::setAtlvec(const vector<Athletes>& atlvec) {
	this->atlvec = atlvec;
}

const vector<Disciplines1>& Filtars::getDisvec() const {
	return disvec;
}

void Filtars::setDisvec(const vector<Disciplines1>& disvec) {
	this->disvec = disvec;
}

const vector<Starts>& Filtars::getStvec() const {
	return stvec;
}

void Filtars::addAthletes(Athletes& atlet) {
	atlvec.push_back(atlet);
}

void Filtars::addDisciplines1(Disciplines1& disciplina){
	disvec.push_back(disciplina);
}

void Filtars::addStarts(Starts& start) {
	stvec.push_back(start);
}

void Filtars::searchByNameAthletes(string nameAtlet) {
	for(unsigned int i=0; i<stvec.size(); i++){
		if(stvec[i].getAthletesObject().getFamilyName()==nameAtlet){
			stvec[i].print();
		}
	}
}

void Filtars::searchByNameDisciplines(string nameDisciplina) {
	for(unsigned int i=0; i<stvec.size(); i++){
		if(stvec[i].getDisciplinesObject().getName()==nameDisciplina){
			stvec[i].print();
		}
	}

}

void Filtars::setStvec(const vector<Starts>& stvec) {
	this->stvec = stvec;
}


