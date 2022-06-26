#include <iostream>

int main()
{
   int x{4};
   int y{9};
   int& ref{x};// referencia de variable con el simbolo & ampersand
       
   ref=y; 
   std::cout << ref << '\n';
   std::cout << y << '\n'; 

   int t{7};
   int* u{&t};
   int** r{&u};
   std::cout << **r << '\n';

   return 0;
}



