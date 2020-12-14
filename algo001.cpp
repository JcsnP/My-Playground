#include <bits/stdc++.h>
using namespace std;

//typedef long int ll;

/*
rate = อัตราดอกเบี้ย
intereset = ดอกเบี้ย
money = เงินต้น
sum = เงินรวม
*/

int main(){
	float rate = 0.10, interest = 0, sum;
	int i = 0;
	int money; cin >> money;
	int year; cin >> year;
	
	while(i < year){
		interest = money * rate;
		sum = money + interest;
		cout << "Sum: " << sum << endl;
		money = sum;
		++i;
	}
	
	cout << "Summary is: " << sum;
}
