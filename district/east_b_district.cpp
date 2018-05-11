#include "east_b_district.h"

string EastBDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "East District B." << endl
       << "Also home to the seedy part of town." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

EastBDistrict::EastBDistrict() : District(20, 15, 15, 15) {}
