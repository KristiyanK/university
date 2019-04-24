#include "Truck.h"
#include "iostream"

CTruck::CTruck(string brand, int year, string reg, int cargo, bool trailer)
	: CVehicle(brand, year, reg)
{
	this->cargo = cargo;
	this->trailer = trailer;
}

CTruck::CTruck()
{
	cargo = 0;
}

CTruck::~CTruck()
{
}

void CTruck::getData(){
	CVehicle::getData();
	cout << "Enter cargo: ";
	cin >> cargo;
	cout << "Insert trailer(y-true/n-false): ";
	string ans;
	cin >> ans;
	trailer = (ans[0]=='y');
}

void CTruck::display(){
	CVehicle::display(); 
	cout << "Cargo is " << cargo << endl;
	cout << "Trailer " << ((trailer)?"Yes":"No") << endl;
}