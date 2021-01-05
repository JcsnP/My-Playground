#include <iostream>
using namespace std;

void insert(int arr[], int n);
int numberOfEven(int arr[], int n);
int numberOfOdd(int arr[], int n);
int lessthanOne(int arr[], int n);
void showResult(int arr[], int n);

int main(){
	int n, arr[1000];
	cout << "How many number: ";
	cin >> n;
	
	
	insert(arr, n);
	cout << "Number of even: " << numberOfEven(arr, n) << endl;
	cout << "Number of odd: " << numberOfOdd(arr, n) << endl;
	cout << "Number of less than or equal zero: " << lessthanOne(arr, n) << endl;
	showResult(arr, n);	
}

void insert(int arr[],int n){
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
}

int numberOfEven(int arr[], int n){
	int count(0);
	for(int i = 0; i < n; ++i){
		if(arr[i] % 2 == 0){
			++count;
		}
	}
	
	return count;
}

int numberOfOdd(int arr[], int n){
	int count(0);
	for(int i = 0; i < n; ++i){
		if(arr[i] % 2 != 0){
			++count;
		}
	}
	
	return count;
}

int lessthanOne(int arr[], int n){
	int count = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] <= 0){
			++count;
		}
	}
	
	return count;
}

void showResult(int arr[], int n){
	// Even number
	cout << "Even number: ";
	for(int i = 0; i < n; ++i){
		if(arr[i] % 2 == 0){
			cout << arr[i] << "\t";
		}
	}
	cout << endl;
	
	// Odd number
	cout << "Odd number: ";
	for(int i = 0; i < n; ++i){
		if(arr[i] % 2 != 0){
			cout << arr[i] << "\t";
		}
	}
	cout << endl;
	
	// Less Than One
	cout << "Less than 0: ";
	for(int i = 0; i < n; ++i){
		if(arr[i] <= 0){
			cout << arr[i] << "\t";
		}
	}
	cout << endl;
	
}
