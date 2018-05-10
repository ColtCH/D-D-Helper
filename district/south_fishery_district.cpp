#include "south_fishery_district.h"

void SouthFisheryDistrict::flavorText(){

  cout << left
       << "South Fishery District." << endl
       << "Home to the southern fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

SouthFisheryDistrict::SouthFisheryDistrict() : Fishery(20, 15, 15, 15, 100, 10) {}
