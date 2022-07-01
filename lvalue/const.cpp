#include <iostream>

// Referencias Lvalue Const 

int main(){
   int y{8};
   const int& k{y};
   int g{5};
   int& er{g};
   // si queremos cambiar el valor de la referencia, no se puede ya que es constante
   // *k = 90; al intentar asignarle otro valor a k el compilador se quejara
   // ? pero si podemos cambiarle el valor a la variable referida
   y = 67;
   std::cout << y << '\n';
   y = 234;
   std::cout << y << '\n';
   y = 89;
   
   er = 56;
   std::cout << er << '\n';
   er = 123;
   std::cout << er << '\n';
   
   
   // ! igual podemos crear una referencia sin un objeto a referir
   const int& p{6};
   std::cout << "No ref : " << p << '\n';


   return 0;
}