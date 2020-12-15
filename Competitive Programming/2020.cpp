#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[200];
	
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < 200; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i <= size; i++){
		for(int j = 0; j < i; j++){
			if(arr[i] + arr[j] == 2020){
				cout << arr[i] * arr[j];
				break;
			}
		}
	}
}
