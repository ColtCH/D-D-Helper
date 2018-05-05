#ifndef _CENTRAL_MARKET_DISTRICT_H_
#define _CENTRAL_MARKET_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class CentralMarketDistrict : public District {

public:

  int total_goods;

  void flavorText();

  CentralMarketDistrict();

};

#endif
