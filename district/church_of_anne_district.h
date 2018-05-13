#ifndef _CHURCH_OF_ANNE_DISTRICT_H_
#define _CHURCH_OF_ANNE_DISTRICT_H_
/*
================================================================================
Faith is a value determined by good deeds done by the players. More good deeds
equates to higher faith.
================================================================================
*/

#include "district.h"

class ChurchOfAnneDistrict : public District {

public:

  int faith;

  string flavorText();

  ChurchOfAnneDistrict();

};

#endif
