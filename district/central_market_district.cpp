#include "central_market_district.h"

void CentralMarketDistrict::flavorText(){

  cout << left
       << "Central Market." << endl
       << "Home to the centralized goods." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

CentralMarketDistrict::CentralMarketDistrict() : District(20, 15, 15, 15) { total_goods = 100; }
