#include <iostream>

int main()
{
   std::cout << "Age : ";
   int age{};
   std::cin >> age;
   if (age < 18)
      std::cout << "Little\n";
   else
   {
      std::cout << "Bigger\n";
      std::cout << "Son of a bitch\n"
   }

   return 0;
}
