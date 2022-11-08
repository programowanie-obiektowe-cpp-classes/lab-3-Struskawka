#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  unsigned int sumarycznie = 0;
  int ilosc_zaglowcow = 0;

  
//5. jeżeli sumaryczna ilość przetransportowanego towaru jest większa lub równa podanemu argumentowi `towar`, funkcja kończy pracę. W przeciwnym wypadku, wróć do punktu 1. **Uwaga**: Podany argument `towar` może być równy 0, wtedy `transportujFlota` nie powinno tworzyć żadnego statku
while(sumarycznie<towar)
{
  
//1. tworzy przy pomocy fabryki statek
  Stocznia stocznia{};
  Statek* sta = stocznia();

//2. woła jego metodę `transportuj`, która zwróci ilość towaru, który dany statek przetransportował
  unsigned int transport = sta->transportuj();

//3. dodaje tę liczbę do licznika przetransportowanego sumarycznie towaru
  sumarycznie=sumarycznie+transport;

//Dodatkowo funkcja powinna liczyć i zwracać liczbę żaglowców (tylko żaglowców, nie wszystkich statków), które stworzyła w celu przewiezienia towaru.

//4. niszczy stworzony statek
 virtual ~stocznia() {delete sta;}
  
}
  
return 0;
}

//**Podpowiedź**: Do sprawdzenia czy stworzony statek był żaglowcem wykorzystaj `dynamic_cast`.

/*
#ifndef FIGURE_H
#define FIGURE
[...]
#endif
*/