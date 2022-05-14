#include <iostream>

int main()
{
   std::cout << true << '\n';
   std::cout << !true << '\n';

   bool b{false};
   std::cout << b << '\n';
   std::cout << !b << '\n';

   bool g{}; /* esta inicializacion solo puede recibir valores 1 o 0 o TRUE OR FALSE.
              Cualquier numero entero ya sea positivo o negativo sera TRUE ( 1 )
              de lo contraio se evaluara a 0 ( FALSE )
              *Esta inicializacion no puede recibir valores mayores o  menores a 1 y 0
              ! para poder ingresar numeros mayores o menores a 1 y 0 es necesario
              ! inicializar la variable con el signo igual y no con llaves
              ! bool g = 2;
              */

   std::cout << "Ingresa un valor bool : ";
   std::cin >> g;
   std::cout << "El valor es (sin boolalpha): " << g << '\n';

   bool y{};
   std::cout << std::boolalpha; // ! Si imprimimos un valor boolean con std::boolalpha dehabilitaremos 1 y 0
   std::cout << "Ingresa otro valor bool : ";
   std::cin >> y;
   std::cout << "El valor es (con boolalpha): " << y << '\n';



   

   return 0;
}
