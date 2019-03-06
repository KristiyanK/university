#pragma once
#include <string>
using namespace std;
class CWorker {
private:
	string name, egn;
	int days;
	double salary;
public:
	void getData();
	void display();
	string getEGN(){ return egn; }
	int getDays(){ return days; }
	double getSalary(){ return	salary; }
	double fullSalary();
	string getName(){ return name; }
};

