#include <iostream>

// ? definiciones de variables globales internas

static int y;      // variable gloabal sin inicializar (0)
static int u { 1 } // varibale global interna inicializada

const ke{3};       // varibale  constante global interna inicializada
constexpr ka { 1 } // varaible global interna constexpr incializada

static int var(int x, int y); // funcion interna definida

// ! FUNCION MAIN

int main() {

  std::cout << "variable interna : " << var(10, 3) << '\n';

  return 0;
}
