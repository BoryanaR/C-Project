//============================================================================
// Name        : Team1.cpp
// Author      : Боряна
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Athletes.h"
#include "Disciplines1.h"
#include "Starts.h"
#include "Filtars.h"
#include <string>
using namespace std;

int main() {

	Athletes at1("Vasil","Petrov",5.6,"Bulgaria");
	Athletes at2("Lena","Petrovich",8.5,"Rusia");
	Athletes at3("Max","Ivanov",5.0,"Francia");

	Disciplines1 ds1("Sprint",6.0,5.9);
	Disciplines1 ds2("Pluvane",8.9,7.4);

//    Starts st1(23,12,"final",at1,ds1);






	return 0;
}
