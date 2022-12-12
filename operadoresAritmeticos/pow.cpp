#include <cstdint>
#include <iostream>

std::int_fast64_t powint(int base, int expo) {
  std::int64_t result{1};
  while (expo) {
    if (expo & 1) {
      result *= base;
    }
    expo >>= 1;
    base *= base;
  }
  return result;
}

int main() {
  int num, num2;
  std::cout << "Introduce dos numeros : ";
  std::cin >> num >> num2;
  std::cout << "La potencia es : " << powint(num, num2) << '\n';
  return 0;
}
