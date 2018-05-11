#include "south_fishery_district.h"

string SouthFisheryDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "South Fishery District." << endl
       << "Home to the southern fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

SouthFisheryDistrict::SouthFisheryDistrict() : Fishery(20, 15, 15, 15, 100, 10) {}
