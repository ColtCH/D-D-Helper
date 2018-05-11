#include "st_abraham_district.h"

string StAbrahamDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "St. Abraham District." << endl
       << "Home to the wildly rich." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

StAbrahamDistrict::StAbrahamDistrict() : District(20, 15, 15, 15) {}
