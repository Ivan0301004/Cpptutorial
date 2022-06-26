#include <iostream>
#include <string_view>
#include <string>

std::string preguntarNombre()
{
   std::cout << "Nombre : ";
   std::string nombre;
   std::cin >> nombre;

   std::string name{nombre};
   std::cout << "Hola " << name << '\n';

   return name;
}

void print(std::string_view simp)
{
   std::cout << simp << '\n';
}

void re(std::string otro)
{
   std::cout << otro << '\n';
}

int main()
{
   std::string_view otro{"Hello"};
   print(otro);
   re(static_cast<std::string>(otro));
   std::string_view hola{preguntarNombre()};
   std::cout << "Tu nombre es " << hola << '\n';
   return 0;
}
