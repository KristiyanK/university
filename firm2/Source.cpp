#include <iostream>
#include <string>
#include <string.h>
#include "Firm.h"
using namespace std;


int main()
{
	CFirm F;
	F.createFirm();
	int num = 0;
	do
	{
		cout << "Menu: " << endl;
		cout << "1 - Add data " << endl;
		cout << "2 - Show data " << endl;
		cout << "3 - Show data by EGN " << endl;
		cout << "4 - Show all salary " << endl;
		cout << "5 - Show name > 10 work days " << endl;
		cout << "6 - delete by ins EGN " << endl;
		cout << "7 - sort by salary" << endl;
		cout << "Insert: ";
		cin >> num; cin.ignore();

		switch (num)
		{
		case 1:
			F.addData();
			break;
		case 2:
			F.showData();
			break;
		case 3:
			F.showDataForEgn();
			break;
		case 4:
			F.showAllSalaries();
			break;
		case 5:
			F.showNamesWorks10days();
			break;
		case 6:
			F.deleteByEng();
			break;
		case 7:
			F.sortBySalary();
			break;
		}
	} while (num != 0);
	F.deleteWorks();
}
