#include "blue_district.h"

string BlueDistrict::flavorText(){


  stringstream ss;
  ss   << left
       << "Blue District." << endl
       << "Home to the blue." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();
}

BlueDistrict::BlueDistrict() : District(20, 15, 15, 15) {}
