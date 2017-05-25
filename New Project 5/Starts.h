/*
 * Starts.h
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#ifndef STARTS_H_
#define STARTS_H_
#include "Athletes.h"
#include "Disciplines1.h"
#include<string>
#include<iostream>
using namespace std;


class Starts {
public:
	Starts(int,int,string,Disciplines1&,Athletes&);
	Starts();

	void print();
	void setDate(int);
	void setHour(int);
	void setTipe(string);
	void setDisciplines1(Disciplines1&);
	void setAthletes(Athletes&);

	int getDate();
	int getHour();
	string getTipe();
	Disciplines1& getDisciplinesObject();
	Athletes& getAthletesObject();


	virtual ~Starts();

private:

	int date;
	int hour;
	string tipe;
	Disciplines1 disciplinesObject;
	Athletes athletesObject;
};

#endif
