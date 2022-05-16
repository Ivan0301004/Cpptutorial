#include <iostream>

int main(){

   int i{10};
   int64_t suma{1};

   do{

      std::cout << suma << '\n';
      suma *= i;
      ++i;
   }while( i <= 19);


   return 0;
}


