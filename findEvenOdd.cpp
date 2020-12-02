#include  <iostream>
using namespace std;

void input();
void findEven(int arr[], int i);
void findOdd(int arr[], int i);

int main(void){
    input();
}

void input(){
    int arr[1000], i = 0;

    while(true){
        cout << "Please enter number. If want to stop enter -1: ";
        cin >> arr[i];
        if(arr[i] < 0){
            break;
        }
        ++i;
    }

    //call findEven
    findEven(arr, i);
    //call findODd
    findOdd(arr, i);
}

void findEven(int arr[], int i){
    cout << "Even number" << endl;
    for(int index = 0; index < i; index++){
        if(arr[index] % 2 == 0){
            cout << "Even number is: " << arr[index] << " at: " << index+1 << endl;
        }
    }
}

void findOdd(int arr[], int i){
    cout << "Odd number" << endl;
    for(int index = 0; index < i; index++){
        if(arr[index] % 2 != 0){
            cout << "Odd number is: " << arr[index] << " at: " << index+1 << endl;
        }
    }
}
