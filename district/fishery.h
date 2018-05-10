#ifndef _FISHERY_H_
#define _FISHERY_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class Fishery : public District {

protected:

  int total_fish;
  int fish_production;

public:

  virtual void flavorText() = 0;

  Fishery(int p, int s, int w, int d, int f, int fp) : District(p, s, w, d), total_fish(f), fish_production(fp) {} 

};

#endif
