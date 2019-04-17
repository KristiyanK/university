#pragma once
#include "string"
using namespace std;
class CHotel
{
private:
	string name;
	int numberRoom;
	double pricePerNight;
public:
	CHotel();
	CHotel(string, int, double);
	void getData();
	void display();
	~CHotel();
	string getHotelName() { return name; }
	double getPricePerNight() { return pricePerNight; }
};
