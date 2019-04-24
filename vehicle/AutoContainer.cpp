#include "AutoContainer.h"
#include <iostream>
#include "Car.h"
#include "Truck.h"
using namespace std;

CAutoContainer::CAutoContainer()
{
	n = 0;
}


CAutoContainer::~CAutoContainer()
{
	for (int i = 0; i < n; i++)
	{
		delete P[i];
	}
}

void CAutoContainer::addVehicle() {
	int ans;
	cout << "Enter (1-car, 2-truck): "; cin >> ans; cin.ignore();
	if (ans == 1) {
		P[n] = new CCar();
	}
	else {
		P[n] = new CTruck();
	}
	P[n]->getData();
	n++;
}

void CAutoContainer::printAllData() {
	cout << "All data: " << endl;
	for (int i = 0; i < n; i++)
	{
		P[i]->display();
	}
}

void CAutoContainer::printCarByColor(string color) {
	CCar *c;
	for (int i = 0; i < n; i++)
	{
		c = dynamic_cast<CCar*>(P[i]);
		if (c && c->getColor() == color) c->display();
	}
}

