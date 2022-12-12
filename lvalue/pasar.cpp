#include <iostream>
#include <string.h>

void imprimir(std::string &y) {
  std::cout << y << '\n'; // ? Funcion con parametro con referencia &
}

void print(std::string y) { // ! Funcion sin referencia
  std::cout << y << '\n';
}

int pedir() {
  int y;
  std::cout << "Numero : ";
  std::cin >> y;

  return y * y;
}

void log(const int &valor) { // ? Parametro const int& para recibir rvalues de
                             // funciones  de lo contrario habra error
  std::cout << "Tu numero al cuadrado es : " << valor << '\n';
}

int main() {
  std::string x{"Hello There"};
  imprimir(x);
  print(x);
  log(pedir());

  return 0;
}
