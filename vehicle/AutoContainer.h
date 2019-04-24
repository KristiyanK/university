#pragma once
#include "Vehicle.h"
class CAutoContainer
{
private:
	CVehicle *P[30];
	int n;
public:
	CAutoContainer();
	~CAutoContainer();
	void addVehicle();
	void printAllData();
	void printCarByColor(string);
};

