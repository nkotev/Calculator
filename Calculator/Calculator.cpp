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

	int quit = 0;
	while (!quit)
	{
		cout << "*";
		cout << "Enter a integer: ";
		cin >> x;
		cout << " Enter another integer: ";
		cin >> y;
		cout << "Enter a charecter";
		cin >> z; 

		if (z == '+')
		{
			int result = x + y;
			cout << result;
		}
	}
	return 0;
}

