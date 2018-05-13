#ifndef _BAXTER_THEATRE_DISTRICT_H_
#define _BAXTER_THEATRE_DISTRICT_H_
/*
================================================================================
Only difference here is the value for baxter's opinion of the players. This can
impact a few quests throughout.
================================================================================
*/

#include "district.h"

class BaxterTheatreDistrict : public District {

public:

  int baxter_opinion; //value between 1 - 100

  string flavorText();

  BaxterTheatreDistrict();

};

#endif
