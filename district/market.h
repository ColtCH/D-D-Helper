#ifndef _MARKET_H_
#define _MARKET_H_
/*
================================================================================
Second level of base abstract class for fishery districts. Only change is that it
includes the amount of fish present and the fish production.
================================================================================
*/

#include "district.h"

class Market : public District {

protected:

  int total_goods;
  int goods_production;

public:

  virtual string flavorText() = 0;

  Market(int p, int s, int w, int d, int g, int gp) :
          District(p, s, w, d),
          total_goods(g),
          goods_production(gp) {}

};

#endif
