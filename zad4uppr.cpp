#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	cout << "enter a,b,c" << endl;
	cin >> a >> b >> c;
	if (a + b > c and a + c > b and b + c > a)
	{
		cout << "exists" << endl;
	}
	else
	{
		cout << "doesnt exist" << endl;
	}
	return 0;

}
