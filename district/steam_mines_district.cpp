#include "steam_mines_district.h"

void SteamMinesDistrict::flavorText(){

  cout << left
       << "Steam Mines District." << endl
       << "Home to the steam mines." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

SteamMinesDistrict::SteamMinesDistrict() : District(20, 15, 15, 15) { steam_production = 10; }
