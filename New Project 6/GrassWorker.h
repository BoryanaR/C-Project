/*
 * GrassWorker.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#ifndef GRASSWORKER_H_
#define GRASSWORKER_H_

#include "Worker.h"

class GrassWorker: public Worker {
public:
	GrassWorker(string name,string egn,string address,int area,int stavka);
	GrassWorker();

	virtual void print();
	virtual double calculate();
	virtual ~GrassWorker();
	int getArea() const;
	void setArea(int area);
	int getStavka() const;
	void setStavka(int stavka);

private:

	int area;
	int stavka;
};

#endif /* GRASSWORKER_H_ */
