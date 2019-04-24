#pragma once
#include "Vehicle.h"
class CCar :
	public CVehicle
{
private:
	string color;
	int numberOfDors;
public:
	CCar();
	CCar(string, int, string, string, int);
	~CCar();
	virtual void getData();
	virtual void display();
	string getColor() { return color; }
};