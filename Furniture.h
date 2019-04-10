#pragma once
#include "string"
using namespace std;
class CFurniture
{
private:
	double price;
	string material;
public:
	CFurniture(double, string);
	CFurniture();
	~CFurniture();
	void getData();
	void display();
	double getPrice(){ return price; }
	string getMaterial(){ return material; }
	bool isPriceinDiapasone(double, double);
	double maxPrice();
};

