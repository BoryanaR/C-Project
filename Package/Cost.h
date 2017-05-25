/*
 * Cost.h
 *
 *  Created on: 4.05.2017 ã.
 *      Author: Borqna
 */

#ifndef COST_H_
#define COST_H_
#include<iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
using namespace std;


class Cost {

public:

      //Vectors

	vector<Package> packageVector;
	vector<TwoDayPackage> twoDayVector;
	vector<OvernightPackage> overNightVector;

	Cost(Package&,TwoDayPackage&,OvernightPackage&);
    Cost();

	void setPackage(Package&);
	void setTwoDayPackage(TwoDayPackage&);
	void setOvernightPackage(OvernightPackage&);

	Package& getPackageObject();
	TwoDayPackage& getTwoDayObject();
	OvernightPackage& getovernightObject();

	//Package

	void calculateTotalCostPackage();
	void filterPerKgPackage(double);
	void filterPerCostPackage(double);
	void filterPerCountryPackage(string);

	// TwoDayObject

	void calculateTotalCostTwoDay();
	void filterPerKgTwoDay(double);
	void filterPerCostTwoDay(double);
	void filterPerCountryTwoDay(string);

	// OverNight

	void calculateTotalCostOverNigt();
	void filterPerKgOverNight(double);
	void filterPerCostOverNight(double);
	void filterPerCountryOverNight(string);

	virtual ~Cost();

private:

	Package packageObject;
	TwoDayPackage twoDayObject;
	OvernightPackage overNightObject;




};

#endif
