/*
 * Worker.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */

#ifndef WORKER_H_
#define WORKER_H_
#include<string>
using namespace std;
class Worker {
public:
	Worker(string,string,string);
	Worker();

	virtual double calculate();
	virtual void print();





	virtual ~Worker();
	const string& getAddress() const;
	void setAddress(const string& address);
	const string& getEgn() const;
	void setEgn(const string& egn);
	const string& getName() const;
	void setName(const string& name);

private:

	string name;
	string egn;
	string address;
};

#endif /* WORKER_H_ */
