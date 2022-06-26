#include <iostream>
#include <string.h>

void imprimir(std::string& y){
   std::cout << y << '\n';
}
void print(std::string y){
   std::cout << y << '\n';
}



int main(){
   std::string x{"Hello There"};
   imprimir(x);
   print(x);


   return 0;
}
