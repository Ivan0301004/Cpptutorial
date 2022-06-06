#include <iostream>
#include <string>
#include <string_view>


int main(){
   using namespace std::literals; // acceso a sufijos "s" y "sv"
                                 // una de las poquisimas ecepciones para "using"

   auto s{"hola mundo"}; // literal char const *, o sea un puntero
   std::cout<<"s : "<<typeid(s).name()<<'\n';


   auto s1{"gool"s}; // es un literal "std::string"
   // asi que se deducira como un "std::string"

   auto s2 {"Fatima"sv}; // es un literal "std::string_view"
   // asi que se deducira como un lietral "std::string_view"

   std::cout<<"s1 : "<<typeid(s1).name()<<'\n';
   std::cout<<"s2 : "<<typeid(s1).name()<<'\n';

   return 0;
}