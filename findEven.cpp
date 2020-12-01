#include <iostream>
using namespace std;

int main(){
	int count = 0, index = 0, i = 0, num;
	int arr[1000], even[1000];
	
	while(true){
		cout << "Please input number. If you want to stop enter -1: ";
		cin >> num;
		if(num >= 0){
			arr[index] = num;
			if(num % 2 == 0){
				even[i] = arr[index];
				++i;
				++count;
			}
		} else {
			break;
		}
		++index;
	}
	
	cout << "Number of even number is: " << count << endl;

	for(int i = 0; i < count; i++){
		cout << "Even Number: " << even[i] << endl;
	}
	
}
