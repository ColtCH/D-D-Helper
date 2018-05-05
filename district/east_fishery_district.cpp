#include "east_fishery_district.h"

void EastFisheryDistrict::flavorText(){

  cout << left
       << "East Fishery District." << endl
       << "Home to the eastern fishies." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

EastFisheryDistrict::EastFisheryDistrict() : District(20, 15, 15, 15) { total_fish = 100; }
