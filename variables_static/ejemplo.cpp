#include <iostream>

int generateID()
{
   static int s_itemID{0};
   // hace un a copia de S_itemID, incrementa el real de s_itemID, luego devuelve el valor de la copia
   std::cout << s_itemID << '\n';
   return s_itemID++;
}

int main()
{
   for (int j = 0; j <= 10; j++)
   {
      std::cout << "GenerateID :  " << generateID();
   }
   return 0;
}

