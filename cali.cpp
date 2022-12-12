#include <iostream>
// Programa para calcular con punto decimal el promedio de 3 calificaciones de
// 50 Alumnos

int main() {
  std::cout << "Programa para calcular el promedio de 3 calificaciones de 50 "
               "alumnos : \n\n";

  for (int i = 1; i <= 50; ++i) {
    std::cout << "~~~~Alumno " << i << '\n';
    std::cout << "============================\n\n";
    std::cout << "\tIngresa 3 calificaciones\n";
    double cali{}, prom{}, sum{};
    for (int k = 1; k <= 3; ++k) {
      std::cout << " Calificacion " << k << " es : ";
      std::cin >> cali;
      sum += cali;
    }
    prom = sum / 3.0;
    std::cout << "La suma de las tres calificaciones es : " << sum << '\n';
    std::cout << "=====El promedio es : " << prom << "\n\n";
  }

  return 0;
}
