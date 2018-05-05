#include "lower_west_district.h"

void LowerWestDistrict::flavorText(){

  cout << left
       << "Lower West District." << endl
       << "Home to the workers in Stone District." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

LowerWestDistrict::LowerWestDistrict() : District(80, 25, 3, 2) {}
