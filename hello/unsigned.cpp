#include <iostream>

int main()
{
  double cero{0.0};
  double posf{5.0 / cero};
  std::cout << posf << '\n';

  double negative{-5.0 / cero};
  std::cout << negative << '\n';
  double nan{cero / cero};
  std::cout << nan << '\n';
  std::cout << 0x13 << '\n'; // numeros hexadecimales 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
  std::cout << 117 << '\n';  // numeros octales 0, 1, 2, 3 ,4, 5, 6, 7

  return 0;
}