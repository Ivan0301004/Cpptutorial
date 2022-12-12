#include <iostream>

int main() {
  int arr[5]{3, 2, 1, 4, 3};
  int arr3[5]{1, 2, 3, 4, 2};
  std::cout << *arr << '\n'; // imprime 3
  std::cout << "Condicion : " << (&arr < &arr3) << '\n';
  // conversion implicita de un array a un puntero
  int *ptr{arr};
  std::cout << *ptr << '\n'; // imprime 3

  int rry[4]{1, 2, 3, 4};
  std::cout << sizeof(rry) << '\n';

  int *pun{rry};
  std::cout << sizeof(pun) << '\n';
  std::cout << *pun << '\n';

  return 0;
}
