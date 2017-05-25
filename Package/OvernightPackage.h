/*
 * OvernightPackage.h
 *
 *  Created on: 4.05.2017 ã.
 *      Author: Borqna
 */

#ifndef OVERNIGHTPACKAGE_H_
#define OVERNIGHTPACKAGE_H_
#include "Package.h"
#include<iostream>
using namespace std;

class OvernightPackage:public Package {
public:
	OvernightPackage(double,double,Clients&,Clients&,double);
	OvernightPackage();

	void print();
	void setCostPerWeight(double);

	double getCostPerWeight();
    double calculateCost();



	virtual ~OvernightPackage();

private:

	double costPerWeight;


};

#endif /* OVERNIGHTPACKAGE_H_ */
