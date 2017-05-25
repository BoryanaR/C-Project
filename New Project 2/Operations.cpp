/*
 * Operations.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: Borqna
 */

#include "Operations.h"

Operations::Operations() {

}

Operations::~Operations() {

}

void Operations::addCourse(FirmForEducation& course) {
	courses.push_back(&course);

}

void Operations::printCourseInfo() {

	for (unsigned int i = 0; i < courses.size(); i++) {
		courses[i]->courseInfo();

		if (Online *Ptr = dynamic_cast<Online*>(courses[i])) {
			if (Ptr->getLevel() == "Begginer") {
				cout << endl;
				cout << "Type is : " << Ptr->getType() << endl;
			}
		}

	}
}

void Operations::printCoursePrice() {

	for (unsigned int i = 0; i < courses.size(); i++) {
		cout << "Price " << i + 1 << " is " << courses[i]->calculatePrice()
				<< endl;
	}
}
