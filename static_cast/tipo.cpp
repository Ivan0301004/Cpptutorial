#include <iostream>

void imprimir(int x){
   std::cout << x << '\n';
}

void imprimird(double y){
   std::cout << y << '\n';
}

// para tener un codigo seguro , hay que inicializar simpre on {} para conversar bien lo valopres
// y que no se pierda informacion

// < para hacer una conversionde tipo explicita utlizaremos
// < static_cast <tipo > donde dentro de (<>) pondremos el tipo de dato al que convertiremos
// < como double, char, int,  float


int main(){
   int er(7.87);

   imprimir({4});
   imprimird({8.9});
   imprimir(static_cast<int>(er));
   return 0;
}


