#pragma once
#include "Furniture.h"
class CTable2 :
	public CFurniture{
protected:
	int places;
public:
	CTable2(double, string, int);
	CTable2();
	~CTable2();
	void getData();
	void display();
};

