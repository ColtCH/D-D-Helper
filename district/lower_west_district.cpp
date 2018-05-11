#include "lower_west_district.h"

string LowerWestDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Lower West District." << endl
       << "Home to the workers in Stone District." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

LowerWestDistrict::LowerWestDistrict() : District(80, 25, 3, 2) {}
