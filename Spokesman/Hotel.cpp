#include "Hotel.h"
#include "iostream"


CHotel::CHotel(string name, int numberRoom, double pricePerNight)
{
	this->name = name;
	this->numberRoom = numberRoom;
	this->pricePerNight = pricePerNight;
}

CHotel::CHotel()
{
	numberRoom = 0;
	pricePerNight = 0;
}

CHotel::~CHotel()
{
}

void CHotel::getData(){
	cout << "Enter name hotel";
	getline(cin, name);
	cout << "Enter number of room";
	cin >> numberRoom;
	cout << "Price per night";
	cin >> pricePerNight; cin.ignore();
}

void CHotel::display(){
	cout << "Hotel name: " << name << endl;
	cout << "Room number: " << numberRoom << endl;
	cout << "Price per night" << pricePerNight << endl;
}