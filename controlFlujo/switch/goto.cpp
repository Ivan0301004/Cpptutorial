#include <iostream>
#include <cmath>

int main()
{
   double x{};
again:
   std::cout << "Escribe un numero no negativo : ";
   std::cin >> x;

   if (x < 0.0)
      goto again; // la declaracion GOTO es para repetir una instruccion en caso de ser falsa,  se va a repetir infinitamente
      // hasta que la condicion sea verdadera, una vez sea verdadera, GOTO finaliza y a su vez tambien el programa
   std::cout << "La raiz cuadrada de " << x << " es : " << sqrt(x) << '\n';  

   return 0;
}