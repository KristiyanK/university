#include "Table2.h"
#include "iostream"
using namespace std;

CTable2::CTable2(double price, string material, int places) : CFurniture(price, material){
	this->places = places;
}

CTable2::CTable2(){
	places = 0;
}

CTable2::~CTable2(){

}

void CTable2::getData(){
	cout << "Enter table places: ";
	cin >> places;
	CFurniture::getData();
}

void CTable2::display(){
	cout << "Table places: " << places << endl;
	CFurniture::display();
}

