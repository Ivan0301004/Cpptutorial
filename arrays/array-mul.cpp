#include <iostream>

int main() {

  int arr[2][3] = {// declaracion de array bidimensional
                   {1, 2, 3},
                   {4, 5, 6}};

  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}
