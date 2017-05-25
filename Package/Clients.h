/*
 * Clients.h
 *
 *  Created on: 2.05.2017 ã.
 *      Author: Borqna
 */

#ifndef CLIENTS_H_
#define CLIENTS_H_
#include "Address.h"
#include<iostream>
#include<string>
using namespace std;

class Clients {
public:
	Clients(string,Address&);
	Clients();

	void print();
	void setName(string);
	void setAddress(Address&);

	string getName();
	Address& getAdd();

	virtual ~Clients();
private:

	string name;
	Address add;

};

#endif /* CLIENTS_H_ */
