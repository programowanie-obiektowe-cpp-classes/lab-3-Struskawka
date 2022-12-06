#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  //1. tworzy przy pomocy fabryki statek
Stocznia stocznia{};
Statek* s1 = stocznia();

  //2. woła jego metodę `transportuj`, która zwróci ilość towaru, który dany statek przetransportował
unsigned int towar = transportuj();

  //3. dodaje tę liczbę do licznika przetransportowanego sumarycznie towaru
unsigned int sumarycznie = 0;
sumarycznie=sumarycznie+towar;


  
  
    return 0;
}



//3. dodaje tę liczbę do licznika przetransportowanego sumarycznie towaru
//4. niszczy stworzony statek
//5. jeżeli sumaryczna ilość przetransportowanego towaru jest większa lub równa podanemu argumentowi `towar`, funkcja kończy pracę.

/*W przeciwnym wypadku, wróć do punktu 1.

Dodatkowo funkcja powinna liczyć i zwracać liczbę żaglowców (tylko żaglowców, nie wszystkich statków), które stworzyła w celu przewiezienia towaru.

**Uwaga**: Podany argument `towar` może być równy 0, wtedy `transportujFlota` nie powinno tworzyć żadnego statku

**Podpowiedź**: Do sprawdzenia czy stworzony statek był żaglowcem wykorzystaj `dynamic_cast`.*/