#pragma once
#include "Vehicle.h"
class CTruck :
	public CVehicle
{
private:
	int cargo;
	bool trailer;
public:
	CTruck(string, int, string, int, bool);
	CTruck();
	~CTruck();
	virtual void getData();
	virtual void display();
};