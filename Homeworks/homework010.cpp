#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream file("personal.dat");
	
	while(true){
		string id, name, age, salary, department;
		
		cout << "Employee id: "; getline(cin, id);
		if(id == "0") break;
		cout << "Employee First name and Last name: "; getline(cin, name);
		cout << "Employee age: "; getline(cin, age);
		cout << "Employee salary: "; getline(cin, salary);
		cout << "Department: "; getline(cin, department);
		
		file << id + "," + name + "," + age + "," + salary + "," + department << endl;	
		
		cout << "---------------------------------------------------" << endl;
	}
	
	file.close();
	
	string mytext;
	
	ifstream readFile;
	readFile.open("personal.dat", ios::in);
	while(getline (readFile, mytext)){
		cout << mytext << endl;
	}
	
	file.close();
}
