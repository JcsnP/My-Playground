#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10,68,32,15,99};
    
    for(int i = 0; i < 5; ++i){
        for(int j = i + 1; j < 5; ++j){
            if(arr[i] > arr[j]){
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i: arr){
        cout << i << "\t";
    }
}
