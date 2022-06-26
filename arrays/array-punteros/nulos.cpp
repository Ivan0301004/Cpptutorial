#include <iostream>

void func(int* x){

}


int main()
{
   int* ptr{nullptr}; // ? puntero nulo inicializado
   // * la mejor pratica para inicializar un puntero nulo es pasarle como arguento la palabra clave
   // ! Nullptr

   int y{89};
   ptr = &y;
   std::cout << *ptr << '\n';
   ptr = nullptr;
   std::cout << ptr << '\n';
   func(nullptr);
   
   
    
   
   
   
   return 0;
}