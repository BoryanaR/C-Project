/*
 * Athletes.h
 *
 *  Created on: 6.05.2017 ã.
 *      Author: Borqna
 */

#ifndef ATHLETES_H_
#define ATHLETES_H_
#include<string>
#include<iostream>
using namespace std;

class Athletes {
public:
	Athletes(string,string,double,string);
	Athletes();

	void print();
	void setFirstName(string);
	void setFamilyName(string);
	void setbestAchievement(double);
	void setNationality(string);

	string getFirstName();
	string getFamilyName();
	double getBestAchievement();
	string getNationality();

virtual ~Athletes();

private:

   string firstName;
   string familyName;
   double bestAchievement;
   string nationality;
};

#endif /* ATHLETES_H_ */
