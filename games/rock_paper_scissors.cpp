#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void randomRPS(char X){
	srand(time(NULL));
	
	char PRS[3][20] = {"rock","paper","scissors"};
	short int index = (rand() % 10) / 3;
	
	if(X == PRS[index][0]){
		cout << "Computer: " << PRS[index] << " You win!" << endl;
	}else{
		cout << "Computer: " << PRS[index] << " You lose!" << endl;
	}
}

int main(){
	
	while(true){
		char X;
		
		cout << "|rock[r]|paper[p]|scissors[s]|exit[e]|" << endl;
		cin >> X;
		if(X == 'e'){
			break;
		}
		
		randomRPS(X);
	}
	
	cout << "EXIT" << endl;
	
	return 0;
}
