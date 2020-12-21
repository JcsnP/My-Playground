#include <bits/stdc++.h>
using namespace std;

int main(){
	int g = 3012;
	int *p1 = &g;
	int **p2 = &p1;
	
	cout << "G address: " << &g << endl;
	cout << "p1 value and address\t" << p1 << "\t\t" << &p1 << endl;
	cout << "p2 value and address\t" << p2 << "\t\t" << &p2 << endl;
}

//result

/*
G address: 0x61ff0c
p1 value and address    0x61ff0c                0x61ff08
p2 value and address    0x61ff08                0x61ff04
*/
