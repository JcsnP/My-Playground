#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

double taxRate(ll salary);
double taxCal(ll salary, double taxRate);

int main(){
	double salary;
	double rate;
	cout << "Please input your salary: "; cin >> salary;
	rate = taxRate(salary);
	
	//call function
	cout << "TAX: " << taxCal(salary ,rate);
}

double taxRate(ll salary){
	if(salary >= 100000) return 0.15;
	else if(salary >= 30000 and salary < 100000) return 0.10;
	else if(salary >= 10000 and salary < 30000) return 0.05;
	else return 0; 
}

double taxCal(ll salary, double taxRate){
	double result = salary * taxRate;
	return result;
}
