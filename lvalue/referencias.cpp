#include <iostream>

int main(){ 
   int c{34};
   std::cout << c << '\n';
   {
      int& ref {c}; // declaracion de referencia lvalue
      ref = 78; //  ref es alias de C por lo que C ahora vale 78
      std::cout << ref << '\n'; // imprimor la referencia
      ref = 89;
      std::cout << ref << '\n';
      c = 9;
      std::cout << c << '\n';
   }
   std::cout << c << '\n';
   c = 90;
   std::cout << c << '\n'; // como  cambiamos el valor de la variable C con una referencia
   // ahora variable C vale 78

}
return 0;

