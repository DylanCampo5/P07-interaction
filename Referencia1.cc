#include <iostream>

int main() {
  int x;
  std::cin >> x;
  std::cout << x << '\n';
  std::cout << std::hex << x << '\n';
  std::cout << std::oct << x << '\n';
  std::cout << std::dec << x << '\n';

  return 0;
}
