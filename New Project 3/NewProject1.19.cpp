//============================================================================
// Name        : 19.cpp
// Author      : Боряна
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Door.h"
#include <iostream>
using namespace std;

int main() {

	Door door1;
	Door door2;
	Door door3;

	cin >> door1;
	cin >> door2;

	cout << door1;
	cout << endl;
	cout << door2;

	door3 = door1 + door2;
	cout << door3;

	if (door1 == door2) {
		cout << "The doors are equivalent !" << endl;

	} else {
		cout << "The doors are not equivalent !" << endl;
	}

	if (door1 < door2) {
		cout << "Second door is bigger !" << endl;

	} else {
		cout << "Second door is smaller !" << endl;
	}

	if (door1 > door2) {
		cout << "First door is bigger !" << endl;
	} else {
		cout << "First door is smaller !" << endl;
	}
	return 0;
}



