#include "church_of_anne_district.h"

void ChurchOfAnneDistrict::flavorText(){

  cout << left
       << "Church of Anne." << endl
       << "Home to the faithful." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

ChurchOfAnneDistrict::ChurchOfAnneDistrict() : District(20, 15, 15, 15) { faith = 10; }
