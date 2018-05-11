#include "baxter_theatre_district.h"

string BaxterTheatreDistrict::flavorText(){

  stringstream ss;

  ss   << left
       << "Baxter's Theatre." << endl
       << "Home to the theatre." << endl
       << "Population: " << (population * 1000) << endl
       << "Size: " << size << " square kilometers" << endl
       << "Wealthiness: " << wealth << " average income (in gold)" << endl
       << "Danger level: " << danger << " guards or more" << endl;

  return ss.str();
}

BaxterTheatreDistrict::BaxterTheatreDistrict() : District(20, 15, 15, 15) { baxter_opinion = 0; }
