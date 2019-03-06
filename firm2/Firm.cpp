#include "Firm.h"
#include <iostream>

void CFirm::addData() {
	Arr[n] = new CWorker;
	Arr[n]->getData();
	n++;
}

void CFirm::showData() {
	for (int i = 0; i < n; i++)
	{
		Arr[i]->display();
		cout << endl;
	}
}

void CFirm::showDataForEgn() {
	string EGN;
	cout << "EGN: ";
	getline(cin, EGN);

	for (int i = 0; i < n; i++)
	{
		if (EGN == Arr[i]->getEGN())
		{
			Arr[i]->display();
		}
	}
}

void CFirm::showAllSalaries() {
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + Arr[i]->fullSalary();
	}
	cout << sum << endl;
}

void CFirm::showNamesWorks10days() {
	for (int i = 0; i < n; i++)
	{
		if (Arr[i]->getDays()>10)
		{
			cout << Arr[i]->getName() << endl;
		}
	}
}

void CFirm::deleteByEng() {
	string EGN;
	cout << "EGN: ";
	cin >> EGN;
	int k = -1;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i]->getEGN() == EGN)
		{
			k = i;
		}
	}
	if (k != -1)
	{
		delete Arr[k];
		for (int i = k; i < n - 1; i++) Arr[i] = Arr[i + 1];
		n--;
	}
}

void CFirm::sortBySalary() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++)
			if (Arr[j]->fullSalary() > Arr[j + 1]->fullSalary()) {
				CWorker *t = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = t;
			}
	}
}

void CFirm::deleteWorks() {
	for (int i = 0; i < n; i++) delete Arr[i];
}

