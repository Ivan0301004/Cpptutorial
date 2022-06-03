#include <iostream>

int main()
{
   // conversion explicita estilo C
   int x{10};
   int y{8};
   double b{(double) x / y }; // primer modo de conversion esxplicita esstilo C
   double f{double (x) / y}; // segundo modo de conversion explicita estilo C
   std::cout << "Primer modo estilo C: " << b << '\n';
   std::cout << "Segundo modo estilo C: " << f << '\n';
   //< no es muy recomendable hacer la conversion explicita estilo C, ya que puede causar errores indetectables

   //* static cast 

   



   return 0;
}