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

  void flavorText();

  CapitalDistrict();

};

#endif
