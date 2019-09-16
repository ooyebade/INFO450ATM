#include <iostream>

using namespace std;

int main()
{
	// inital amount user wants to withdraw. amountWithdrawn = inital amount minus amount withdrawn
	int amountWithdrawn = 0;

	// DollarBill = (amountWithdrawn / BillAmount)
	int fiftyDollarBill, twentyDollarBill, tenDollarBill, fiveDollarBill, oneDollarBill;

	// 'Y' makes the loop continues...To not get an error that's not intialized, variable is declared as 'Y' 
	char answer = 'Y';

	// Do-While loop
	do
	{
		cout << "Welcome to your local ATM. How much would you like to withdraw" << endl;

		// Asking user the amount they would like to withdraw
		cin >> amountWithdrawn;

		// If-Else Statement....Gives user idea of the appropriate amount to be withdrawn 
		if (amountWithdrawn >= 1 && amountWithdrawn < 300)
		{
			// Amount withdrawn confirmation
			cout << "You've pointed out you'll like to withdraw $" << amountWithdrawn << endl;

			// Run code if 50 or more dollars are left to be withdrawn 
			if (amountWithdrawn >= 50)
			{
				fiftyDollarBill = (amountWithdrawn / 50);
				cout << "Allocating: {" << fiftyDollarBill << "} $50 dollar bills" << endl;
				amountWithdrawn %= 50;
			}

			// Run code if 20 or more dollars are left to be withdrawn 
			if (amountWithdrawn >= 20)
			{
				twentyDollarBill = (amountWithdrawn / 20);
				cout << "Allocating: {" << twentyDollarBill << "} $20 dollar bills" << endl;
				amountWithdrawn %= 20;
			}

			// Run code if 10 or more dollars are left to be withdrawn 
			if (amountWithdrawn >= 10)
			{
				tenDollarBill = (amountWithdrawn / 10);
				cout << "Allocating: {" << tenDollarBill << "} $10 dollar bills" << endl;
				amountWithdrawn %= 10;
			}

			// Run code if 5 or more dollars are left to be withdrawn 
			if (amountWithdrawn >= 5)
			{
				fiveDollarBill = (amountWithdrawn / 5);
				cout << "Allocating: {" << fiveDollarBill << "} $5 dollar bills" << endl;
				amountWithdrawn %= 5;
			}

			// Run code if 1 or more dollars are left to be withdrawn 
			if (amountWithdrawn >= 1)
			{
				oneDollarBill = amountWithdrawn;
				cout << "Allocating: {" << oneDollarBill << "} $1 dollar bills" << endl;
				amountWithdrawn %= 1;
			}

			// Checks to see if user has been given all their withdrawal amount and see if code runs properly!
			if (amountWithdrawn == 0)
			{
				// Allows user to make another withdrawal. 'Y' allows user to return to the beginning of the loop
				cout << "Do you want to make another withdrawal?" << endl;
				cout << "Enter Y to continue....." << endl;
				cin >> answer;
			}

			else
			{
				cout << "Something looks wrong!" << endl;
			}
		}

		// Gives user instructions if user enters invalid amount!
		else if (amountWithdrawn > 300)
		{
			cout << "Sorry the max you can withdraw is $300.00" << endl;
			break;
		}

		else
		{
			cout << "Please enter dollar amount greater than 0" << endl;
			break;
		}
	} while (answer == 'Y');

	system("pause");
	return 0;
}