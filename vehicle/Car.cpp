#include "Car.h"
#include "iostream"


CCar::CCar(string brand, int year, string reg, string color, int numberOfDors)
	: CVehicle(brand, year, reg)
{
	this->color = color;
	this->numberOfDors = numberOfDors;
}

CCar::CCar()
{
	numberOfDors = 0;
}

CCar::~CCar()
{
}

void CCar::getData(){
	CVehicle::getData();
	cout << "Insert color: ";
	getline(cin, color);
	cout << "Insert number of dors: ";
	cin >> numberOfDors;
	cin.ignore();
}

void CCar::display(){
	CVehicle::display();
	cout << "Color is: " << color << endl;
	cout << "Number of dors are: " << numberOfDors << endl;
}