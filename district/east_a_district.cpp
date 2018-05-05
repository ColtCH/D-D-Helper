#include "east_a_district.h"

void EastADistrict::flavorText(){

  cout << left
       << "East District A." << endl
       << "Home to the seedy part of town." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

EastADistrict::EastADistrict() : District(20, 15, 15, 15) {}
