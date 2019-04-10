#pragma once
#include "Furniture.h"
class CChairs :
	public CFurniture{
protected:
	string color;
public:
	CChairs(double, string, string);
	CChairs();
	~CChairs();
	void getData();
	void display();
	string getColor(){ return color; }
};

