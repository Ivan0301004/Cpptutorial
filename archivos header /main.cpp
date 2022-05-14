#include <iostream>
#include <string>
//#include "sumar.h"

void greet()
{
  char name[50];
  std::cout << "Enter your name : ";
  std::cin.getline(name, 50);
  std::cout << "Hello " << name << " nice to meet you \n";
}

int main(){
  std::cout << "Aqui accedemos e imprimos la funcion del archivo header : \n";
  // std::cout << "LA suma de dos numeros es de : " << sumar(9,8) << '\n';
  // std::cout << "La division de dos numeros es de : " << divide(9,2) << '\n';
  greet();
  
  return 0;
}


