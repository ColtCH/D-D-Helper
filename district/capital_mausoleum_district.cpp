#include "capital_mausoleum_district.h"

string CapitalMausoleumDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Capital Mausoleum." << endl
       << "Home to the dead." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
 
  return ss.str();

}

CapitalMausoleumDistrict::CapitalMausoleumDistrict() : District(20, 15, 15, 15) { tombstones = 50; }
