#include <iostream>

int main() {
  int n;

  std::cout << "Please input number\n";
  std::cin >> n;

  (n % 2 == 0 && n >= 2)? std::cout << "Even" : std::cout << "Odd";
}
