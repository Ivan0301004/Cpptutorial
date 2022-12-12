#include <iostream>

// int main()
// {
//    int ask;
//    int i{1};
//    int result{};
//    std::cout << "Ingressa un valor : ";
//    std::cin >> ask;

//    while (i < 10){
//       i++;
//       result = i * ask;
//       std::cout << ask << " x " << i << " = " << result << '\n';
//    }

//    return 0;
//}

int main() {
  for (int i = 2; i < 100; i++)
    for (int j = 2; j <= i; j++) {
      if (i % j == 0)
        break;
      else if (i == j + 1)
        std::cout << i << "\n";
    }

  return 0;
}
