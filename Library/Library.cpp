//============================================================================
// Name        : Library.cpp
// Author      : Боряна
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Book.h"
#include "Author.h"
#include "Filtres.h"
#include <iostream>
using namespace std;

int main() {


	Author aut1("Boryana","Rodopska","BG");
	Author aut2("Iliq","Iliev","Italy");

	Book book1("fdh","love",2000,32,aut1);
	Book book2("gdjd","classic",2012,14,aut2);


	Filtres obj;

	obj.addBook(book1);
	obj.addBook(book2);

	obj.searchByNameBook("fdh");
	obj.searchByGenre();


	return 0;
}
