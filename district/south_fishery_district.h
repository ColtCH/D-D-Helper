#ifndef _SOUTH_FISHERY_DISTRICT_H_
#define _SOUTH_FISHERY_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class SouthFisheryDistrict : public District {

public:

  int total_fish;

  void flavorText();

  SouthFisheryDistrict();

};

#endif
