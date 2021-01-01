#include <iostream>
using namespace std;

void between(int a,int b){
	int instance = a;
	for(; a < b; ++a){
		if(a == instance) continue;
		cout << a << endl;
	}
}

int main(){
	int a, b;
	cout << "Please input number \"a\" and \"b\". using between and a must less than b: ";
	cin >> a >> b;
	between(a, b);
}
