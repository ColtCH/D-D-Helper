#include "east_a_district.h"

string EastADistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "East District A." << endl
       << "Home to the seedy part of town." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

EastADistrict::EastADistrict() : District(20, 15, 15, 15) {}
