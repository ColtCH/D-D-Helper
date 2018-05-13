#ifndef _CAPITAL_MAUSOLEUM_DISTRICT_H_
#define _CAPITAL_MAUSOLEUM_DISTRICT_H_
/*
================================================================================
A bit grim, but a mausoleum has tombstones: it would be nice to know how many.
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
