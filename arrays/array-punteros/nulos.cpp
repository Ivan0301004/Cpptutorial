#include <iostream>

// void func(int* x){}

// }

int main() {
  int *ptr{nullptr}; // ? puntero nulo inicializado
  // * la mejor pratica para inicializar un puntero nulo es pasarle como
  // arguento la palabra clave ! Nullptr

  int edad{18};
  int *puntero{&edad};
  std::cout << "Puntero con valor de edad : " << *puntero << '\n';

  int y{89};
  ptr = &y;
  std::cout << "Impresion de un punetro nulo despues de pasarle un valor : "
            << *ptr << '\n';
  ptr = nullptr;
  std::cout << "Puntero null sin valor : " << ptr << '\n';
  // func(nullptr);

  return 0;
}