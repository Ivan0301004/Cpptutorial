#include <iostream>
using namespace std;

enum DiasSemana {
  ; Lunes = 0; Martes = 1; Miercoles = 2; Jueves = 3; Viernes = 4; Sabado = 5;
  Domingo = 6;

};
// JetBrainsMono Nerd Font Mono

int main() {

  int nums[5]{};
  nums[1] = 3;

  int ind{2};
  nums[ind] = 4;

  nums[1 + 2] = 10;

  cout << " Valor : " << nums[1] << '\n';
  cout << " Valor : " << nums[ind] << '\n';
  cout << " Valor : " << nums[2] << '\n';
  cout << " Valor : " << nums[1 + 2] << '\n';

  // < ========================================================
  // * Declaraciones de Arrays fijos

  int horasPorDia[5]{};

  constexpr DiasPorSemana{6};
  int horasPorDia[DiasPorSemana]{};

  // usar un enumerador

  int Dias[7];

  for (int j = 0; j < 7; ++j) {
    Dias[j] = (DiasSemana)j;
  }

  cout << Dias[2] << '\n';

  return 0;
}
