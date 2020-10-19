#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b;
	string operation;
	cin >> a >> operation >> b;
	if (operation == "+")
	{
		cout << a + b << endl;
	}
	if (operation == "-")
	{
		cout << a - b << endl;
	}
	if (operation == "*")
	{
		cout << a * b << endl;
	}
	if (operation == "/" and b != 0)
	{
		cout << a / b << endl;
	}
	if (operation == "/" and b == 0)
	{
		cout << "error" << endl;
	}
	if (operation != "+" and operation != "-" and operation != "*" and operation != "/")
	{
		cout << "error" << endl;
	}

	return 0;

}
