#include "SpokesmanCard.h"
#include "iostream"

CSpokesmanCard::CSpokesmanCard(int number, CDate coming, CDate going){
	this->number = number;
	this->coming = coming;
	this->going = going;
}

CSpokesmanCard::CSpokesmanCard(){
	number = 0;
}

CSpokesmanCard::~CSpokesmanCard()
{
}

void CSpokesmanCard::getData(){
	CSpokesman::getData();
	CHotel::getData();
	cout << "Enter card number: "; cin >> number;
	cout << "Enter coming date: ";
	coming.getData();
	cout << "Enter going date: ";
	going.getData();
}

void CSpokesmanCard::display(){
	CSpokesman::display();
	CHotel::display();
	cout << "Card number: " << number << endl;
	cout << "Date coming: "; coming.display();
	cout << "Date going: "; going.display();
}