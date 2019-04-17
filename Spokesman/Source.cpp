#include "SpokesmanCard.h"
#include <iostream>
#include <string>

void main() {
	CDate d1(30, 4, 2019);
	CDate d2(2, 5, 2019);
	cout << d1.daysTo(d2) << endl;

	CSpokesmanCard* C[20];
	int n = 0;
	int ans;
	string hotel;
	double sum = 0;
	do {
		cout << "Menu" << endl;
		cout << "1 - Input" << endl;
		cout << "2 - Output" << endl;
		cout << "Insert ans: "; cin >> ans; cin.ignore();
		switch (ans) {
		case 1:
			C[n] = new CSpokesmanCard;
			C[n]->getData();
			n++; 
			break;
		case 2:
			for (int i = 0; i < n; i++) {
				C[i]->display();
			}
			break;
		case 3:
			cout << "Insert hotel: "; getline(cin, hotel);
			sum = 0;
			for (int i = 0; i < n; i++) {
				if (C[i]->getHotelName() == hotel) {
					sum += C[i]->getPricePerNight()*C[i]->getNights();
				}
			}
			cout << "Sum: " << sum << endl;
			break;
		}
		cout << endl;
	} while (ans != 0);

	for (int i = 0; i < n; i++) delete C[i];
}