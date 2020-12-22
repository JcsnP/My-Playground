#include <bits/stdc++.h>
using namespace std;

typedef long int ll;

int vowelChecker(string &inputStr){
	int num_vowels = 0;
	for(unsigned int i = 0; i < inputStr.length(); ++i){
		if(inputStr[i] == 'a' or inputStr[i] == 'e' or inputStr[i] == 'i' or inputStr[i] == 'o' or inputStr[i] == 'u'){
			++num_vowels;
		}
	}
	
	return num_vowels;
}

int main(){
	string inputString;
	getline(cin, inputString);
	
	//call function
	cout << vowelChecker(inputString);
}
