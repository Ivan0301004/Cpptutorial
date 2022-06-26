#include <iostream>

int main()
{
   // int x {3};
   // std::cout << x << '\n';
   // std::cout << &x << '\n';

   // std::cout << *(&x) << '\n';

   int x{5};
   int *ptr{&x};
   std::cout << "Puntero  : " << *ptr << '\n';

   int y{*ptr};
   std::cout << std::boolalpha;
   std::cout << "Var Y es igual a (*ptr)? : " << (y == *ptr) << '\n';
   return 0;
   
 }