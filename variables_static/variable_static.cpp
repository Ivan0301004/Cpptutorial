#include <iostream>

void IncrementaNumero()
{
   int valor { 1 };  
   ++valor;
   std::cout << "Valor : " << valor << '\n';
}
void variableStatic()
{
   static int var { 1 }; // duracion estatica por palabra clave
   // este inicializador solo se ejecuta una vez
   ++var;
   std::cout << "Var : " << var << '\n';  //var no se destruye aqui, pero se convierte en inaccesible porque
   // esta fuera de alcanze
}


int main()
{  
   IncrementaNumero();
   IncrementaNumero();
   IncrementaNumero();
   variableStatic();
   variableStatic();
   variableStatic();
   return 0;
}