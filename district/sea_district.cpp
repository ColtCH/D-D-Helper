#include "sea_district.h"

string SeaDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Sea District." << endl
       << "Home to those who like the sea." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

SeaDistrict::SeaDistrict() : District(20, 15, 15, 15) {}
