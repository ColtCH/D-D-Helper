#ifndef _FISHERY_DISTRICT_H_
#define _FISHERY_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class FisheryDistrict : public District {

public:

  int total_fish;

  void flavorText();

  FisheryDistrict();

};

#endif
