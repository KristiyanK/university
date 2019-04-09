#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	long long n;
	long long m;
	long long k=0;
	long long p = 1;
	cin >> n;
	do
	{
		m = n % 3;
		n=n / 3;
		m=m * p;
		p *= 10;
		k = k + m;
	} while (n!=0);
	cout << k;
}

