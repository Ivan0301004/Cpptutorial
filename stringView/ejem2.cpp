#include <iostream>
#include <string_view>
#include <iomanip>

int main()
{

   std::string_view str{"Im watching a car"};

   std::cout << str.length() << '\n';
   std::cout << str.substr(0, str.find(" ")) << '\n';
   std::cout << (str == "Im watching a car") << '\n';



   return 0;
}