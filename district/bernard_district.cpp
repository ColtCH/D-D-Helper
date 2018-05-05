#include "bernard_district.h"

void BernardDistrict::flavorText(){

  cout << left
       << "Bernard District." << endl
       << "Home to the old wealth." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

BernardDistrict::BernardDistrict() : District(20, 15, 15, 15) {}
