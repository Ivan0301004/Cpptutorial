#include <iostream>
#include "resta.h"
#include "suma.h"

int main()
{
   std::cout << resta::hazAlgo(9, 5) << '\n';
   std::cout << suma::hazAlgo(5, 6) << '\n';
   std::cout << mathescue::e << '\n';
   std::cout << mathescue::pi << '\n';
   char k[100] = "Hola yo soy un namespace anidado \n";
   std::cout << ani::hola::nombre(k) << '\n';
 
 
   return 0;
}





