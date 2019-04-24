#pragma once
#include "string"
using namespace std;
class CVehicle
{
private:
	string brand;
	int yearOfProduction;
	string regNumber;
public:
	CVehicle(string, int, string);
	CVehicle();
	~CVehicle();
	virtual void getData();
	virtual void display();
};
