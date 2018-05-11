#include "fishery_district.h"

string FisheryDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Fishery District." << endl
       << "Home to lots of fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

FisheryDistrict::FisheryDistrict() : Fishery(20, 15, 15, 15, 100, 10) {}
