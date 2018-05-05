#include "capital_district.h"

void CapitalDistrict::flavorText(){

  cout << left
       << "Capital District." << endl
       << "Home to the capital." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

CapitalDistrict::CapitalDistrict() : District(20, 15, 15, 15) { dissent_with_populus = 0; }
