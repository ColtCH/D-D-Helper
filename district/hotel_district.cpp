#include "hotel_district.h"

string HotelDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Hotel District." << endl
       << "Home to those staying in hotels." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

HotelDistrict::HotelDistrict() : District(20, 15, 15, 15) {}
