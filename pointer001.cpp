#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int number1 = 5, number2 = 10;
  
  //declare pointer
  int *pointer1, *pointer2;
  pointer1 = &number1;
  pointer2 = &number2;
  
  swap(pointer1, pointer2);
  
  cout << number1 << "\t" << number2 << endl;
}
