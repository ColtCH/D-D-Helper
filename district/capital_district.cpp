#include "capital_district.h"

string CapitalDistrict::flavorText(){

  stringstream ss;

  cout << left
       << "Capital District." << endl
       << "Home to the capital." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

CapitalDistrict::CapitalDistrict() : District(20, 15, 15, 15) { dissent_with_populus = 0; }
