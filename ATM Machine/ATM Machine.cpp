#include <iostream>
#include <limits>

using namespace std;

int main() {

	int option, deposit, withdraw, balance = 1000;

	cout << " -- ATM STARTED -- " << endl << endl;

	do {

		cout << "Choose an option: " << endl << endl
			<< "1. Deposit money" << endl
			<< "2. Withdraw money" << endl
			<< "3. Check balance" << endl
			<< "4. Exit" << endl << endl;

		if (!(cin >> option)) {

			cout << endl;
			cin.clear();
			cin.ignore();
			cout << "Enter a valid option" << endl;

		}
		else {

			cout << endl;

			switch (option) {

			case 1:

				cout << "How much money do you want to deposit?" << endl << endl;

				if (!(cin >> deposit)) {

					cout << endl;
					cin.clear();
					cin.ignore();
					cout << "You have to enter an integer" << endl;

				}
				else {

					balance = balance + deposit;

					cout << endl << "$" << deposit << " deposited" << endl;
					cout << endl << "Your current balance is: $" << balance << endl;

				}

				break;

			case 2:

				cout << "How much money do you want to withdraw?" << endl << endl;

				if (!(cin >> withdraw)) {

					cout << endl;
					cin.clear();
					cin.ignore();
					cout << "You have to enter an integer" << endl;

				}
				else {

					if (withdraw > balance) {

						cout << endl << "You do not have this amount of balance to withdraw" << endl;

					}
					else if (withdraw < balance) {

						cout << endl << "$" << withdraw << " withdrawn" << endl;
						balance = balance - withdraw;
						cout << endl << "Your current balance is: $" << balance << endl;

					}

				}

				break;

			case 3:

				cout << "Your current balance is: $" << balance << endl;

				break;

			case 4:

				cout << " -- FINISHED ATM -- " << endl;

				break;

			default:

				cout << "Enter a valid option" << endl;

			}

		}

		cout << endl;

	} while (option != 4);

	return 0;

}
