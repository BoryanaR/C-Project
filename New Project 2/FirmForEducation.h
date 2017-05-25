/*
 * FirmForEducation.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#ifndef FIRMFOREDUCATION_H_
#define FIRMFOREDUCATION_H_
#include<string>
#include<iostream>
using namespace std;

class FirmForEducation {
public:
	    FirmForEducation();
		FirmForEducation(string name, int number, int duration, double basePrice);
		virtual ~FirmForEducation();
		double getBasePrice() const;
		void setBasePrice(double basePrice);
		int getDuration() const;
		void setDuration(int duration);
		const string& getName() const;
		void setName(const string& name);
		int getNumber() const;
		void setNumber(int number);

		virtual void courseInfo();
		virtual double calculatePrice();


private:

		string name;
		int number;
		int duration;
		double basePrice;


};

#endif
