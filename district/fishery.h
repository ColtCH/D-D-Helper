#ifndef _FISHERY_H_
#define _FISHERY_H_
/*
================================================================================
Second level of base abstract class for fishery districts. Only change is that it
includes the amount of fish present and the fish production.
================================================================================
*/

#include "district.h"

class Fishery : public District {

protected:

  int total_fish;
  int fish_production;

public:

  virtual string flavorText() = 0;

  Fishery(int p, int s, int w, int d, int f, int fp) :
          District(p, s, w, d),
          total_fish(f),
          fish_production(fp) {}

};

#endif
