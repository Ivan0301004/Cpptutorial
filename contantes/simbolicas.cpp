#include <iostream>

void print(const int x){
   std::cout <<  x + 3  << '\n';
}


int main(){
   const int hola{0}; // inicializacion de variable constante 
   // ? es la mejor opcion para declara una variable const
   int const hello{0}; // inicializacion de varaible constante,  es menos usada  
   
   // * ============================================================================
   print(6);
   std::cout << "Ingresa tu edad : ";
   int edad{};
   std::cin >> edad;

   const int edad_usuario{edad};

   // < la variablke edad es una variable normal,   pero la variable edad_usuario es constante y no se puede cambiar


   return 0;
}