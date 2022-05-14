#include <iostream>
void greet()
{
  std::string name;
  std::cout << "Enter your name : ";
  // ! std::cin.ignore('\n'); tambien funciona para ignorar el salto de linea o espacios en blanco
  std::getline(std::cin >> std::ws, name);
  std::cout << "Hello " << name << " nice to meet you \n";
}


