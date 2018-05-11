#ifndef _CAPITAL_MAUSOLEUM_DISTRICT_H_
#define _CAPITAL_MAUSOLEUM_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class CapitalMausoleumDistrict : public District {

public:

  string flavorText();

  int tombstones;

  CapitalMausoleumDistrict();

};

#endif
