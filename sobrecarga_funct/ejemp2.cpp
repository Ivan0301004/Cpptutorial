#include <iostream>
#include <string>
#include <vector>
#include <utility>

// bool  es_duplicado(std::vector<std::pair<std::string, int>> listapares){
//    return false;
// }
using listapares_t = std::vector<std::pair<std::string, int>>;
bool esDuplicado(listapares_t pairlist)
{
   return false;
}

int imprimir(int y)
{
   return y;
}

int imprimir(double y)
{
   return y;
}
// < nopodemos usar const para sobrecargar funciones

int main()
{
   using peso_t = double; // esto es un alias para double
   // std::vector<std::pair<std::string, int>> listapares;
   listapares_t listapares;
   peso_t x = 2.3;
   std::cout << x << '\n';
   std::cout << imprimir(8) << '\n';

   return 0;
}