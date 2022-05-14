#include <iostream>

int main(){
   int var{5};
   std::cout << var-var << '\n';

   int r {20};
   int t{3};

   std::cout << static_cast<double>(r) / static_cast<double>(t) << '\n';
   std::cout << r / t << '\n';
   
   return 0;
}