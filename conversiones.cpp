#include <cmath>
#include <iostream>

int main() {
  int x1{}, x2{}, x3{};
  double a, b, c;
  std::cout << "Ingresa el valor de a : ";
  std::cin >> a;
  std::cout << "Ingresa el valor de b : ";
  std::cin >> b;
  std::cout << "Ingresa el valor de c : ";
  std::cin >> c;

  x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
  x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

  std::cout << "El valor de X1 es : " << x1 << '\n';
  std::cout << "El valor de X2 es : " << x2 << '\n';

  return 0;
}
