
//This program reads a string and determine if there is a '+' or '=' sign before and after each letter or number

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "+d+=3=+s+";
		bool sign = false;
	
		if (str[0] == '+' || str[0] == '-')
		{
			sign = true;
			for (int i = 1; i < str.length(); i++)
			{
				if (isalnum(str[i]))
				{
					if ((str[i - 1] != '+' || str[i - 1] != '-') && (str[i + 1] != '=' || str[i + 1] != '+'))
						sign = true;
				}

			}
		}
		else
			sign = false;
		
	cout << str <<endl;
	if (sign)
		cout <<"Each letter or number is wrapped arround a + or = sign\n";
	else
		cout << "String is not formatted correctly\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
