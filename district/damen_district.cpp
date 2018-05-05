#include "damen_district.h"

void DamenDistrict::flavorText(){

  cout << left
       << "Damen District." << endl
       << "Home to some of the seeder folk." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

DamenDistrict::DamenDistrict() : District(20, 15, 15, 15) {}
