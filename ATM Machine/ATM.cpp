#include <iostream>
#include <cstdlib>
using namespace std;

// Function to prompt the user the menu
void showMenu()
{
	cout << "**********MENU**********" << endl;

	cout << "1.Check Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;
	cout << "4.Exit" << endl;
	cout << "************************" << endl;


};

// Main function
int main()
{
	int option;
	double balance = 500;

	/*Do while loop with a switch to create a funcional menu for the user
	to enter his/her choice*/
	do
	{
	showMenu();
	cout << "Please enter your option: ";
	cin >> option;

	system("cls");

			switch (option)
			{
			case 1: cout << "Balance is: $" << balance << endl;
				break; 

			case 2:cout << "Deposit amount: ";
				double deposit;

				cin >> deposit;
				balance += deposit;

				break;

			case 3: cout << "Withdraw Amount: ";
				double withdraw;

				cin >> withdraw;

				if (withdraw <= balance) // If statement to show error in case the user does not have enough balnce
					balance -= withdraw;
				else
					cout << "Not enough balance";
				

				break;

			}
	} while (option != 4);

	return 0;
}