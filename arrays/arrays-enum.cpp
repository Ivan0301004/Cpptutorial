#include <iostream>
#include <iterator>
using std::size;

void pasarValor(int valor) { valor = 99; }

void pasarArray(int primo[5]) {
  primo[0] = 1;
  primo[1] = 1;
  primo[2] = 2;
  primo[3] = 3;
  primo[4] = 5;
}

int main() {

  int valor{1};
  std::cout << "Valor " << valor << '\n';
  pasarValor(valor);
  std::cout << "Ya con valor : " << valor << '\n';

  int primo[5]{2, 5, 4, 7, 12};
  std::cout << "Antes de pasar array \n";
  for (int i = 0; i < 4; ++i) {
    std::cout << primo[i] << " ";
  }

  std::cout << "\nDespues de pasar array \n";
  pasarArray(primo);
  for (int j = 0; j <= size(primo); ++j) {
    std::cout << primo[j] << " ";
  }

  return 0;
}
