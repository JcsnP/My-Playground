#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TARGET 50
#define MAX_INT 2147483647

int slot_machine[10] = {1,2,3,4,5,6,7,8,9,10};

void random_slot_machine(int &s1, int &s2, int &s3, int &s4, int &s5){	
	// random number between 1 - 10
	s1 = slot_machine[rand() % 10];
	s2 = slot_machine[rand() % 10];
	s3 = slot_machine[rand() % 10];
	s4 = slot_machine[rand() % 10];
	s5 = slot_machine[rand() % 10];
}

/* TODO
random slot machine 5 columns, 50 times, get probabiliry
*/

int main(){
	srand(time(NULL));
	long double round = 0;
	long long int MAIN_ROUND = 0;	
	long double ALL_ROUND = 0, MAX_ROUND = 0, MIN_ROUND = MAX_INT;
	
	while(true){
		++round;
		int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
		random_slot_machine(s1, s2, s3, s4, s5);
		cout << "|" << s1 << "|" << s2 << "|"<< s3 << "|" << s4 << "|" << s5 << "|" << endl;
		if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5){
			ALL_ROUND += round;
			// MAX and MIN
			if(round > MAIN_ROUND) MAX_ROUND = round;
			if(round < MIN_ROUND) MIN_ROUND = round;

			// clear round
			round = 0;
			++MAIN_ROUND;
			if(MAIN_ROUND == TARGET){
				break;
			}
		}
	}
	
	cout << "Round: " << ALL_ROUND / TARGET << endl;
}
