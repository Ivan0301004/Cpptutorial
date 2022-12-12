#include <iostream>

int main() {
  int arr[4]{1, 2, 3, 4};

  std::cout << "Array decaido : " << arr << '\n';
  std::cout << "Direccion del 0 ele : " << &arr[0]
            << '\n'; // el signo amperson solo devuelve la direccion en
  // en memoria del primer elemento del array

  return 0;
}