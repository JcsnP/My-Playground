#include <iostream>
#include <fstream>
using namespace std;

int people = 0;

struct EMPLOYEE{
	string id;
	string name;
	string age;
	string salary;
	string department;
};

struct EMPLOYEE employee[20];

void createEmployee();
void displayEmployee();
void updateEmployee();
int daleteEmployee();		// check id, (sad)
void searchEmployee();

int main(){
	short int choice;
	do{
		cout << "-----------------------------------------------" << endl;
		cout << "MENU" << endl;
		cout << "[ 1 ]  create employee file" << endl;
		cout << "[ 2 ]  display employee file" << endl;
		cout << "[ 3 ]  update employee file" << endl;
		cout << "[ 4 ]  delete employee" << endl;
		cout << "[ 5 ]  search employee" << endl;
		cout << "[ 6 ]  stop program" << endl;
		cout << "Please select menu: ";
		cin >> choice;
		cout << "-----------------------------------------------" << endl;
		
		switch(choice){
			case 1:
				createEmployee();
				break;
			case 2:
				displayEmployee();
				break;
			case 3:
				updateEmployee();
				break;
			case 4:
				daleteEmployee();
				break;
			case 5:
				searchEmployee();
				break;
			case 6:
				cout << "Stop Program" << endl;
				return 0;
			default:
				cout << "Please select menu between 1 - 6" << endl;
		}
	}while(choice >= 1 && choice <= 6);
}

void createEmployee(){
	short int i = 0;
	
	ofstream FileCreate;
	FileCreate.open("employee.dat");
	
	cout << "How many employee: ";
	cin >> people;
	cin.ignore();		// BOOKMARK - cin.ignore() for cancel cin >> 
	
	while(i < people){
		// Write
		cout << "Employee ID: ";
		getline(cin, employee[i].id);
		
		cout << "Employee Name: ";
		getline(cin, employee[i].name);
		
		cout << "Employee age: ";
		getline(cin, employee[i].age);
		
		cout << "Employee salary: ";
		getline(cin, employee[i].salary);
		
		cout << "Employee Department: ";
		getline(cin, employee[i].department);
		
		cout << "-----------------------------------------------" << endl;
		
		FileCreate << employee[i].id << "," << employee[i].name << "," << employee[i].age << "," << employee[i].salary << "," << employee[i].department << endl;
		
		++i;
	}
	
	cout << "Create FileCreate Successful" << endl;

	FileCreate.close();
}

void displayEmployee(){
	ifstream FileOpen;
	string ReadLine;
	
	FileOpen.open("employee.dat");
	
	while(getline(FileOpen, ReadLine)){
		cout << ReadLine << endl;
	}
	
	FileOpen.close();
}

void updateEmployee(){
	string id;
	short int i = 0;
	//string dummy;
	ofstream UpdateFile;
	UpdateFile.open("employee.dat");
	
	cout << "Input employee id to edit: ";
	cin >> id;
	
	//getline(cin, dummy);		// Call Dummy
	cin.ignore();				// BOOKMARK - cin.ignore() for cancel cin >> 
	
	while(i < people){
		if(employee[i].id == id){
			cout << "Employee ID: ";
			getline(cin, employee[i].id);
			
			cout << "Employee Name: ";
			getline(cin, employee[i].name);
		
			cout << "Employee age: ";
			getline(cin, employee[i].age);
		
			cout << "Employee salary: ";
			getline(cin, employee[i].salary);
		
			cout << "Employee Department: ";
			getline(cin, employee[i].department);
			
			// Write File
			UpdateFile << employee[i].id << "," << employee[i].name << "," << employee[i].age << "," << employee[i].salary << "," << employee[i].department << endl;
		}else{
			UpdateFile << employee[i].id << "," << employee[i].name << "," << employee[i].age << "," << employee[i].salary << "," << employee[i].department << endl;
		}
		++i;
	}
	
	UpdateFile.close();
}

int daleteEmployee(){
	string id;
	short int i = 0;
	bool EXITS = false;
	
	ofstream FileCreate;
	FileCreate.open("employee.dat");
	
	cout << "What ID you want to delete: ";
	cin >> id;
	cin.ignore();				// BOOKMARK - cin.ignore() for cancel cin >> 
	
	while(i < people){
		if(employee[i].id == id){
			EXITS = true;
		}
	}
	
	if(!(EXITS)){
		cout << "Not found" << endl;
		return 1;
	}
	
	i = 0;
	
	while(i < people){
		if(employee[i].id != id){
			FileCreate << employee[i].id << "," << employee[i].name << "," << employee[i].age << "," << employee[i].salary << "," << employee[i].department << endl;
		}
		++i;
	}
	
	FileCreate.close();
	
	return 0;
}

void searchEmployee(){
	short int i = 0;
	string id;
	
	cout << "Please input employee id: ";
	cin >> id;
	
	while(i < people){
		if(employee[i].id == id){
			cout << employee[i].id << "," << employee[i].name << "," << employee[i].age << "," << employee[i].salary << "," << employee[i].department << endl;
			break;
		}
		++i;
	}
}

/*
63102230 Chitsanupong Paenyoi
📃 Write on Notepad++
*/
