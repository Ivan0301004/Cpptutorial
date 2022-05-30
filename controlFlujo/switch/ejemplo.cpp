#include <iostream>

int main()
{
   switch(2){
      case 1 :
         std::cout << "Hola\n";
      case 2 :
         std::cout << "Hello\n";
         [[fallthrough]]; // funcion para dar a entender al compilador que vamos a ejecuatar los siguientes cases
         // aunque no se cumpla la condicoi de estas
      case 3 : 
         std::cout << "Bonjour\n";
      case 4 : 
         std::cout << "Ni hao\n";
      case 5 :
         std::cout << "Aloha\n";
      default :
         std::cout << "France\n";
   }

   return 0;
}


