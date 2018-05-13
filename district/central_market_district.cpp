#include "central_market_district.h"

string CentralMarketDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Central Market." << endl
       << "Home to the centralized goods." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

CentralMarketDistrict::CentralMarketDistrict() : Market(20, 15, 15, 15, 10, 10) {}
