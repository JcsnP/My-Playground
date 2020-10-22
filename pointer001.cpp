#include <iostream>
using namespaces std;

int swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = *a;
}

int main(){
  int number1, number2;
  
  cin >> number 1 >> number 2;
  
  //declare pointer
  int *pointer1, *pointer2;
  pointer1 = &number1;
  pointer2 = &number2;
  
  swap(pointer1, pointer2);
  
  cout << number1 << "\t" number2 << endl;
}
