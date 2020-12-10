#include <iostream>
using namespace std;

//global varible
int number[100], Even[100], Odd[100];
int evenPosition[100], oddPosition[100];
int length(0), evenLength(0), oddLength(0);

void input();
void findEven();
void findOdd();
void showEven();
void showOdd();

int main(){
	input();
	
	//show result
	cout << "-------------------------------------------------" << endl;
	showEven();
	cout << "-------------------------------------------------" << endl;
	showOdd();
	cout << "-------------------------------------------------" << endl;
}

void input(){
	cout << "How many number you want to find: ";
	cin >> length;
	
	for(int i = 0; i < length; i++){
		cout << "Please input number " << i+1 << " : ";
		cin >> number[i];
	}
	findEven();
	findOdd();
}

void findEven(){
	int evenIndex(0);
	for(int i = 0; i < length; i++){
		if(number[i] % 2 == 0){
			Even[evenIndex] = number[i];
			evenPosition[evenIndex] = i;
			++evenIndex;
			++evenLength;
		}
	}
}

void findOdd(){
	int oddIndex(0);
	for(int i = 0; i < length; i++){
		if(number[i] % 2 != 0){
			Odd[oddIndex] = number[i];
			oddPosition[oddIndex] = i;
			++oddIndex;
			++oddLength;
		}
	}
}


void showEven(){	
	cout << "Even number:\t";
	
	for(int i = 0; i < evenLength; i++){
		cout << Even[i] << "\t";  
	}
	cout << endl;
	cout << "At position:\t";
	for(int i = 0; i < evenLength; i++){
		cout << evenPosition[i]+1 << "\t";  
	}
	cout << endl;
}

void showOdd(){
	cout << "Odd number:\t";
	for(int i = 0; i < oddLength; i++){
		cout << Odd[i] << "\t";  
	}
	cout << endl;
	cout << "At position:\t";
	for(int i = 0; i < oddLength; i++){
		cout << oddPosition[i]+1 << "\t";  
	}
	cout << endl;
}
