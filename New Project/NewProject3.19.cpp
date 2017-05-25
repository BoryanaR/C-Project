//============================================================================
// Name        : 19.cpp
// Author      : Боряна
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "FirmForEducation.h"
#include "Office.h"
#include "Online.h"
#include "Operations.h"
#include <iostream>
using namespace std;

int main() {

	Office *officeCourse1 = new Office("C++", 13, 5, 1499.99, "Dayly",
			"Ivan Boris 81", 5);
	Office *officeCourse2 = new Office("English", 7, 3, 499.99, "Dayly",
			"Vidlich 7", 1);
	Office *officeCourse3 = new Office("Cooking", 1, 3, 199.99,
			"Saturday/Sunday", "Oborishte 12", 2);
	Office *officeCourse4 = new Office("French", 6, 1, 399.99, "Evening",
			"Aleksandyr Stamboliiski 57", 7);

	Online *onlineCourse1 = new Online("C++", 3, 3, 599.99, "Begginer",
			"Small-group", "13:00");
	Online *onlineCourse2 = new Online("English", 1, 4, 299.99, "Begginer",
			"Small-group", "15:00");
	Online *onlineCourse3 = new Online("Cooking", 8, 2, 99.99, "Advanced",
			"Individual", "14:00");
	Online *onlineCourse4 = new Online("French", 9, 2, 199.99, "Expert",
			"Big-group", "10:00");

	Operations course;

	course.addCourse(*officeCourse1);
	course.addCourse(*officeCourse2);
	course.addCourse(*officeCourse3);
	course.addCourse(*officeCourse4);
	course.addCourse(*onlineCourse1);
	course.addCourse(*onlineCourse2);
	course.addCourse(*onlineCourse3);
	course.addCourse(*onlineCourse4);

	course.printCourseInfo();

	course.printCoursePrice();

	return 0;
}
