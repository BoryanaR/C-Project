/*
 * Package.h
 *
 *  Created on: 2.05.2017 ã.
 *      Author: Borqna
 */

#ifndef PACKAGE_H_
#define PACKAGE_H_
#include "Clients.h"
#include<iostream>
using namespace std;

class Package {
public:
	Package(double,double,Clients&,Clients&);
    Package();

	void print();
	void setWeight(double);
	void setCost(double);
	void setSender(Clients&);
	void setReceiever(Clients&);
	double calculateCost();

	double getWeight();
	double getCost();
	Clients& getsenderObject();
	Clients& getreceiverObject();


	virtual ~Package();
private:

    double weight;
    double cost;
    Clients senderObject;
    Clients receieverObject;

};

#endif /* PACKAGE_H_ */
