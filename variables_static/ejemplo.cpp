#include <iostream>

int generateID()
{
   static int s_itemID{0};
   // hace un a copia de S_itemID, incrementa el real de s_itemID, luego devuelve el valor de la copia
   //std::cout << s_itemID << " ";
   return s_itemID++;
}

int main()
{
   int s_itemID {9};
   std::cout << s_itemID << '\n';
   for (int j = 0; j <= 10; j++)
   {
      std::cout << "GenerateID :  " << generateID() << "\n";
   }
   return 0;
}

