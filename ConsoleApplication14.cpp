#include "stdafx.h"
#include "Chairs.h"
#include "Table2.h"
#include "iostream"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	CTable2 T[10];
	CChairs C[10];
	int n;
	int m;
	cout << "Insert number of tables: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		T[i].getData();
		T[i].display();
	}
	cout << "-------------" << endl;
	cout << "Insert number of chairs: ";
	cin >> m;
	cin.ignore();
	for (int i = 0; i < m; i++){
		C[i].getData();
		C[i].display();
	}
	cout << "-------------" << endl;
	for (int i = 0; i < n; i++){
		if (T[i].isPriceinDiapasone(100,200))
		{
			cout << i + 1 << "-Table: ";
			T[i].display();
		}
	}
	cout << "-------------" << endl;
	for (int i = 0; i < m; i++){
		if (C[i].getMaterial()=="wood" && C[i].getColor()=="white")
		{
			cout << i + 1 << "-Chair: ";
			C[i].display();
		}

	}
	cout << "-------------" << endl;
	double maxPrice = 0;
	for (int i = 0; i < n; i++){
		if (T[i].getPrice()>maxPrice){
			maxPrice = T[i].getPrice();
		}
	}
	for (int i = 0; i < m; i++){
		if (C[i].getPrice()>maxPrice){
			maxPrice = C[i].getPrice();
		}
	}
	cout <<"Max price is "<<maxPrice<<endl;
	return 0;
}

