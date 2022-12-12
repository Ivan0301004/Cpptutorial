#include "constantes.h"
#include <cmath>
#include <iostream>

int main() {

  std::cout << "Escribe un radio : ";
  double radio{};
  std::cin >> radio;

  std::cout << "El perimetro de tu circulo es : "
            << 2.0 * radio * constantes::pi << '\n';
  std::cout << "El area de tu circulo es : " << constantes::pi * pow(radio, 2)
            << '\n';
  return 0;
}
