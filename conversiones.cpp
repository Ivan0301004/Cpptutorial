#include <iostream>

int main()
{
  int option;

  // longitud,
  std::cout << " Ivan Josemir Hernandez EScudero \n\n\n";
  std::cout << "===PROGRAMA DE CONVERSIONES DE UNIDADES==== \n\n";
  std::cout << "~~Las siguientes opciones son para elegir el tipo de conversion que uno desea utilizar~~ \n\n"
            << " Para elgir uno, deberas teclear el numero  que tiene cada una de ella al incio\n\n";

  std::cout << "1) Longitud\n"
            << "2) Superificie\n"
            << "3) Volumen\n"
            << "4) Presion\n"
            << "5) Energia\n"
            << "6) Potencia\n"
            << "7) Temperatura\n"
            << "8) Salir \n"
            << "Eleccion : ";
  std::cin >> option;
  std::cout << "\n\n";

  switch (option)
  {

  case 1:
  {
    int longitud;
    std::cout << "--Haz elejido conversiones de LONGITUD--\n"
              << "Eligiendo una de ellas tendras el quivalente en todas sus variantes.\n\n"
              << "Porfavor elige una de las siguintes opciones\n\n"
              << "1) Metro \n"
              << "2) Milimetro \n"
              << "3) Pulgada\n"
              << "4) Yarda\n"
              << "5) Pie\n"
              << "6) Milla\n\n"
              << "Eleccion : ";
    std::cin >> longitud;
    std::cout << "\n\n";

    switch (longitud)
    {
    case 1:
    {
      float metro;
      std::cout << "Ingresa la canitdad de METROS a convertir : ";
      std::cin >> metro;
      std::cout << "\t" << metro << " m Equivalen a " << metro * 1000 << " mm\n";
      std::cout << "\t" << metro << " m Equivalen a " << metro / 0.0254 << " in's\n";
      std::cout << "\t" << metro << " m Equivalen a " << metro / 0.3048 << " ft's\n";
      std::cout << "\t" << metro << " m Equivalen a " << metro / 0.9144 << " yd's\n";
      std::cout << "\t" << metro << " m Equivalen a " << metro / 1609.344 << " mi's\n";
      break;
    }

    case 2:
    {
      float milimetro;
      std::cout << "Ingresa la canitdad de MILIMETROS a convertir : ";
      std::cin >> milimetro;
      std::cout << "\t" << milimetro << " mm Equivalen a " << milimetro / 1000 << " m\n";
      std::cout << "\t" << milimetro << " mm Equivalen a " << milimetro / 25.4 << " in's\n";
      std::cout << "\t" << milimetro << " mm Equivalen a " << milimetro / 304.8 << " ft's\n";
      std::cout << "\t" << milimetro << " mm Equivalen a " << milimetro / 914.4 << " yd's\n";
      std::cout << "\t" << milimetro << " mm Equivalen a " << milimetro / 1609344 << " mi's\n";
      break;
    }

    case 3:
    {
      float pulgada;
      std::cout << "Ingresa la canitdad de PULGADAS a convertir : ";
      std::cin >> pulgada;
      std::cout << "\t" << pulgada << " in's Equivalen a " << (pulgada * 0.0254) / 1.0 << "    m\n";
      std::cout << "\t" << pulgada << " in's Equivalen a " << (pulgada * 0.0254) * 1000 << "   mm's\n";
      std::cout << "\t" << pulgada << " in's Equivalen a " << (pulgada * 0.0254) / 0.3048 << " ft's\n";
      std::cout << "\t" << pulgada << " in's Equivalen a " << (pulgada * 0.0254) / 0.9144 << " yd's\n";
      std::cout << "\t" << pulgada << " in's Equivalen a " << (pulgada * 0.0254) / 1609.344 << "   mi's\n";
      break;
    }

    case 4:
    {
      float yarda;
      std::cout << "Ingresa la canitdad de YARDAS a convertir : ";
      std::cin >> yarda;
      std::cout << "\t" << yarda << " yd's Equivalen a " << (yarda * 0.9144) / 1.0 << " m\n";
      std::cout << "\t" << yarda << " yd's Equivalen a " << (yarda * 0.9144) * 1000 << " mm's\n";
      std::cout << "\t" << yarda << " yd's Equivalen a " << (yarda * 0.9144) / .3048 << " ft's\n";
      std::cout << "\t" << yarda << " yd's Equivalen a " << (yarda * 0.9144) / 0.0254 << " in's\n";
      std::cout << "\t" << yarda << " yd's Equivalen a " << (yarda * 0.9144) / 1609.344 << " mi's\n";
      break;
    }

    case 5:
    {
      float pie;
      std::cout << "Ingresa la canitdad de PIES  a convertir : ";
      std::cin >> pie;
      std::cout << "\t" << pie << " ft's Equivalen a " << (pie * 0.3048) / 1.0 << " m\n";
      std::cout << "\t" << pie << " ft's Equivalen a " << (pie * 0.3048) * 1000 << " mm's\n";
      std::cout << "\t" << pie << " ft's Equivalen a " << (pie * 0.3048) / .9144 << " yd's\n";
      std::cout << "\t" << pie << " ft's Equivalen a " << (pie * 0.3048) / 0.0254 << " in's\n";
      std::cout << "\t" << pie << " ft's Equivalen a " << (pie * 0.3048) / 1609.344 << " mi's\n";
      break;
    }

    case 6:
    {
      double milla;
      std::cout << "Ingresa la canitdad de PIES  a convertir : ";
      std::cin >> milla;
      std::cout << "\t" << milla << " mi's Equivalen a " << (milla * 1609.344) / 1.0 << " m\n";
      std::cout << "\t" << milla << " mi's Equivalen a " << (milla * 1609.344) * 1000 << " mm's\n";
      std::cout << "\t" << milla << " mi's Equivalen a " << (milla * 1609.344) / .9144 << " yd's\n";
      std::cout << "\t" << milla << " mi's Equivalen a " << (milla * 1609.344) / 0.0254 << " in's\n";
      std::cout << "\t" << milla << " mi's Equivalen a " << (milla * 1609.344) / 0.3048 << " ft's\n";
      break;
    }  default : std::cout << "Numero incorrecto. Intentalo de nuevo \n";
    }
    break;
  }

  case 2:
  {
    int superficie;
    std::cout << "--Haz elejido conversiones de SUPERFICIE      --\n"
              << "Eligiendo una de ellas tendras el quivalente en todas sus variantes.\n\n"
              << "Porfavor elige una de las siguintes opciones\n\n"
              << "1) Metro Cuadrado \n"
              << "2) Hecatrea \n"
              << "3) Pulgada Cuadrada\n"
              << "4) Pie Cuadrado\n"
              << "5) Yarda Cuadrada\n"
              << "6) Acre\n\n"
              << "Eleccion : ";
    std::cin >> superficie;
    std::cout << "\n";
    switch (superficie)
    {

    case 1:
    {
      float metro_cuadrado;
      std::cout << "Ingresa la cantidad de METROS CUADRADOS a convertir : ";
      std::cin >> metro_cuadrado;
      std::cout << metro_cuadrado << " M2 es equivalente a : " << (metro_cuadrado / 10000) << " ha\n";
      std::cout << metro_cuadrado << " M2 es quivalente a  : " << (metro_cuadrado / 0.00064516) << " in2\n";
      std::cout << metro_cuadrado << " M2 es equivalente a : " << (metro_cuadrado / 0.09290304) << " ft2\n";
      std::cout << metro_cuadrado << " M2 es equivalente a : " << (metro_cuadrado / 0.8361274) << " yd2 \n";
      std::cout << metro_cuadrado << " M2 es equivalente a : " << (metro_cuadrado / 4046.856) << " acres\n";
      break;
    }

    case 2:
    {
      float hectarea;
      std::cout << " Ingresa la cantidad de HECTAREAS a convertir : ";
      std::cin >> hectarea;
      std::cout << hectarea << " h equivalen a : " << (hectarea * 10000) << " m2's\n";
      std::cout << hectarea << " h equivalne a : " << (hectarea * 15500031) << " in2's\n";
      std::cout << hectarea << " h equivalne a : " << (hectarea * 107639) << " ft2's\n";
      std::cout << hectarea << " h equivalne a : " << (hectarea * 11960.291831121) << " yd2's\n";
      std::cout << hectarea << " h equivalne a : " << (hectarea * 2.47105) << " acre's\n";
      break;
    }

    case 3:
    {
      float pulgada;
      std::cout << "Ingresa la cantidad de PULGADAS CUADRADAS a convertir : ";
      std::cin >> pulgada;
      std::cout << pulgada << " h equivalen a : " << (pulgada * 0.00064516) << " m2's\n";
      std::cout << pulgada << " h equivalne a : " << (pulgada * 0.00000006451) << " ha's\n";
      std::cout << pulgada << " h equivalne a : " << (pulgada * 0.0069446716899892) << " ft2's\n";
      std::cout << pulgada << " h equivalne a : " << (pulgada * 0.00077163018777658) << " yd2's\n";
      std::cout << pulgada << " h equivalne a : " << (pulgada * 0.00000015942) << " acre's\n";
      break;
    }

    case 4:
    {
      float pies;
      std::cout << "Ingresa la cantidad de PIES CUADRADOS a convertir : ";
      std::cin >> pies;
      std::cout << pies << " ft equivalen a : " << (pies * 0.0929) << " m2's\n";
      std::cout << pies << " ft equivalne a : " << (pies * 0.00000929) << " ha2's\n";
      std::cout << pies << " ft equivalne a : " << (pies * 143.99528799058) << " in2's\n";
      std::cout << pies << " ft equivalne a : " << (pies * 0.11111111111111) << " yd2's\n";
      std::cout << pies << " ft equivalne a : " << (pies * 0.000022955842743829) << " acre's\n";
      break;
    }

    case 5:
    {
      float yarda;
      std::cout << "Ingresa la cantidad de YARDAS a convertir : ";
      std::cin >> yarda;
      std::cout << yarda << " ft equivalen a : " << (yarda * 0.836127) << " m2's\n";
      std::cout << yarda << " ft equivalne a : " << (yarda * 0.000009290351) << " ha2's\n";
      std::cout << yarda << " ft equivalne a : " << (yarda * 1296) << " in2's\n";
      std::cout << yarda << " ft equivalne a : " << (yarda * 9) << " ft2's\n";
      std::cout << yarda << " ft equivalne a : " << (yarda * 0.00020661) << " acre's\n";
      break;
    }

    case 6:
    {
      float acre;
      std::cout << "Ingresa la cantidad de ACRES  a convertir : ";
      std::cin >> acre;
      std::cout << acre << " yd2 es equivalnete a : " << (acre * 4046.856) << "m2's\n";
      std::cout << acre << " yd2 es equivalnete a : " << (acre * 0.4046856) << "ha2's\n";
      std::cout << acre << " yd2 es equivalnete a : " << (acre * 6272707) << "in2's\n";
      std::cout << acre << " yd2 es equivalnete a : " << (acre * 43561) << "ft2's\n";
      std::cout << acre << " yd2 es equivalnete a : " << (acre * 4840) << "yd2's\n";
    }
    default:
      std::cout << "Numero incorrecto. Intentalo de nuevo\n";
    }
    break;
  }

  case 3:
  {
    int volumen;
    std::cout << "--Haz elejido conversiones de VOLUMEN---\n"
              << "Eligiendo una de ellas tendras el quivalente en todas sus variantes.\n\n"
              << "Porfavor elige una de las siguintes opciones\n\n"
              << "1) Metro Cubico \n"
              << "2) Litro \n"
              << "3) Pie Cubicon"
              << "4) Galon\n"
              << "5) Galon Imperial\n"
              << "6) Barril de Petroleo\n\n"
              << "Eleccion : ";
    std::cin >> volumen;
    std::cout << "\n";
    switch (volumen)
    {
    case 1:
    {
      float metro_cubico;
      std::cout << "Ingresa la cantidad de METROS CUBICOS A CONVERTIR : ";
      std::cin >> metro_cubico;
      std::cout << metro_cubico << " metros cubicos equivalen a : " << (metro_cubico * 1000) << " litros\n";
      std::cout << metro_cubico << " Metros cubicos equivalen a : " << (metro_cubico * 35.32) << "Pies Cubicos\n";
      std::cout << metro_cubico << " Metros cuibicos equivalen a : " << (metro_cubico * 264.18) << " Galones USA\n";
      std::cout << metro_cubico << " MEtros cubicos equivalen a : " << (metro_cubico * 220) << " Galones UK\n";
      std::cout << metro_cubico << " Metros cubicos equivalen a : " << (metro_cubico * 6.3) << " Barriles de petroleo\n";
      break;
    }

    case 2:
    {
      float litros;
      std::cout << "Ingresa la cantidad de LITROS a convertir : ";
      std::cin >> litros;
      std::cout << litros << " Litros equivalen a : " << (litros / 1000) << " Metros cubicos\n";
      std::cout << litros << " Litros equivalnen a : " << (litros / 28.32) << " Pies cubicos\n";
      std::cout << litros << " Litros equivalen a : " << (litros / 3.7854) << " Galones USA\n";
      std::cout << litros << " Litros equivalen a : " << (litros / 4.5460) << " Galon UK\n";
      std::cout << litros << " LItros equivalen a : " << (litros / 158.9873) << " Barriles de petroleo\n";
      break;
    }

    case 3:
    {
      float pie_cubico;
      std::cout << "Ingresa la cantidada de PIES CUBICOS  a convertir : ";
      std::cin >> pie_cubico;
      std::cout << pie_cubico << " Pies cubicos equivalen a : " << (pie_cubico / 35.314) << " Metros cubicos\n";
      std::cout << pie_cubico << " Pies cubicos equiavalen a : " << (pie_cubico * 28.31685) << " Litros\n";
      std::cout << pie_cubico << " Pies cubicos equivalen a : " << (pie_cubico * 7.48051) << " Galones USA\n";
      std::cout << pie_cubico << "Pies cubicos equivalen a : " << (pie_cubico * 6.228835) << " Galones UK\n";
      std::cout << pie_cubico << "Pies cubicos equivalen a : " << (pie_cubico / 5.614583) << " Barriles de petroleo\n";
      break;
    }

    case 4:
    {
      float galon_usa;
      std::cout << "Ingresa la cantidad de GALONES USA para convertir : ";
      std::cin >> galon_usa;
      std::cout << galon_usa << " Galones USA equivalen a : " << (galon_usa / 264.17) << " Metros cubicos\n";
      std::cout << galon_usa << " Galones USA equivalen a : " << (galon_usa * 3.785412) << " Litros\n";
      std::cout << galon_usa << " Galones USA equivalen a : " << (galon_usa / 7.480519) << " Pies cubicos\n";
      std::cout << galon_usa << " Galones USA equivalen a : " << (galon_usa / 1.200950) << " Galones UK\n";
      std::cout << galon_usa << " Galones USA equivalen a : " << (galon_usa / 42.000) << " Barriles de petroleo\n";
      break;
    }

    case 5:
    {
      float galones_uk;
      std::cout << "Ingresa la cantidad de GALONES UK para convertir : ";
      std::cin >> galones_uk;
      std::cout << galones_uk << " Galones UK equivalen a : " << (galones_uk / 219.9692) << " Metros cubicos\n";
      std::cout << galones_uk << " Galones UK equivalen a : " << (galones_uk * 4.546090) << " Litros\n";
      std::cout << galones_uk << " Galones UK equivalen a : " << (galones_uk / 6.228835) << " Pies Cubicos\n";
      std::cout << galones_uk << " Galones UK equivalen a : " << (galones_uk * 1.200950) << " Galones USA\n";
      std::cout << galones_uk << " Galones UK equivalen a : " << (galones_uk / 34.97232) << " Barriles de petroleo\n";
      break;
    }

    case 6:
    {
      float barriles_petroleo;
      std::cout << "Ingresa la cantidadad de BARRILES DE PETROLEO A CONVERTIR : ";
      std::cin >> barriles_petroleo;
      std::cout << barriles_petroleo << " Barriles de Petroleo equivalen a : " << (barriles_petroleo / 6.289811) << " Metros Cubicos \n";
      std::cout << barriles_petroleo << " Barriles de Petroleo equivalen a : " << (barriles_petroleo * 158.9873) << " Litros \n";
      std::cout << barriles_petroleo << " Barriles de Petroleo equivalen a : " << (barriles_petroleo * 5.614583) << " Pies cubicos \n";
      std::cout << barriles_petroleo << " Barriles de Petroleo equivalen a : " << (barriles_petroleo * 42.00) << " Galones USA \n";
      std::cout << barriles_petroleo << " Barriles de Petroleo equivalen a : " << (barriles_petroleo * 34.9723128) << "Galones UK \n";
      break;
    }
    }
    break;
  }
  case 4:
  {
  int presion;
  std::cout << "==Haz elegido conversiones de PRESION==\n\n";
  std::cout << "~~~Elige una de las siguientes opciones : ~~~\n\n"
            << "1) Kilopascal\n"
            << "2) Unidades Atmosfericas \n"
            << "3) Milimetro de c .HG\n"
            << "4) Metros de c .Agua\n"
            << "5) Libras por pulgada cuadrada\n"
            << "6) Bar\n"
            << "Eleccion : ";
  std::cin >> presion;
  switch (presion)
  {

  case 1:
  {
    float kilopascal;
    std::cout << " Ingresa la cantidad de KILOPASCALES a convertir : \n";
    std::cin >> kilopascal;
    std::cout << kilopascal << " kN/m2 equivalen a : " << (kilopascal * 0.000010) << " Unidades Atmosfericas \n";
    std::cout << kilopascal << " kN/m2 equivalen a : " << (kilopascal * 7.5006) << " Milimetro Hg\n";
    std::cout << kilopascal << " kN/m2 equivalen a : " << (kilopascal * 0.101974) << " Metros de H2O\n";
    std::cout << kilopascal << " kB/m2 equivalen a : " << (kilopascal * 0.101974) << " Libras por pulgada\n";
    std::cout << kilopascal << " kN/m2 equivalen a : " << (kilopascal * 0.01) << " Bares\n";
    break;
  }

  case 2:
  {
    float unidades_atmosfericas;
    std::cout << " Ingresa la cantidad de UNIDADES ATMOSFERICAS a converitir : ";
    std::cin >> unidades_atmosfericas;
    std::cout << unidades_atmosfericas << " Kgf/cm2 equivalen a : \t" << (unidades_atmosfericas * 98.0665) << " Kilopascales\n";
    std::cout << unidades_atmosfericas << " Kgf/cm2 equivalen a : \t" << (unidades_atmosfericas * 735.56) << " Milimetro Hg\n";
    std::cout << unidades_atmosfericas << " Kgf/cm2 equivalen a : \t" << (unidades_atmosfericas * 10.0003) << " Metros de H2O\n";
    std::cout << unidades_atmosfericas << " Kgf/cm2 equivalen a : \t" << (unidades_atmosfericas * 14.2233) << " Libras por pulgada\n";
    std::cout << unidades_atmosfericas << " Kgf/cm2 equivalen a : \t" << (unidades_atmosfericas * 0.980665) << " Bares\n";
    break;
  }

  case 3:
  {
    float milimetros;
    std::cout << " Ingresa la cantidad de MILIMETROS DE MERCURIO a convertir : ";
    std::cin >> milimetros;
    std::cout << milimetros << "mmHG equivalen a : " << (milimetros * 0.133322) << " Kilopascales \n";
    std::cout << milimetros << "mmHG equivalen a : " << (milimetros * 0.00131579) << " Unidades Atmosfericas \n";
    std::cout << milimetros << "mmHG equivalen a : " << (milimetros * 0.013595) << " Metros de H2O \n";
    std::cout << milimetros << "mmHG equivalen a : " << (milimetros * 0.019337) << " Libras por pulagada \n";
    std::cout << milimetros << "mmHG equivalen a : " << (milimetros * 0.00133322) << " Bares\n";
    break;
  }

  case 4:
  {
    float metros_agua;
    std::cout << " Ingresa la cantidad de METROS SOBRE AGUA  a convertri : ";
    std::cin >> metros_agua;
    std::cout << metros_agua << "mH2O equivalen a : " << (metros_agua * 9.8064) << " Kilopascales\n";
    std::cout << metros_agua << "mH2O equivalen a : " << (metros_agua * 0.096781) << " Unidades Atmosfericas\n";
    std::cout << metros_agua << "mH2O equivalen a : " << (metros_agua * 73.5541) << " Milimetros de Mercurio\n";
    std::cout << metros_agua << "mH2O equivalen a : " << (metros_agua * 1.4223) << " Libras por pulgada\n";
    std::cout << metros_agua << "mH2O equivalen a : " << (metros_agua * 0.098064) << " Bares\n";
    break;
  }

  case 5:
  {
    float libras_pulgada;
    std::cout << "Ingresa la cantidad de LIBRAS POR PULGADA a convertir : ";
    std::cin >> libras_pulgada;
    std::cout << libras_pulgada << " psi equivalen a  : " << (libras_pulgada * 6.8948) << " Kilopascales \n";
    std::cout << libras_pulgada << " psi equivalen a  : " << (libras_pulgada * 0.068046) << " Unidades Atmosfericas\n";
    std::cout << libras_pulgada << " psi equivalen a  : " << (libras_pulgada * 51.7151) << " Milimetros de Mercurio \n";
    std::cout << libras_pulgada << " psi equivalen a  : " << (libras_pulgada * 0.703089) << " Metros H2O \n";
    std::cout << libras_pulgada << " psi equivalen a  : " << (libras_pulgada * 0.068948) << " Bares \n";
    break;
  }

  case 6:
  {
    float bares;
    std::cout << "Ingresa la cantidad de BARES a convertir : ";
    std::cin >> bares;
    std::cout << bares << " bares equivalen a : " << (bares * 100) << " Kilopascales \n";
    std::cout << bares << " bares equivalen a : " << (bares * 1.0197) << " Unidades Atmosfericas \n";
    std::cout << bares << " bares equivalen a : " << (bares * 750.06) << " Milimetros de Mercurio \n";
    std::cout << bares << " bares equivalen a : " << (bares * 10.1974) << " Metros de H2O \n";
    std::cout << bares << " bares equivalen a : " << (bares * 14.5038) << " Libras por pulgada \n";
    break;
      }
      }
      break;
  }
    
  case 5 : {

    }

    case 6 : {

    }

    case 7 : { 

    }

    case 8 : {
      return 0 ;
    }default : std::cout << " Opcion incorrecta. Intentalo de nuevo\n\n";

  }



  return 0;
}
