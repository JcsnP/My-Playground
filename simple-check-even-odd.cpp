#include <bits/stdc++.h>

int main() {
  int n;

  std::cout << "Please input number: ";
  std::cin >> n;

  std::cout << ((n % 2 == 0 && n >= 2)? "Even" : "Odd");
}
