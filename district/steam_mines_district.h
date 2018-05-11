#ifndef _STEAM_MINES_DISTRICT_H_
#define _STEAM_MINES_DISTRICT_H_
/*
================================================================================
================================================================================
*/

#include "district.h"

class SteamMinesDistrict : public District {

public:

  int steam_production;

  string flavorText();

  SteamMinesDistrict();

};

#endif
