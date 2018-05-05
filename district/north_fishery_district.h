#ifndef _NORTH_FISHERY_DISTRICT_H_
#define _NORTH_FISHERY_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class NorthFisheryDistrict : public District {

public:

  int total_fish;

  void flavorText();

  NorthFisheryDistrict();

};

#endif
