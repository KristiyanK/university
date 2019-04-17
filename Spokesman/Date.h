#pragma once
class CDate
{
private:
	int d, m, y;
public:
	CDate();
	CDate(int, int, int);
	void getData();
	void display();
	~CDate();
	int daysTo(CDate& other) {
		int d = this->d;
		int m = this->m;
		int y = this->y;
		int count = 0;
		int A[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		while (d != other.d || m != other.m || y != other.y) {
			count++;
			d++;
			if (d > A[m-1]) {
				d = 1;
				m++;
				if (m > 12) {
					m = 1;
					y++;
				}
			}
		}
		return count;
	}
};

