#include <iostream>
#include <sstream>

bool es_igual(int x, int y) { return (x == y); }

int main() {
  setlocale(LC_ALL, "es_ES. UTF-8");
  std::cout << "Escribe un entero : ";
  int x;
  std::cin >> x;

  int g{134};
  int t{0x86};
  std::cout << t << " Es igual \n";
  std::cout << "hexa " << std::hex << g << '\n';

  std::cout << "Escribe otro entero : ";
  int y;
  std::cin >> y;
  std::cout << std::boolalpha;

  std::cout << " " << x << " y " << y << " son  iguales? " << (x == y) << '\n';
  std::cout << "Con metodo (es_igual) : " << es_igual(x, y) << '\n';

  return 0;
}