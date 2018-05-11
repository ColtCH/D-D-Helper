#ifndef _CHURCH_OF_ANNE_DISTRICT_H_
#define _CHURCH_OF_ANNE_DISTRICT_H_
/*
================================================================================
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
