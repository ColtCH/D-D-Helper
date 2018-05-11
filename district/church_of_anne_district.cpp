#include "church_of_anne_district.h"

string ChurchOfAnneDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Church of Anne." << endl
       << "Home to the faithful." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();

}

ChurchOfAnneDistrict::ChurchOfAnneDistrict() : District(20, 15, 15, 15) { faith = 10; }
