/*
 * TwoDayPackage.h
 *
 *  Created on: 4.05.2017 ã.
 *      Author: Borqna
 */

#ifndef TWODAYPACKAGE_H_
#define TWODAYPACKAGE_H_
#include "Package.h"
#include<iostream>
using namespace std;


class TwoDayPackage:public Package {
public:
	TwoDayPackage(double,double, Clients&,Clients&,double);
	TwoDayPackage();

	void print();
	void setTwoDay(double);

	double getTwoDay();
    double calculateCost();


	virtual ~TwoDayPackage();

private:

	double twoDay;


};

#endif /* TWODAYPACKAGE_H_ */
