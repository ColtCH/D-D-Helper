#include "capital_mausoleum_district.h"

void CapitalMausoleumDistrict::flavorText(){

  cout << left
       << "Capital Mausoleum." << endl
       << "Home to the dead." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

CapitalMausoleumDistrict::CapitalMausoleumDistrict() : District(20, 15, 15, 15) { tombstones = 50; }
