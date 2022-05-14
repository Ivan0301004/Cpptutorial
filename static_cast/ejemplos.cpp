#include <iostream>
#include <cstdint>

int main()
{
   char g{98};
   std::int8_t hola {97}; // equal to character char
   std::int16_t ke (5.6);
   std::int32_t num {45435449};
   std::int64_t lon {443141592653589454};
  
  
   /*
   ! int16_t is equal to type short
   * int32_t is equal to int
   < hola que tal wey asies de chingo rabajar con esto solcores
   ? int64_y is equal to type long long
   */


   double x (10.45);
   int y ((int)x);
   y = int(x);

   std::cout << y << '\n';
   std::cout << lon << '\n';
   std::cout << num << '\n';
   std::cout << static_cast<int>(ke) << '\n';
   std::cout << hola << '\n';
   std::cout << g << " es igual a : " << static_cast<int>(g) << '\n';


   return 0;
}
