/*
 * Operations.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include "FirmForEducation.h"
#include "Online.h"
#include<vector>
#include<iostream>
using namespace std;

class Operations {

public:
	Operations();
	virtual ~Operations();

	void addCourse(FirmForEducation &course);
    void printCourseInfo();
    void printCoursePrice();

private:

	vector<FirmForEducation*> courses;

};

#endif
