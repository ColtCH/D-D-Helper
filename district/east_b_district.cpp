#include "east_b_district.h"

void EastBDistrict::flavorText(){

  cout << left
       << "East District B." << endl
       << "Also home to the seedy part of town." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

EastBDistrict::EastBDistrict() : District(20, 15, 15, 15) {}
