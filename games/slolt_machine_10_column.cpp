#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int slot_machine[10] = {1,2,3,4,5,6,7,8,9,10};

void random_slot_machine(int &s1, int &s2, int &s3, int &s4, int &s5, int &s6, int &s7, int &s8, int &s9, int &s10){	
	// random number between 1 - 10
	s1 = slot_machine[rand() % 10];
	s2 = slot_machine[rand() % 10];
	s3 = slot_machine[rand() % 10];
	s4 = slot_machine[rand() % 10];
	s5 = slot_machine[rand() % 10];
	s6 = slot_machine[rand() % 10];
	s7 = slot_machine[rand() % 10];
	s8 = slot_machine[rand() % 10];
	s9 = slot_machine[rand() % 10];
	s10 = slot_machine[rand() % 10];
}

int main(){
	srand(time(NULL));
	long long int round = 0;
	long long int MAIN_ROUND = 0;	
	
	while(true){
		++round;
		int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0;
		random_slot_machine(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
		cout << "|"<< s1 << "|" << s2 << "|" << s3 << "|" << s4 << "|" << s5 << "|" << endl;
		if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5 && s5 == s6 && s6 == s7 && s8 == s9 && s9 == s10){
			++MAIN_ROUND;
			if(MAIN_ROUND == 5){
				break;
			}
		}
	}
	
	cout << "Round: " << round << endl;
}
