#pragma once
#include "Hotel.h"
#include "Spokesman.h"
#include "Date.h"

class CSpokesmanCard : public CHotel, public CSpokesman
{
private:
	int number;
	CDate coming;
	CDate going;
public:
	CSpokesmanCard(int, CDate, CDate);
	CSpokesmanCard();
	~CSpokesmanCard();
	void getData();
	void display();
	int getNights() {
		return coming.daysTo(going);
	}
};

