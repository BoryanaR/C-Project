/*
 * TreeWorker.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Borqna
 */
#include<iostream>
using namespace std;
#include "TreeWorker.h"

TreeWorker::TreeWorker():Worker() {

	setBonus(0);
	setSalaryPerTree(0);

}

TreeWorker::~TreeWorker() {

}

int TreeWorker::getBonus() const {
	return bonus;
}

void TreeWorker::setBonus(int bonus) {
	this->bonus = bonus;
}

int TreeWorker::getSalaryPerTree() const {
	return salaryPerTree;
}

TreeWorker::TreeWorker(string name, string egn, string address, int bonus,
		int salaryPerTree):Worker(name,egn,address) {
	setBonus(bonus);
	setSalaryPerTree(salaryPerTree);
}

void TreeWorker::setSalaryPerTree(int salaryPerTree) {
	this->salaryPerTree = salaryPerTree;
}

void TreeWorker::print() {
	Worker::print();
	cout<<getBonus()<<" "<<getSalaryPerTree()<<endl;
}

double TreeWorker::calculate() {
	return getBonus() * getSalaryPerTree();
}
