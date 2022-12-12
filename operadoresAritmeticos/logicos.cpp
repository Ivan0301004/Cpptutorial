#include <iostream>

int main() {
  // int x{5}, y{6};

  // if  (!(x > y)){
  //    std::cout << x << " es mayor que " << y << '\n';
  // }else
  //    std::cout << y << " es menor que " << x << '\n';

  // int x {20};

  // bool grande { x < 10};
  //    if (!grande){
  //       std::cout << "Correcto\n";
  //    }else
  //     std::cout << "Error\n";

  // std::cout << "Ingresa un valor : ";
  // int num{};
  // std::cin >> num;

  // if (num == 1 || num == 2 || num == 3){
  //    std::cout << "Has elegigo uno de los siguientes numeros 1 o 2 o 3 \n";
  // }else
  //    std::cout << "Has elejido numeros difererntes a 1, 2 y 3\n";

  std::cout << "Escribe un numero : ";
  int nume{};
  std::cin >> nume;

  if (nume > 7 && nume < 30 && nume != 17 ||
      nume % 3 == 0 !=
          (nume ==
           40)) { // si introduzco un numero mayor a 30 pero es par es true
    std::cout << "Buena eleccion\n";
  } else
    std::cout << "Mala eleccion\n";

  return 0;
}
