#include <iostream>

int main(){
   std::cout << "Escribe un caracter : \a";

   char c{};
   std::cin >> c ;
   std::cout << "Has escrito : " << c << '\n';
   std::cin >> c ;
   std::cout << "Has escrito : " << c << "\n\a"; 

   
   return 0;
}