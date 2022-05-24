#pragma once
#ifndef CONSTANTES_H
#define CONSTANTES_H

// define tu propio namespace para contener las contantes

// namespace constantes
// {
//    // contantes tiene vinulacion interna predeterminada

//    //  esta es la nueva forma de hacer una variable constante global,
//    //   solo usando extern const en vez de constexpr ya que estas no admiten declaraciones anticipadas

//    //  como las variables reales estan desntro de un namespace,
//    //  las decalraciones anticipoadas tambein deben de estar dentro de un namespace

//    extern const double pi;
//    extern const double e;
//    extern const double gravedad; // m/s^2,  la gravedad esligera en este planeta

// }

// < La nueva forma de hacer variables externas es la siguiente

namespace constantes
{
   inline constexpr double pi{3.141592};
   inline constexpr double e{2.71828};
   inline constexpr double gravedad{9.2}; // m/s^2,  la gravedad esligera en este planeta
}
#endif
