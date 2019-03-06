#pragma once
#include "Worker.h"
class CFirm
{
	CWorker * Arr[10];
	int n;
public:
	void createFirm() {
		n = 0;
	}
	void addData();
	void showData();
	void showDataForEgn();
	void showAllSalaries();
	void showNamesWorks10days();
	void deleteByEng();
	void sortBySalary();
	void deleteWorks();
};

