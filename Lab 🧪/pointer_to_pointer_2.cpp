#include <bits/stdc++.h>
using namespace std;

typedef long int ll;

int main(){
	int n = 10;
	
	//pointer
	int *ptr_1 = &n;
	int **ptr_2 = &ptr_1;
	
	cout << "Address of n: " << &n << endl;
	cout << "Value pointer 1:\t" << *ptr_1 << endl;
	cout << "Value of pointer:\t" << ptr_1 << "\tAddress ptr_1: " << &ptr_1 << endl;  
	cout << "------------------------------------------------------------------------------" << endl; 
	cout << "Value pointer 2:\t" << *ptr_2 << endl;
	cout << "Value of pointer:\t" << ptr_2 << "\tAddress ptr_1: " << &ptr_2 << endl;   
	cout << "------------------------------------------------------------------------------" << endl; 
}


/* OUTPUT
Address of n: 0x61ff0c
Value pointer 1:        10
Value of pointer:       0x61ff0c        Address ptr_1: 0x61ff08
------------------------------------------------------------------------------
Value pointer 2:        0x61ff0c
Value of pointer:       0x61ff08        Address ptr_1: 0x61ff04
------------------------------------------------------------------------------
*/
