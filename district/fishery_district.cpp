#include "fishery_district.h"

void FisheryDistrict::flavorText(){

  cout << left
       << "Fishery District." << endl
       << "Home to lots of fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

FisheryDistrict::FisheryDistrict() : District(20, 15, 15, 15) { total_fish = 100; }
