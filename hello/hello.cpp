#include <iostream>
#include <string>

void greet();
void days_of_the_week();
void area_of_a_circle();

int main(void) {
  char option;
  std::cout << "Choose one of the following options : \n"
               "a) Greetings\n"
               "b) Display the days of the week\n"
               "c) Calculate the area of a circle\n"
               "Choice : ";
  std::cin >> option;
  if (option == 'a') {
    greet();
  } else if (option == 'b') {
    days_of_the_week();
  } else if (option == 'c') {
    area_of_a_circle();
  } else
    std::cout << "Carcater incorrecto. Intenato de nuevo\n";
  return 0;
}

void greet() {
  std::string name;
  std::cout << "Enter your name : ";

  // ! std::cin.ignore('\n'); tambien funciona para ignorar el salto de linea o
  // espacios en blanco

  std::getline(std::cin >> std::ws, name);
  std::cout << "Hello " << name << " nice to meet you \n";
}

void days_of_the_week() {
  std::cout << "Monday"
               "Tuesday"
               "Wednesday"
               "Thursday"
               "Friday"
               "Saturday"
               "Sunday";
}

void area_of_a_circle() {
  float radius{}, pi{3.14159};
  std::cout << "Enter the radius measurement : ";
  std::cin >> radius;
  std::cout << "The area of the circle is : " << (pi * (radius * radius))
            << '\n';
}
