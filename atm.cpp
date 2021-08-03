#include <iostream>
#include <stdlib.h> // this library for text colouring
#include <iomanip> // this library for aligning text
using namespace std;

void showMenu() {
	system("Color 7");
	cout << "************************************** MENU **************************************" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "5. Account" << endl;
	cout << "**********************************************************************************" << endl;
}

int main()
{	
	 // check balance , deposit, withdraw, show menu
	int option;
	double balance = 500;

	do{
	// this is for the selecting of options
	showMenu();
	cout << "Choose a option: ";
	cin >> option;
	system("cls");

	// option logic according to the option selecting in the option input
		switch (option) {
			case 1: system("Color 2");  cout << "Balance is: " << balance << " $" << endl; break; // case 1 of checking balances

			case 2: system("Color 3"); cout << "Deposit amount: "; // case 2 for depositing amount in the application
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;

			case 3: system("Color 6"); cout << "Withdraw amount: "; // case 3 for withdraw amount
			double withdrawAmount; // this block for checking the default amount or 
			cin >> withdrawAmount; // deposited amount in default acount
			if (withdrawAmount <= balance) {
				balance -= withdrawAmount;
			}
			else {
				cout << "Not enough money" << endl;
			}
			break;
			case 5: system("Color 1"); cout << "Hi ";
		}
	} while (option != 4);

	system("pause>0");
}

