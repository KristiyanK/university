#include "Worker.h"
#include <iostream>
using namespace std;

double CWorker::fullSalary()
{
	return days * salary;
}

void CWorker::getData()
{
	cout << "Name: ";
	getline(cin, name);
	cout << "EGN: ";
	cin.ignore();
	getline(cin, egn);
	cout << "Days: ";
	cin >> days;
	cout << "Day payment: ";
	cin >> salary;
}

void CWorker::display()
{
	cout << "Name: " << name << endl;
	cout << "EGN: " << egn << endl;
	cout << "Days: " << days << endl;
	cout << "Daily payment: " << salary << endl;
}