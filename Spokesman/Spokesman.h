#pragma once
#include "string"
using namespace std;
class CSpokesman
{
private:
	string name;
	string EGN;
	string city;
	double roadPrice;
public:
	CSpokesman(string, string, string, double);
	CSpokesman();
	~CSpokesman();
	void getData();
	void display();
};