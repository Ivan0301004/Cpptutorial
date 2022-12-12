#include <iostream>

void pointer() {
  int x{7};
  int *ptr{&x};
  if (ptr)
    std::cout << "ptr NO Null : " << *ptr << '\n';
  else
    std::cout << "Do nothing \n";
  // ! siemopre que vallamos a declarar un puntero en blanco, lo vamos a
  // inicializar con nullptr como argumento
}

int main() {
  // ? punteros se converten implicitamente a FALSE si son NO Null y a TRUE si
  // son NULL
  int x{8};
  int *ptr{&x};
  if (ptr)
    std::cout << "ptr NO es Null\n";
  else
    std::cout << "ptr  Null\n";

  int *nullPtr{nullptr}; // * puntero declarado como nulo
  std::cout << "null ptr es : "
            << (nullPtr ? "NO Null\n" : "Null\n"); // ternary operator
  pointer();

  return 0;
}
