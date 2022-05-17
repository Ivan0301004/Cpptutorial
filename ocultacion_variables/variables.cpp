#include <iostream>

int main()
{

   int contenidos{5};
   {
      std::cout << contenidos    << '\n';
      contenidos = 10;
      std::cout << contenidos << '\n';
      contenidos = 20;
      std::cout << contenidos << '\n';
   }
   std::cout << contenidos << '\n';
   
   
   return 0;
}

