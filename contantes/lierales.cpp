#include <iostream>
#include <typeinfo>
#include <inttypes.h>


int main()
{ 
   // * Impresion de terminos con sufijos, un sifico es para decirle al compilador que tipo de numero es
   // *  el que vamos a imprimir
   double k;
   std::cout << k << '\n';
   std::cout << 5 << '\n';     //  Sin sufijo es tipo Int (predeterminado)
   std::cout << 67u << '\n';   //  Son el sufijo U es un tipo Unsigned Int
   std::cout << 45L << '\n';   //  Con el sufijo L es un  tipo Long
   std::cout << 12.0 << '\n';  // Sin sufijo es un tipo Double (Predeterminado)
   std::cout << 13.0F << '\n'; // Con sufico F es un tioi Float

   std::cout << "numero hexadecimal tiene " << std::dec << 0x3a7f9826 <<  " bits \n";
   std::cout << "numero binario tiene " <<  sizeof(981440550) << " bits\n";
   std::cout << 0x00B3 << '\n';
   int32_t var{981440550};
   std::cout << var <<'\n';
   std::cout << 12'345 << '\n';
   return 0;
}

