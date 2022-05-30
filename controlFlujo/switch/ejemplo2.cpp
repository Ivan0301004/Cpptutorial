#include <iostream>
#include <iomanip>

bool isVowel(char c)
{
   switch(c)
   {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
         return true;
      default :
         return false;
   }
}

int main()
{
   char user;
   std::cin >> user;
   //std::cout << isVowel(user);
   if (isVowel(user))
      std::cout << "Is vowel\n";
   else
      std::cout << "It's not a vowel\n";
   return 0;
}


