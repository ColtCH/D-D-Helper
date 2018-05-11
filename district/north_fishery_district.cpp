#include "north_fishery_district.h"

string NorthFisheryDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "North Fishery District." << endl
       << "Home to the northern fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

NorthFisheryDistrict::NorthFisheryDistrict() : Fishery(20, 15, 15, 15, 100, 10) {}
