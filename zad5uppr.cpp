#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c;
	cout << "enter integers" << endl;
	cin >> a >> b >> c;
	if (0 < a and a < 10 and 0 < b and b < 10 and 0 <c and c < 10)
	{
		int max;
		if (a >= b and b >= c)
		{
			max=100 * a + 10 * b + c;
		}
		if (a >= c and c >= b)
		{
			max = 100 * a + 10 * c + b;
		}
		if (b >= a and a >= c)
		{
			max = 100 * b + 10 * a + c;
		}
		if (b >= c and c >= a)
		{
			max = 100 * b + 10 * c + a;
		}
		if (c >= a and a >= b)
		{
			max = 100 * c + 10 * a + b;

		}
		if (c >= b and b >= a)
		{
			max = 100 * c + 10 * b + a;
		}
		cout << max << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	return 0;

}
