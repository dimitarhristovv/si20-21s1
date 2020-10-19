#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b;
	cout << "Enter a and b" << endl;
	cin >> a >> b;
	double max = a + b;
	if (max < a - b)
	{
		max = a - b;
	}
	if (max < a * b)
	{
		max = a * b;
	}
	if (max < a / b)
	{
		max = a / b;
	}
	cout << max << endl;
	return 0;

}
