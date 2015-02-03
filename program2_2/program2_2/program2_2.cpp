// program2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double total = 0.0;
	double order = 0.0;
	string size = "";
	int topNum = 0;
	string shape = "";
	string crust = "";
	string res = "";
	while (res != "Checkout")
	{
		cout << "What do you want to do (Order, Clear, or Checkout): ";
		cin >> res;
		if (res == "Order")
		{
			order = 0.0;
			cout << "Do you want a Large, Medium, or Small: ";
			cin >> size;
			cout << "How many toppings: ";
			cin >> topNum;
			cout << "What shape (Round, Square): ";
			cin >> shape;
			cout << "What type of crust (Thick, Thin): ";
			cin >> crust;
			if (size == "Large")
			{
				order += 15.95;
			}
			else if (size == "Medium")
			{
				order += 12.95;
			}
			else if (size == "Small")
			{
				order += 10.95;
			}
			order += topNum * 1.25;
			total += order;

		}
		if (res == "Clear")
		{
			total = 0.0;
		}
	}
	cout << "Total: " << total;
	getchar();
}
