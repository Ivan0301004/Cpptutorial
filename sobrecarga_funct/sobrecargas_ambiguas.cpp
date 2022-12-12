#include <iostream>
#include <typeinfo>

void print(const int y) { std::cout << y << '\n'; }

void print(double y) { std::cout << y << '\n'; }

int main() {

  int o{2};
  print(o);
  std::cout << "ID : " << typeid(print(o)).name() << '\n';
  print(4);
  print(9.9);
  print(4.0f);
  print('a');
  print(true);

  return 0;
}
