// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

char choice;

int main()
{
	do
	{
		int Dollar = 1.00;
		int Quarter = 0.25;
		int Dime = 0.10;
		int Nickel = 0.05;
		int Penny = 0.01;
		double Payment = 0.0;
		double Price = 0.0;
		bool GiveChange = true;

		cout << "Welcome to your friendly neighbodrhood vending machine!" << endl;
		cout << "Enter cost of item" << endl;
		cin >> Price;
		cout << "Enter the amount you are paying" << endl;
		cin >> Payment;

		if (Price > Payment)
		{
			cout << "Error Insufficient Funds: Re-enter the amount you are paying" << endl;
			cin >> Payment;
		}
		else if (Price < Payment)
		{
			GiveChange = true;
		}
		else if (Price = Payment)
		{
			cout << "Thank you! Have a wonderful day!" << endl;
		}

		double Change = Payment - Price;
		double FinalChange = Change;

		if (GiveChange = true)
		{
			//cout << "Your change is " << Change << endl;
			Dollar = FinalChange / 1;
			FinalChange = FinalChange - (Dollar * 1);
			Quarter = FinalChange / .25;
			FinalChange = FinalChange - (Quarter * .25);
			Dime = FinalChange / .10;
			FinalChange = FinalChange - (Dime * .10);
			Nickel = FinalChange / .05;
			FinalChange = FinalChange - (Nickel * .05);
			Penny = FinalChange / .01;
			FinalChange = FinalChange - (Penny *.01);

			cout << "Your change will be given as " << Dollar << "dollars, " << Quarter << "quarters, "
				<< Dime << "dimes, " << Nickel << "nickels, and " << Penny << "pennies. " << endl;
		}
		else if (GiveChange = false)
		{
			cout << "Have a nice day!" << endl;
		}

		cout << "Thank you for your business" << endl;

		cout << "Do you want to make another purhcase? (y/n)" << endl;
		cin >> choice;
	}
	while (choice != 'n');

		return 0;
	}

