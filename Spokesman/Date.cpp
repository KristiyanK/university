#include "Date.h"
#include "iostream"
using namespace std;

CDate::CDate(int d, int m, int y)
{
	this->d = d;
	this->m = m;
	this->y = y;
}

CDate::CDate(){
	d = 0;
	m = 0;
	y = 0;
}

CDate::~CDate()
{
}

void CDate::getData(){
	cout << "Insert day: "; cin >> d;
	cout << "Insert mounth: "; cin >> m;
	cout << "Insert year: "; cin >> y;
}

void CDate::display(){
	cout << d <<"." << m << "." << y << endl;
}