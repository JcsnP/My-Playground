#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int slot_machine[10] = {1,2,3,4,5,6,7,8,9,10};

void random_slot_machine(int &s1, int &s2, int &s3, int &s4, int &s5){	
	// random number between 1 - 10
	s1 = slot_machine[rand() % 10];
	s2 = slot_machine[rand() % 10];
	s3 = slot_machine[rand() % 10];
	s4 = slot_machine[rand() % 10];
	s5 = slot_machine[rand() % 10];
}

int main(){
	srand(time(NULL));
	long long int round = 0;
	long long int all_round = 0;	
	long long int MAIN_ROUND = 0;	
	
	while(true){
		++round;
		int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
		random_slot_machine(s1, s2, s3, s4, s5);
		cout << "|"<< s1 << "|" << s2 << "|" << s3 << "|" << s4 << "|" << s5 << "|" << endl;
		if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5){
			all_round += round;
			++MAIN_ROUND;
			if(MAIN_ROUND == 5){
				break;
			}
			round = 0;
		}
	}
	
	cout << "Round: " << MAIN_ROUND << endl;
	cout << "Average Round: " << all_round / 5 << endl;
}
