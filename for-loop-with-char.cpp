#include <iostream>
using namespace std;

int main(){
	for(char letters = 'A'; letters <= 'Z'; ++letters){
		cout << "Alphabet => " << letters << " ascii is => " << int(letters) << endl;
	}
}
