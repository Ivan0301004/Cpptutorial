#include <iostream>

void addOne(int&     y)
{
   ++y;
}

void print(const int& u)
{
   std::cout << u << '\n';
}

#define isSmall(T) (sizeof(T) <= 2 * sizeof(void*)) // ! Formula para saber que tipo de dato es costoso de pasar por
// ! referencia

struct S
{
   double a, b, c;
};

int main()
{
   int x{4};
   std::cout << x << '\n';
   addOne(x);
   std::cout << x << '\n';
   addOne(x);
   std::cout << x << '\n';
   print(x);

   std::cout << std::boolalpha;
   std::cout << "Es costoso? " << isSmall(int) << '\n';
   std::cout << "Es costoso? " << isSmall(double) << '\n';
   std::cout << "Es costoso? " << isSmall(S) << '\n';

   return 0;
}