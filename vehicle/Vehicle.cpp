#include "Vehicle.h"
#include "iostream"


CVehicle::CVehicle(string brand, int yearOfProduction, string regNumber)
{
	this->brand = brand;
	this->yearOfProduction = yearOfProduction;
	this->regNumber = regNumber;
}

CVehicle::CVehicle(){
	int yearOfProduction = 0;
}

CVehicle::~CVehicle()
{
}

void CVehicle::getData(){
	cout << "Enter brand: ";
	getline(cin, brand);
	cout << "Insert year of production: ";
	cin >> yearOfProduction;
	cin.ignore();
	cout << "Insert registration number: ";
	getline(cin, regNumber);
}

void CVehicle::display(){
	cout << "Brand is " << brand << endl;
	cout << "Year of production is " << yearOfProduction << endl;
	cout << "Registration number is " << regNumber << endl;
}