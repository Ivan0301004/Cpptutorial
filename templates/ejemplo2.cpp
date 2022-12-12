#include <iostream>
using std::cout;

template <typename T, typename U> T mayor(T x, U r) { return (x > r) ? x : r; }

auto menor(auto y, auto o, auto t) { // manera de declara funcion en C++20
  return (y < o && y < t) ? y : (t < y && t < o) ? t : o; // ternary operator
}

int main() {
  cout << mayor<int, double>(3.1, 3) << '\n';
  cout << mayor(static_cast<double>(8), 9.8) << '\n';
  cout << "y : " << menor(1.2, 2.3, 4.2) << '\n';
  cout << "o : " << menor(3.4, 2.3, 4.2) << '\n';
  cout << "t : " << menor(3.4, 2.3, 0.8) << '\n';

  return 0;
}
