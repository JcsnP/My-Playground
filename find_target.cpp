#include <iostream>
using namespace std;

void findIndex(int array[], int target);

int main(void){
    int arr[4] = {2, 7, 11, 15};
    int target;

    //input target        
    cin >> target;

    findIndex(arr, target);
}


void findIndex(int arr[], int target){
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){             
            if(target == arr[i] + arr[j]){          //arr[j] == target - arr[i]
                cout << "Result index is: " << i << " " << j << endl;
            }
        }
    }
}
