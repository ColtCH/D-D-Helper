#include "north_district.h"

void NorthDistrict::flavorText(){

  cout << left
       << "North District." << endl
       << "Home to the modest." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

NorthDistrict::NorthDistrict() : District(20, 15, 15, 15) {}
