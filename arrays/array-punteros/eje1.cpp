#include <iostream>

int main() {

  int arr[4]{3, 4, 5, 2};
  std::cout << *arr << "\n"; // *arr imprime el primer elemento del array, que
                             // es al que apunta
  // return 3
  char name[]{"Fatima"};
  std::cout << *name << '\n'; // *name imprime el primer elemento del array que
                              // es al aque apunta
  // return F

  return 0;
}