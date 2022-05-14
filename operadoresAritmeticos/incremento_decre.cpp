#include <iostream>


int main(){
   int x{8};
   // int y { ++x};
   // int r {10};
   // int u {r++};

   //int joya{x + ++x};
   int helo{++x };
   int var{++x};
   //std::cout << joya <<  '\n';
   std::cout << helo << " " << var << '\n';

   // std::cout << x << " " << y << '\n';
   // std::cout << "Incremento : " << r << " " << u << '\n';
   return 0;
}