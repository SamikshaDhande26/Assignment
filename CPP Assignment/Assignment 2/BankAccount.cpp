//============================================================================
// Name        : BankAccount.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>

using namespace std;

class BankAccount{

private:
	int AccountNumber;
	string accountHolderName;
	double balance;

public:

	int getAccountNumber() const{
		return AccountNumber;
	}

	void setAccountNumber(int ac){
		if(ac>0){
			AccountNumber = ac;
		}
	}

	string getAccountHolderName() const {
		return accountHolderName;
	}

	void setAccountHolderName(string name) {
		if(accountHolderName !=name){
			accountHolderName = name;
		}
	}

	double getBalance() const {
		return balance;
	}

	void setBalance(double bal) {
		if(bal>=0){
			balance = bal;
		}
	}

	void deposit(double amount){
		balance+=amount;
		cout << "Amount Deposited" << endl;
	}

	void withdraw(double amount){
		if(amount<=balance){
			balance-=amount;
			cout << "Amount Withdrawn" << endl;
		}else{
			cout << "insufficient balance" << endl;
		}
	}

	void displayAccountDetails(){
		cout << "Account Details..." << endl;
		cout << "Account Number:" << AccountNumber << endl;
		cout << "Account Holder Name:" << accountHolderName;
		cout << "Balance:" << balance << endl;
	}
};
int main() {
	BankAccount b;

	int accountNo;
	string name;
	double balance;

	int choice;
	double amount;

	cout << "Enter Account Number:" << endl;
	cin >> accountNo;

	cout << "Enter Account Holder Name:" << endl;
	cin >> name;

	cout << "Enter Balance:" << endl;
	cin >>balance;

	do{
		cout << "1.Deposit money into an existing account." << endl;
		cout << "2.Withdraw money from an existing account. " << endl;
		cout << "3.Display the account details." << endl;
		cout << "4.Exit the program" << endl;


		cout << "Enter your choice:" << endl;
		cin >> choice;


		switch(choice){
		case 1:
			cout << "Enter amount to deposit:" << endl;
			cin >> amount;
			b.deposit(amount);
			break;

		case 2:
			cout << "Enter amount to withdraw:" << endl;
			cin >> amount;
			b.withdraw(amount);
			break;

		case 3:
			b.displayAccountDetails();
			break;

		case 4:
			cout << "Program is exiting..." << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}while(choice!=4);

	return 0;
}
