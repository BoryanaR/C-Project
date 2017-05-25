/*
 * Book.cpp
 *
 *  Created on: 18.05.2017 ã.
 *      Author: Borqna
 */

#include "Book.h"
#include<iostream>
using namespace std;

Book::Book(string name,string genre,int yearIssue,int isbn,Author& author):authoObject(author) {
	this->name=name;
	this->genre=genre;
	this->yearIssue=yearIssue;
	this->isbn=isbn;
}
Book::Book(){
	this->name="N/A";
	this->genre="N/A";
	this->yearIssue=0;
	this->isbn=0;
}
void Book::setName(string name){
	this->name=name;
}
void Book::setGenre(string genre){
	this->genre=genre;
}
void Book::setYearIssue(int yearIssue){
	this->yearIssue=yearIssue;
}
void Book::setIsbn(int isbn){
	this->isbn=isbn;
}
void Book::setAuthor(Author& author){
	this->authoObject=author;
}
string Book::getName(){
	return this->name;
}
string Book::getGenre(){
	return this->genre;
}
int Book::getYearIssue(){
	return this->yearIssue;
}
int Book::getIsbn(){
	return this->isbn;
}
Author& Book::getauthorObject(){
	return this->authoObject;
}
void Book::print(){
	cout<<getName()<<" "<<getGenre()<<" "<<getYearIssue()<<" "<<getIsbn()<<endl;
	 authoObject.print();
}


Book::~Book() {

}

