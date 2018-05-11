#include "bernard_district.h"

string BernardDistrict::flavorText(){

  stringstream ss;
  ss   << left
       << "Bernard District." << endl
       << "Home to the old wealth." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
  return ss.str();
}

BernardDistrict::BernardDistrict() : District(20, 15, 15, 15) {}
