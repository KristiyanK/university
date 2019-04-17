#include "Spokesman.h"
#include "iostream"


CSpokesman::CSpokesman()
{
	roadPrice = 0;
}

CSpokesman::CSpokesman(string name, string EGN, string city, double roadPrice){
	this->name = name;
	this->EGN = EGN;
	this->city = city;
	this->roadPrice = roadPrice;
}


CSpokesman::~CSpokesman(){
}

void CSpokesman::getData(){
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter EGN: ";
	getline(cin, EGN); 
	cout << "Enter city: ";
	getline(cin, city);
	cout << "Enter road price: ";
	cin >> roadPrice; cin.ignore();
}

void CSpokesman::display(){
	cout << "Name: " << name << endl;
	cout << "EGN: " << EGN << endl;
	cout << "City: " << city << endl;
	cout << "Road Price: " << roadPrice << endl;
}