#include <iostream>

int cinco(){
   return 5;
}

int main(){

   int x{5}; // numero 5 es Rvalue
   const double e{6.7}; // numero 6.7 es rvalue
   std::cout << x << '\n'; // x es lvalue modificable 
   std::cout << e << '\n'; // e es lvalue no modificable ya que es const
   std::cout << cinco() << '\n'; // es rvalue (devuelto por valor)
   std::cout << 3+6 << '\n'; // es una expresion rvalue
   std::cout << static_cast<int>(e) << '\n'; // variable "e" a un int rvalue

   int rf{45}; // variable lvalue
   std::cout << rf << '\n';
   rf = 34; // variable rvalue
   std::cout << rf << '\n';




   

   return 0;
}