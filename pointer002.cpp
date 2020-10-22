#include <iostream>
using namespace std;

int pointer(int *a){
  *a = 10;
}

int main(){
  int number = 10;
  pointer(&number);
  
  cout << "Value: " << number;
}
