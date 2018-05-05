#include "st_abraham_district.h"

void StAbrahamDistrict::flavorText(){

  cout << left
       << "St. Abraham District." << endl
       << "Home to the wildly rich." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

StAbrahamDistrict::StAbrahamDistrict() : District(20, 15, 15, 15) {}
