#include "AutoContainer.h"
#include <iostream>
using namespace std;
void main() {
	CAutoContainer Auto;
	int ans;
	do {
		cout << "Menu: " << endl; 
		cout << "1 - Input" << endl;
		cout << "2 - Output" << endl;
		cout << "Enter: "; cin >> ans; cin.ignore();
		switch (ans)
		{
		case 1:
			Auto.addVehicle();
			break;
		case 2:
			Auto.printAllData();
			break;
		case 3:
			Auto.printCarByColor("red");
			break;
		}
		cout << endl;
	} while (ans != 0);
}