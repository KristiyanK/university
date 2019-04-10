#include "Furniture.h"
#include <iostream>


CFurniture::CFurniture(double price, string material){
	this->price = price;
}

CFurniture::CFurniture(){
	price = 0;
	material = "---";
}

CFurniture::~CFurniture(){

}

void CFurniture::getData(){
	cout << "Enter a price: ";
	cin >> price;
	cin.ignore();
	cout << "Enter material: ";
	getline(cin, material);
}

void CFurniture::display(){
	cout << "Price is " << price << endl;
	cout << "Material is " << material << endl;
}

bool CFurniture::isPriceinDiapasone(double min, double max){
	return (min <= price && max >= price);
}

