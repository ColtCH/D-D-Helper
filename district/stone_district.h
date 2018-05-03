#ifndef _STONE_DISTRICT_H_
#define _STONE_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class StoneDistrict : public District {

public:

  int mineral_storage; // A Value between 1 - 1000

  void flavorText();

  StoneDistrict();


};

#endif
