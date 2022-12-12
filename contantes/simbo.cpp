#include <iostream>

void print(const int x) { // x es una constante runtime porque su valor no se
                          // conoce hasta el momento de ejecucion
  std::cout << x << '\n';
}

int main() {

  const int hell{3 +
                 7}; //  esto es un a variable const en timpo de complilacion
  const double hello{8.9 * 4.8}; // Constante en tiempo de compilacion

  // ! Las variables en tiempo de ejecucion deben declararse con  {constexpr} y
  // no con const ! de lo contrario el compilador se quejara

  constexpr double var{(8 + 9) / 3.0};
  std::cout << "Constexpr (var ): " << static_cast<double>(var) << '\n';

  // < Para evitar los numeros magicos es recomendable usar CONSTEXPR

  std::cout << "Ingresa tu edad : ";
  int edad{};
  std::cin >> edad;

  const int edad_user{edad}; // ! edad_user es una constante runtime porque su
                             // valor no se conoce hasta
  std::cout << "Tu edad es : "; // ! el momento de us ejecucion
  print(edad_user);

  return 0;
}