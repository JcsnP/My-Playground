#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int searching(int V[], int N, short int X){
	bool found = false;
	int i = 0, location;
	
	while(i < N && !found){
		if(X == V[i]){
			found = true;
			location = i+1;
			// show result
			cout << "Found = " << boolalpha << found << endl;
			cout << "Location = " << location << endl;
			cout << "Round = " << i+1 << endl;
			return 0;
		}else{
			i = i + 1;
		}
		cout << "Not Found" << endl;
	}
}

int main(){ // for insert
	int N = 0, X = 0;
	int V[N]; 
	
	cout << "Vector Length: ";
	cin >> N;
	
	cout << "Target: ";
	cin >> X;
	
	for(int i = 0; i < N; i++){
		cout << "Enter number " << i+1 << " : ";
		cin >> V[i];
	}
	
	// call function --search algorithm
	searching(V, N, X);
}
