#include <iostream>
using std::cin;
using std::cout;

template <typename T> T mayor(T y, T x) { return (y > x) ? y : x; }

template <class U> U mod(U i, U o) { return i % o; }

int main() {

  cout << "The greater is : " << mayor<int>(7.4, 8.1) << '\n';
  cout << "The modulos is : " << mod<int>(9, 2) << '\n';

  return 0;
}
