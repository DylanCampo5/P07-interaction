#include <iostream>
#include <bitset>

int main() {
  int x;
  std::cin >> x;
  std::cout << std::hex << x << '\n';
  std::bitset<8> bin1{0x};
  std::cout << bin1 << '\n';

  return 0;
}
