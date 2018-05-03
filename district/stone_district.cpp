#include "stone_district.h"

void StoneDistrict::flavorText(){

  cout << left
       << "Stone District." << endl
       << "New Providence's only quarry." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

StoneDistrict::StoneDistrict() : District(80, 20, 5, 5) { mineral_storage = 100; }
