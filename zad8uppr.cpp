#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int d, m, y;
	cin >> d >> m >> y;
	if (m > 12 or m < 0)
	{
		cout << "error" << endl;
	}
	else 
	{
		if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10)
		{
			if (d == 31)
			{
				cout << 1 << "/" << m + 1 << "/" << y << endl;
			}
			if(d!=31 and d<31 and d>0)
			{
				cout << d + 1 << "/" << m << "/" << y << endl;
			}
			if (d > 31 or d < 0)
			{
				cout << "error" << endl;
			}
		}
		if (m == 4 or m == 6 or m == 9 or m == 11)
		{
			if (d == 30)
			{
				cout << 1 << "/" << m + 1 << "/" << y << endl;
			}
			if(d!=30 and d<30 and d>0)
			{
				cout << d + 1 << "/" << m << "/" << y << endl;
			}
			if (d > 30 or d < 0)
			{
				cout << "error" << endl;
			}
		}
		if (m == 12)
		{
			if (d == 31)
			{
				cout << 1 << "/" << 1 << "/" << y+1 << endl;
			}
			if (d != 31 and d < 31 and d>0)
			{
				cout << d + 1 << "/" << m << "/" << y << endl;
			}
			if (d > 31 or d < 0)
			{
				cout << "error" << endl;
			}
		}
		if (m == 2)
		{
			if (y % 4 != 0)
			{
				if (d == 28)
				{
					cout << 1 << "/" << m + 1 << "/" << y << endl;
				}
				if (d != 28 and d < 28 and d>0)
				{
					cout << d + 1 << "/" << m << "/" << y << endl;
				}
				if (d > 28 or d < 0)
				{
					cout << "error" << endl;
				}
			}
			if (y % 4 == 0 and y % 100 != 0)
			{
				if (d == 29)
				{
					cout << 1 << "/" << m + 1 << "/" << y << endl;
				}
				if (d != 29 and d < 29 and d>0)
				{
					cout << d + 1 << "/" << m << "/" << y << endl;
				}
				if (d > 29 or d < 0)
				{
					cout << "error" << endl;
				}
			}
			if (y % 4 == 0 and y % 100 == 0 and y % 400 != 0)
			{
				if (d == 28)
				{
					cout << 1 << "/" << m + 1 << "/" << y << endl;
				}
				if (d != 28 and d < 28 and d>0)
				{
					cout << d + 1 << "/" << m << "/" << y << endl;
				}
				if (d > 28 or d < 0)
				{
					cout << "error" << endl;
				}
			}
			if (y % 4 == 0 and y % 400 == 0)
			{
				if (d == 29)
				{
					cout << 1 << "/" << m + 1 << "/" << y << endl;
				}
				if (d != 29 and d < 29 and d>0)
				{
					cout << d + 1 << "/" << m << "/" << y << endl;
				}
				if (d > 29 or d < 0)
				{
					cout << "error" << endl;
				}
			}
		}

	}
	return 0;

}