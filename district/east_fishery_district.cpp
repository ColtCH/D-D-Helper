#include "east_fishery_district.h"

string EastFisheryDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "East Fishery District." << endl
       << "Home to the eastern fishies." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

EastFisheryDistrict::EastFisheryDistrict() : Fishery(20, 15, 15, 15, 100, 10) {}
