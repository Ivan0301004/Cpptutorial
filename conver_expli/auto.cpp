#include <iostream>

int sumar(int y, int u) { return y + u; }

int main() {
  // deduccion  de tipos usando "auto"
  auto c{9.0}; // deducira que es un float
  auto o{9};   // deducira que es un integer
  auto t{o};   // deducira que un int ya que la variable o es un int.
  // <auto t{ };
  // las variables auto sin inicializar inicializadas en vacio daran error, ya
  // que requieres un argumeto para deducir que tipo de dato son, de lo
  // contrario el compilador se quejara ? varaibles const con palabra clave auto
  const int y{5}; // variable const

  // *auto q{y};
  // esta definicion de varaible auto eliminara el "const" a la varible pasada
  // como argumento que es "y"

  // ! si queremos que la variable y permanezca CONST, entonces la declararemos
  // de la siguiente forma
  const auto p{y}; // ahora el compilador no se quejara y la variable "y"
                   // seguira como const

  // < =====================
  // variables con referencia &
  int u{4};   // varaible int normal
  int &y{u};  // variable "int" con referencia "int&"
  auto z{y};  // la deduccion "auto" elimina la referencia, entonces el
              // compilador se quejara
  auto &z{y}; // de esta manera la referencia permanece y el compilador no se
              // quejara

  //<=======================

  // Las variables de deduccion auto, tendran algunos beneficios, se hara un
  // pocoo mas facil de leer el codigo, ademas de que el arguemnto que le
  // pongamos lo deducira al tipo que son si declaramos una variable "double" y
  // de argumento le ponemos un "1", este implicitamnete se concvertira a double
  // entonces si nosotros declaramos una varibale deducida con "auto", ejemplo :
  // "auto i {6}" este sera int y no sera convertida a una variable a un tipo de
  // dato deferente

  auto sum{sumar(4, 5)}; // sumar devuelve un INT  asi que el tipo auto
  // deducira que es INT

  return 0;
}