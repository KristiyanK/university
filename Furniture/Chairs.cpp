#include "Chairs.h"
#include "iostream"
using namespace std;

CChairs::CChairs(){
	color = "---";
}

CChairs::CChairs(double price, string material, string color) :CFurniture(price, material){
	this->color = color;
}

CChairs::~CChairs()
{
}

void CChairs::getData(){
	cout << "Enter chair color: ";
	getline(cin, color);
	CFurniture::getData();
}

void CChairs::display(){
	cout << "Chair color is " << color << endl;
	CFurniture::display();
}