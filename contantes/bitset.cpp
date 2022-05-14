#include <bitset>
#include <iostream>

int main(){

   std::bitset<8> var{0b11000101};
   std::bitset<8> var3{0xC5};
   int var4{0b11000101};

   
   std::cout << std::dec << var3 << '\n';
   std::cout << std::dec << 0b11000101 << '\n';
   std::cout << var << " And " << var3 << '\n';
   std::cout << std::bitset<8>{0b1110'1011} << '\n'; 

   return 0;
}