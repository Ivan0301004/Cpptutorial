#include <iostream>

int main()
{
   int externo{1};
   while(externo <= 5)
   {  
      int interno{1};
      while(interno <= externo)
      {  
         std::cout << interno << ' ';
         ++interno;
      }
      std::cout << '\n';
      ++externo;
   }

   return 0;
}


