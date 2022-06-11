#include <iostream>
#include <iomanip>

int main()
{
   // int i { 43000};
   // char c = i;
   // std::cout << static_cast<int>(c) << "\n";
   // std::cout << i % 255 << "\n";
   // std::cout << 3 + 2.5 << "\n"; 
   // int y { 2};
   // int x {(y<10)? 1:0};
   // if (x == 0)
   //    std::cout << "False\n";
   // else
   //    std::cout << "True\n";
   for (int i=1;i<10;++i)
   {

   std::cout<<"Numero: ";
   float num{};
   std::cin>>num;
   int mayor{(num>=6)? 1:0};
   if(mayor)
      std::cout<<"Aprobado\n";
   else 
      std::cout<<"Reprobado\n";
   }

   return 0;
}

