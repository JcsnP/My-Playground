#include <iostream>
using namespace std;

int sumdigit(int n){
	int sum(0), digit;
	while(n != 0){
		digit = n % 10;
		n = n / 10;
		sum = sum + digit;
	}
	
	return sum;
}
	
int main(){
	int n;
	cin >> n;
	
	cout << sumdigit(n);
}
