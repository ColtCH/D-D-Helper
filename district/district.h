#ifndef _MAP_H_
#define _MAP_H_
/*
================================================================================
Base Abstract class of districts. In order to be considered a district, a
derived class must have the following functions defined. The primary reason for
this inheritance is some occasional polymorphism.
================================================================================
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

class District {

protected:

  int population; // Value between 1 - 100
  int size;       // Value between 1 - 100
  int wealth;     // Value between 1 - 100
  int danger;     // Value between 1 - 100

public:

  District(int p, int s, int w, int d) :
           population(p), size(s), wealth(w), danger(d) {}

  //All derivatives of District MUST have some flavor text.
  virtual string flavorText() = 0;

  void increaseDanger()     { danger++;     }
  void increaseWealth()     { wealth++;     }
  void increaseSize()       { size++;       }
  void increasePopulation() { population++; }

  void decreaseDanger()     { danger--;     }
  void decreaseWealth()     { wealth--;     }
  void decreaseSize()       { size--;       }
  void decreasePopulation() { population--; }


};

#endif
