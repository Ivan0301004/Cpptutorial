#include <iostream>
#include <string>

int main()
{
   std::cout << "Ingresa tu nombre : \U0001F30D";
   std::string name{};
   std::getline(std::cin >> std::ws, name);

   std::string greeting = "Hello, " + name + " !";

   std::string spaces(greeting.size(), ' ');
   std::string second = "* " + spaces + " *";

   std::string first(second.size(), '*');

   std::cout << '\n';
   std::cout << first << '\n';
   std::cout << second << '\n';
   std::cout << "* " << greeting << " *" << '\n';
   std::cout << second << '\n';
   std::cout << first << '\n';
   
   
   return 0;
}

