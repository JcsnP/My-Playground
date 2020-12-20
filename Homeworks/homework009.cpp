#include <bits/stdc++.h>
using namespace std;

typedef long int ll;

void input();
void deposit();
void withdraw();
void show();

struct Account{
	long long int accountID;
	int accountType;
	ll money = 0;
	ll limit = 0;
};

struct Person{
	int personID;
	char firstName[100];
	char lastName[100];
	struct Account account;
} customer_account;

int main(){
	int choice;
	
	input();
	
	while(true){
		cout << "------------------------------------------------------\n";
		cout << "(1) Deposit   " << "(2) Withdraw   " << "(3) Exit" << endl;
		cout << "------------------------------------------------------\n";
		
		cin >> choice;
		
		if(choice == 1) deposit();
		else if(choice == 2) withdraw();
		else if(choice == 3){
			show();
			break;
		}else break;
	}
}

void input(){
	int type(0);
	ll limit(0);
	
	cout << "Customer id: "; cin >> customer_account.personID;
	cout << "Enter first name: "; cin >> customer_account.firstName;
	cout << "Enter last name: "; cin >> customer_account.lastName;
	//account details
	cout << "Enter account number: "; cin >> customer_account.account.accountID;
	cout << "Choose account type (1) or (2): "; cin >> type;
	cout << "Enter initial money: "; cin >> customer_account.account.money;
	
	//limit
	if(type == 2){
		cout << "Enter Limit: "; cin >> limit;
	}	
}

void show(){
	cout << "Customer id: " << customer_account.personID << endl;
	cout << "Customer First Name: " << customer_account.firstName << endl;
	cout << "Customer Last Name: " << customer_account.lastName << endl;
	cout << "Account number: " << customer_account.account.accountID << endlCus;
	if(customer_account.account.accountType == 1){
		cout << "Account type: (1) Savings account" << endl;
	}else{
		cout << "Account type: (2) Current account" << endl;
	}
	cout << "Balance: " << customer_account.account.money << endl;
	if(customer_account.account.accountType == 2){
		cout << "Limit: " << customer_account.account.limit << endl;
	}
	
}

void deposit(){
	ll money;
	cout << "Please enter the amount you want to deposit: "; cin >> money;
	customer_account.account.money += money;
}

void withdraw(){
	ll money;
	cout << "Please enter the amount you wish to withdraw: "; cin >> money;
	customer_account.account.money -= money; 
}
