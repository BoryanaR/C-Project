/*
 * Book.cpp
 *
 *  Created on: 25.05.2017 ã.
 *      Author: Borqna
 */

#include "Book.h"
#include<iostream>
using namespace std;

Book::Book() {
	this->author="N/A";
	this->price=0;
	this->title="N/A";
	this->year=0;

}

Book::~Book() {

}

const string& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const string& author) {
	this->author = author;
}

double Book::getPrice() const {
	return price;
}

void Book::setPrice(double price) {
	this->price = price;
}

const string& Book::getTitle() const {
	return title;
}

void Book::setTitle(const string& title) {
	this->title = title;
}

int Book::getYear() const {
	return year;
}

Book::Book(string title, string author, int year, double price) {
	setTitle(title);
	setAuthor(author);
	setYear(year);
	setPrice(price);

}

void Book::setYear(int year) {
	this->year = year;
}
void Book::print(){

	cout << " Title : " << getTitle() << endl;
	cout << " Author : " << getAuthor() << endl;
	cout << " Year : " << getYear() << endl;
	cout << " Price : " <<getPrice()<< endl;
}
