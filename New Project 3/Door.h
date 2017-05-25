/*
 * Door.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#ifndef DOOR_H_
#define DOOR_H_
#include <iostream>
#include <string>
using namespace std;

class Door {

	friend istream& operator>>(istream&, Door&);
	friend ostream& operator<<(ostream&, const Door&);

public:
	Door();
	Door(double lenght, double height, double width, string color);
	virtual ~Door();
	const string& getColor() const;
	void setColor(const string& color);
	double getHeight() const;
	void setHeight(double height);
	double getLenght() const;
	void setLenght(double lenght);
	double getWidth() const;
	void setWidth(double width);

	Door& operator+(Door&);
	bool operator==(Door&);
	bool operator<(Door&);
	bool operator>(Door&);

private:
	double lenght;
	double height;
	double width;
	string color;
};
#endif
