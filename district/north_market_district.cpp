#include "north_market_district.h"

void NorthMarketDistrict::flavorText(){

  cout << left
       << "North Market District." << endl
       << "Home of lots of fish." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

NorthMarketDistrict::NorthMarketDistrict() : District(20, 15, 15, 15) {}
