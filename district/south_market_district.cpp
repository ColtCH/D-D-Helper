#include "south_market_district.h"

void SouthMarketDistrict::flavorText(){

  cout << left
       << "South Market." << endl
       << "Perhaps the least seedy market. Perhaps." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

SouthMarketDistrict::SouthMarketDistrict() : District(20, 15, 15, 15) { market_goods = 100; }
