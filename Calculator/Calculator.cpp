// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to the Calulator App" << endl;
	int x;
	int y;
	char z;
	int result;		// To hold the result

	int quit = 0;
	while (!quit)
	{
		cout << "Enter a integer: ";
		cin >> x;
		cout << "Enter another integer: ";
		cin >> y;
		cout << "Enter a charecter: ";
		cin >> z; 

		if (z == '+')
		{
			result = x + y;
			cout << result << endl;
		}
		else if (z == '*')
		{
			result = x * y;
			cout << result << endl;
		}
		else if(z == '/')
		{
			result = x / z;
			cout << result << endl;
		}
		else if (z == '-')
		{
			result = x - y;
			cout << result << endl;
		}
	}
	return 0;
}

