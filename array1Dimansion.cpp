#include <iostream>
using namespace std;

int main(){
    int length = 1;

    cin >> length;
    int arr[length];

    for(int i = 0; i < length; i++){
        cout << "Index [" << i << "] : "; 
        cin >> arr[i];
        /*
            for(int i = 0; i < length; i++){
                int value;
                cin >> value;
                arr[i] = value;
            }
        */
    }
    for(int j = 0; j < length; j++){
        cout << arr[j] << endl;
    }
}