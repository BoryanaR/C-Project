/*
 * Operations.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include<vector>
#include "Worker.h"
#include<iostream>
using namespace std;

class Operations {
public:
	Operations();


	void addWorker(Worker&);
	void printAllSal();


	virtual ~Operations();

private:

	vector<Worker*>workers;



};

#endif /* OPERATIONS_H_ */
