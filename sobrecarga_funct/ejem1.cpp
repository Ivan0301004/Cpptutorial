#include <iostream>

int sumar(int y, int x) { return y + x; }
double sumar(double y, double x) { return y + x; }
int sumar(int y, int x, int u) { return y + x + u; }
double sumar(double y, int x) { return y + x; }
double sumar(int y, double x) { return y + x; }

bool isZero(int num) {
  std::cout << std::boolalpha;
  return num <= 0;
}

int main() {
  std::cout << isZero(-1) << '\n';

  std::cout << sumar(1, 3.6) << '\n';
  return 0;
}