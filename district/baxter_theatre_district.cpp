#include "baxter_theatre_district.h"

void BaxterTheatreDistrict::flavorText(){

  cout << left
       << "Baxter's Theatre." << endl
       << "Home to the theatre." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;
}

BaxterTheatreDistrict::BaxterTheatreDistrict() : District(20, 15, 15, 15) { baxter_opinion = 0; }
