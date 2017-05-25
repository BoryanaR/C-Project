//============================================================================
// Name        : 5.cpp
// Author      : Боряна
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Address.h"
#include "Clients.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include "Cost.h"
#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main() {


	Address adrSender("Bulgaria", "Sofia", "Haga16", 1000);

	Address adrReceiever("Italy", "Fabriano", "balbo23", 60044);

	Clients clientSender("Iliya", adrSender);

	Clients clientReceiever("Malin", adrReceiever);

	Package pack(5, 5, clientSender, clientReceiever);

	pack.print();

	cout << endl;

	return 0;
}
