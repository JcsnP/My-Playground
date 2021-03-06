#include <iostream>
using namespace std;

int Delete(int arr[], int N){

    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N;){
            if(arr[i] == arr[j]){
                for(int k = j; k < N-1; k++){
                    arr[k] = arr[k+1];
                }
                --N;
            }else{
                j++;
            }
        }
    }

    return N;
}

void Sorting(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j <= N; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After" << endl;
    for(int i = 0; i < N; i++){
        cout << arr[i] << endl;
    }
}

void Searching(int arr[], int N){
    char choice = 'y';
    
    while(choice == 'y'){
        int i, find;
        bool found = false;

        // get value to searching
        cout << "What number to find ?: ";
        cin >> find;

        for(i = 0; i < N && find >= arr[0]; i++){
            if(find == arr[i]){
                cout << "Found, at element " << i+1 << " , compare " << i+1 << endl;
                found = true;
                break;
            }
        }
        if(found == false){
            cout << "Not found, compare " << i << endl;
        }

        // choice
        cout << endl << "Find again ? [y]/[n]: ";
        cin >> choice;
    }
}

int main(){
    int N, find;

    cout << "Length of array: ";
    cin >> N;

    int arr[N] = {};

    // input value into array
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    // call Delete function to delete same value in array and get N
    N = Delete(arr, N);

    // call sorting function
    Sorting(arr, N);

    // call Searching function to search element in array
    Searching(arr, N);
}
