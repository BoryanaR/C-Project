/*
 * TreeWorker.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#ifndef TREEWORKER_H_
#define TREEWORKER_H_

#include "Worker.h"

class TreeWorker: public Worker {
public:
	TreeWorker(string name,string egn,string address,int bonus,int salaryPerTree);
	TreeWorker();
	virtual ~TreeWorker();
	int getBonus() const;
	void setBonus(int bonus);
	int getSalaryPerTree() const;
	void setSalaryPerTree(int salaryPerTree);
	virtual void print();
	virtual double calculate();

private:
	int bonus;
	int salaryPerTree;

};

#endif /* TREEWORKER_H_ */
