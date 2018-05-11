#ifndef _CAPTIAL_DISTRICT_H_
#define _CAPTIAL_DISTRICT_H_
/*
================================================================================
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
