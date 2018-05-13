#ifndef _CAPTIAL_DISTRICT_H_
#define _CAPTIAL_DISTRICT_H_
/*
================================================================================
Capital District contains an integer which determines how it feels about the
populus. This impacts several quests.
================================================================================
*/

#include "district.h"

class CapitalDistrict : public District {

public:

  int dissent_with_populus;

  string flavorText();

  CapitalDistrict();

};

#endif
