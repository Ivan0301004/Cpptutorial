#include <iostream>

int numero{5};

void messi() { std::cout << "Valor de messi : " << numero << '\n'; }

int main() {

  int numero{18};
  ++numero; // < Incrementa el valor de la variable local

  (::numero) += 3; // * Incrementra el valor de la variable GLOBAL (::)

  std::cout << "Valor de la variable global : " << ::numero
            << '\n'; // * :: esto es para impimir la varibale global
  // * y tambien para cambiar su valor dentro de un bloque  (::var);
  std::cout << "valor de la variable local : " << numero << '\n';
  messi();

  return 0;
}

// < SIEMPRE EVITAR EL SOMBREADO U OCULTACIONM DE VARIABLES