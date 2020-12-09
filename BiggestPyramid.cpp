#include <iostream>

void pyramid(int row){
  for(int i = 0, f = 1; i < row; i++, f += 2){
    for(int j = row - 1; j > i; j--){
      std::cout << " ";
    }
    for(int k = 0; k < f; k++){
      std::cout << "*";
    }
    std::cout << std::endl;
  } 
}

int main() {
  int row;
  std::cout << "Please input row: ";
  std::cin >> row;

  //call function
  pyramid(row);
}

/*
   *
  ***
 *****
*/
