#include "damen_district.h"

string DamenDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Damen District." << endl
       << "Home to some of the seeder folk." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

DamenDistrict::DamenDistrict() : District(20, 15, 15, 15) {}
