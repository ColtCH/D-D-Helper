#ifndef _STEAM_MINES_DISTRICT_H_
#define _STEAM_MINES_DISTRICT_H_
/*
================================================================================
Contains the total amount of steam production given by the mines. There is no
total steam, as New Providence has no way of storing it effectively.
================================================================================
*/

#include "district.h"

class SteamMinesDistrict : public District {

public:

  int steam_production; //Value between 1 - 10

  string flavorText();

  SteamMinesDistrict();

};

#endif
