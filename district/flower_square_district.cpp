#include "flower_square_district.h"

string FlowerSquareDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Flower Square District." << endl
       << "Home to the flowers." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

FlowerSquareDistrict::FlowerSquareDistrict() : District(20, 15, 15, 15) {}
