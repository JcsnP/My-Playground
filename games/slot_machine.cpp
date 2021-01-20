#include <iostream>
#include <cstdlib>
using namespace std;

int slot_machine[10] = {1,2,3,4,5,6,7,8,9,10};

void random_slot_machine(int &s1, int &s2, int &s3){
	// random number between 1 - 10
	s1 = slot_machine[rand() % 10];
	s2 = slot_machine[rand() % 10];
	s3 = slot_machine[rand() % 10];
}

int main(){
	float money, i = 1;
	
	cout << "Enter your first bet: ";
	cin >> money;
	
	while(money > 0){
		float bet, earn;
		int s1, s2, s3;
		cout << "Round " << i << " ";
		cout << "Enter your bet: ";
		cin >> bet;
		
		if(bet == 0){
			break;
		}
		
		random_slot_machine(s1, s2, s3);
		
		cout << "|"<< s1 << "|" << s2 << "|" << s3 << "|" << endl;
		
		if(s1 == s2 && s1 == s3){
			earn = bet * 1.5;
			money += earn;
			cout << "Congratulations!!! you earn " << earn << endl;
		}else{
			money -= bet;
		}
		
		cout << "Balance: " << money << endl;
		
		++i;
	}
}
