#include <iostream>
#include <string>

int main(){
   std::cout << "Ingresa tu nombre : ";
   std::string nombre{};

   std::getline(std::cin >> std::ws,nombre) ;
   // ! std::ws ignora los espacios en blanco

   
   std::cout << "Escribe tu edad : ";
   std::string edad{};
   std::cin >> edad;
   std::cout << "tu nombre es " << nombre << " y tu edad es " << edad << '\n';

   return 0;
}


