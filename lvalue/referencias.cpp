#include <iostream>

int main()
{
   int c{34}; // ? varible "C" con valor 34
   int nuevo{12};
   std::cout << "Valor orginal de C : " << c << '\n'; // impresion de variable "c"

   { // ! nuevo bloque
      int& ref{c};
      std::cout << "Ref = c : " << ref << '\n';                  // declaracion de referencia lvalue
      ref = 78;                                                  //  ref es alias de C por lo que C ahora vale 78
      std::cout << "Cambiamos valor de ref a : " << ref << '\n'; // imprimir la referencia
      ref = nuevo;
      std::cout << nuevo << '\n';
      std::cout << "valor de c : " << c << '\n';

      // ! fin del bloque
   }

   // std::cout << "Ref fuera del bloque : " << ref << '\n'; Ref no puede imprimirse porque no esta declarado dentro del bloque
   anterior


   std::cout << "Valor de C actual : " << c << '\n';
   c = 90;
   std::cout << "Valor de C cambiado directamete : " << c << '\n'; // como  cambiamos el valor de la variable C con una referencia
   // ahora variable C vale 78
   return 0;

}


