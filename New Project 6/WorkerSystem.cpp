//============================================================================
// Name        : WorkerSystem.cpp
// Author      : Боряна
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Operations.h"
#include "TreeWorker.h"
#include "GrassWorker.h"
#include <iostream>
using namespace std;

int main() {

	Operations op;

	TreeWorker *tree1 = new TreeWorker("Ivan", "455", "adres", 34, 23);
	TreeWorker *tree2 = new TreeWorker("Ivan2", "4575", "adres2", 343, 23);

	GrassWorker *gras1 = new GrassWorker("Didi", "5465", "adr", 33, 456);
	GrassWorker *gras2 = new GrassWorker("Didi2", "65", "adr1", 343, 56);

	op.addWorker(*tree1);
	op.addWorker(*tree2);
	op.addWorker(*gras1);
	op.addWorker(*gras2);


	op.printAllSal();

	return 0;
}
