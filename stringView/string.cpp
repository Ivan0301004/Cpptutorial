#include <iostream>
#include <string_view>

int main() {
  std::string_view texto{"Hello Fatima\n"};
  std::string_view oher{texto};
  std::string_view otro{oher};

  std::cout << texto << " " << oher << " " << otro;

  return 0;
}
