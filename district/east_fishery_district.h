#ifndef _EAST_FISHERY_DISTRICT_H_
#define _EAST_FISHERY_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class EastFisheryDistrict : public District {

public:

  int total_fish;

  void flavorText();

  EastFisheryDistrict();

};

#endif
