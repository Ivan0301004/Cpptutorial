#include <iostream>

auto sumar(auto y, auto x){
   return y + x;
}

auto ejemplo(bool b){
   
   if (b)
      return static_cast<double>(5);
   else
      return 6.8;
}

int main(){

   std::cout<<ejemplo(true)<<'\n';
   std::cout<<sumar(9, 8.9)<<'\n';

   return 0;
}