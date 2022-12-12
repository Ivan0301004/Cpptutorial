#include <iostream>

int main() {

  int notas[]{10, 9, 8, 10, 8, 7}; // array de notas
  // int numStu{static_cast<int>(std::size(notas))}; // requiere C++17
  const int numStu{sizeof(notas) / sizeof(notas[0])};
  // forma de saber el tamano de una array sin usar variantes de C++17

  int avg{0}; // var para avg en el loop

  for (int st{0}; st < numStu; ++st) {
    avg += notas[st];
  }
  auto media{static_cast<double>(avg) / numStu};
  std::cout << media << '\n';

  // JetBrainsMono Nerd Font, Medium
  return 0;
}
