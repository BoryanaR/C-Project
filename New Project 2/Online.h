/*
 * Online.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#ifndef ONLINE_H_
#define ONLINE_H_
#include<string>
#include<iostream>
using namespace std;
#include "FirmForEducation.h"

class Online: public FirmForEducation {
public:
	Online();
	Online(string name, int number, int duration, double basePrice,string level, string type, string hour);
	virtual ~Online();
	const string& getHour() const;
	void setHour(const string& hour);
	const string& getLevel() const;
	void setLevel(const string& level);
	const string& getType() const;
	void setType(const string& type);

	virtual void courseInfo();
	double calculatePrice();

	int levelQuefficient();
	int typeQuefficient();
private:
	string level;
	string type;
	string hour;

};

#endif /* ONLINE_H_ */
