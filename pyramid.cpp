#include <iostream>
//#include "pyramid.cpp"
using namespace std;

void hightolow(int row){
    for(int i = row; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void lowtohigh(int row){
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void test(int row){
    for(int i = 1; i <= row; i++){
        for(int j = row - i; j >= 1; j--){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    test(15);
}
