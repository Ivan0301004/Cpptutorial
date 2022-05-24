#include "constantes.h"

namespace constantes
{
   // contantes tiene vinulacion interna predeterminada

   // * esta es la nueva forma de hacer una variable constante global, 
   // * solo usando extern const en vex de constexpr
   // ! Variables reales
   
   extern const double pi{3.141592};
   extern const double e{2.71828};
   extern const double gravedad{9.2}; // m/s^2,  la gravedad esligera en este planeta 

}

