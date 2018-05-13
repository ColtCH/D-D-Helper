#include "north_market_district.h"

string NorthMarketDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "North Market District." << endl
       << "Home of lots of fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

NorthMarketDistrict::NorthMarketDistrict() : Market(20, 15, 15, 15, 10, 10) {}
