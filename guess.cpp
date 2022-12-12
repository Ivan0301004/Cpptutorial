#include <iostream>
#include <string>

int main() {
  std::string word = "Fatima Rodriguez Carrillo";
  std::string guess = "";
  // int i = 1;
  for (int i = 1; i <= 10; ++i) {
    std::cout << i << " Word : ";
    std::getline(std::cin >> std::ws, guess);
    if (guess != word) {
      continue;
    } else
      break;
  }
  if (guess == word)
    std::cout << "You Win\n\n";
  else
    std::cout << "You Lose\n\n";

  return 0;
}

void adivina() {

  std::string reach = "Fatima";
  std::string guess = "";
  int attempts{10}, count{1};
  bool close{false};

  while (guess != reach && !close) {
    if (count <= attempts) {
      std::cout << count << " Word : ";
      std::cin >> guess;
      ++count;
    } else
      close = true;
  }
  if (close)
    std::cout << "You Lose\n";
  else
    std::cout << "You Win\n";
}
