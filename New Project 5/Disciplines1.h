/*
 * Disciplines1.h
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#ifndef DISCIPLINES1_H_
#define DISCIPLINES1_H_
#include<iostream>
#include<string>
using namespace std;

class Disciplines1 {
public:
	Disciplines1(string,double,double);
	Disciplines1();


	void print();
	void setName(string);
	void setWorldRecord(double);
	void setRecordOftheRace(double);

	string getName();
	double getWorldRecord();
	double getRecordOftheRace();

	virtual ~Disciplines1();
private:

	string name;
	double worldRecord;
	double recordOftheRace;



};

#endif
