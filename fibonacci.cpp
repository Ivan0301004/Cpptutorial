#include <iostream>

int fibonacci(int n)
{
   if (n == 1)
   {
      return 1;
   }
   else if (n == 0)
   {
      return 0;
   }
   return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibo(){
   int fin{1}, fin_2{0}, suma{};


   for (int i = 0; i <= 15; ++i){
      std::cout << fin_2 << " ";
      suma = fin + fin_2;
      fin_2 = fin;
      fin = suma;
      
   }
   std::cout << '\n';
}

int main()
{  
   fibo();
   std::cout << fibonacci(15) << '\n';
   
   return 0;
}


