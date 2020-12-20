#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//typedef long int ll;

int main(){
	ofstream file("personal.dat");
	
	while(true){
		string id, name, age, department;
		
		cout << "Employee id: "; getline(cin, id);
		if(id == "0") break;
		file << id;
		cout << "Employee First name and Last name: ";
		getline(cin, name);
		file << name;
		cout << "Employee age: "; getline(cin, age);
		file << age;
		cout << "Department: "; getline(cin, department);
		file << department << endl;
	}
	
	file.close();
	
	string mytext;
	
	ifstream readFile;
	readFile.open("personal.dat", ios::in);
	while(getline (readFile, mytext)){
		cout << mytext << endl;
	}
}
