#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>
using namespace std;

#define MAX_STRING 255

int main(void){
	int N, NUM;
	int M = 2;
	
	cout << "Enter number: ";
	cin >> N;
	
	while(M <= sqrt(N)){
		NUM = N / M * M;
		if(NUM == N){
			cout << N << " is not prime" << endl;
			return 0;
		}
		M = M + 1;
	}
	
	// check if be prime
	cout << N << " is prime" << endl;
}
