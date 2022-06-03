#include <iostream>


int main()
{
   // int result{1};
   // int expo{4}, base{3};
   
   // for (int i = 0; i < expo; ++i)
   // {
   //    result *= base;
   // }

   for (int x{0}, y{9}; x < 10; x++, y--)
   {
      std::cout << x << " " << y << '\n';
      
   }
   //std::cout << result << '\n';
   return 0;
}