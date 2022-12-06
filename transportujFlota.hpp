#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  unsigned int sumarycznie_towar = 0;
  int ilosc_zaglowcow = 0;
  unsigned int transport = 0;

  Stocznia stocznia{};
  
//5. jeżeli sumaryczna ilość przetransportowanego towaru jest większa lub równa podanemu argumentowi `towar`, funkcja kończy pracę. W przeciwnym wypadku, wróć do punktu 1. **Uwaga**: Podany argument `towar` może być równy 0, wtedy `transportujFlota` nie powinno tworzyć żadnego statku
while(sumarycznie_towar<towar)
{
  
//1. tworzy przy pomocy fabryki statek
  Statek* sta = stocznia();

//2. woła jego metodę `transportuj`, która zwróci ilość towaru, który dany statek przetransportował
  transport = sta->transportuj();

//3. dodaje tę liczbę do licznika przetransportowanego sumarycznie towaru
  sumarycznie_towar=sumarycznie_towar+transport;

//Dodatkowo funkcja powinna liczyć i zwracać liczbę żaglowców (tylko żaglowców, nie wszystkich statków), które stworzyła w celu przewiezienia towaru.
  if(dynamic_cast <Zaglowiec*>(sta))
  {
  ilosc_zaglowcow++;
  }

//4. niszczy stworzony statek
 delete sta;
  
}
  
return ilosc_zaglowcow;
}

//**Podpowiedź**: Do sprawdzenia czy stworzony statek był żaglowcem wykorzystaj `dynamic_cast`.

/*
#ifndef FIGURE_H
#define FIGURE
[...]
#endif
*/