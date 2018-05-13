#ifndef _STONE_DISTRICT_H_
#define _STONE_DISTRICT_H_
/*
================================================================================
Contains a mineral store.
================================================================================
*/

#include "district.h"

class StoneDistrict : public District {

public:

  int mineral_storage; // A Value between 1 - 100

  string flavorText();

  StoneDistrict();


};

#endif
