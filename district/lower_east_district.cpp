#include "lower_east_district.h"

void LowerEastDistrict::flavorText(){

  cout << left
       << "Lower East District." << endl
       << "Home to the workers in Stone District." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

LowerEastDistrict::LowerEastDistrict() : District(80, 25, 3, 2) {}
