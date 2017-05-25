/*
 * Filtars.h
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#ifndef FILTARS_H_
#define FILTARS_H_
#include "Athletes.h"
#include "Disciplines1.h"
#include "Starts.h"
#include<iostream>
#include<vector>
using namespace std;

class Filtars {
public:
	Filtars();
	virtual ~Filtars();


	void addAthletes(Athletes&);
	void addDisciplines1(Disciplines1&);
	void addStarts(Starts&);

	void searchByNameAthletes(string);
	void searchByNameDisciplines(string);

	const vector<Athletes>& getAtlvec() const;
	void setAtlvec(const vector<Athletes>& atlvec);

	const vector<Disciplines1>& getDisvec() const;
	void setDisvec(const vector<Disciplines1>& disvec);

	const vector<Starts>& getStvec() const;
	void setStvec(const vector<Starts>& stvec);

private:

	vector<Athletes> atlvec;
	vector<Disciplines1> disvec;
	vector<Starts> stvec;

};

#endif
