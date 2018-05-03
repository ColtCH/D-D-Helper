#include "border_district.h"

void BorderDistrict::flavorText(){

  cout << left
       << "Border District." << endl
       << "Home to the workers in Stone District." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

BorderDistrict::BorderDistrict() : District(10, 15, 25, 10) {}
