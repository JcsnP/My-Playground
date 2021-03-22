#include <iostream>
using namespace std;

// i will use auto
auto greeting(auto name){
    cout << name;
}

int main(){
    greeting("James"); // James
    greeting(3200); // 3200
}
