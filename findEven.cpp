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


/*
NEW
#include <iostream>
using namespace std;

int main() {
    int arr[1000], j, i = 0, num, count;
    
    do {
        if(num >= 0){
            cout << "Please input number. If stop enter -1: ";
            cin >> num;
            arr[i] = num;
            ++i;
        }
    } while(num >= 0);
    
    for(j = 0; j < i; j++){
        if(arr[j] % 2 == 0){
          cout << "Even number: " << arr[j] << endl;
          ++count;
        }
    }

    cout << "Number of even number is: " << count << endl;
}
*/
