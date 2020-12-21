#include <iostream>
using namespace std;

void swapNumber(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b;
	cout << "Please enter number a and b: ";
	cin >> a >> b;
	
	cout << "Before swap: a and b is >> " << a << "\t" << b << endl;
	
	//call function
	swapNumber(&a, &b);
	
	cout << "After swap: a and b is >> " << a << "\t" << b << endl;
}
