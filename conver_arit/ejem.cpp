#include <iostream>
#include <typeinfo>

int main() {
  int i{9};
  double d{3.5};
  std::cout << typeid(i + d).name() << ' ' << i + d << "\n";

  short s1{2};
  short s2{4};
  std::cout << typeid(s1 + s2).name() << " " << s1 + s2 << '\n';

  return 0;
}