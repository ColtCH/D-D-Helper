#include "district/district.h"
#include "district/stone_district.h"
#include "district/lower_east_district.h"
#include "district/north_district.h"
#include "district/border_district.h"

int main(int argc, char const *argv[]) {

  cout << "D & D HELPER" << endl;
  cout << "============" << endl;
  cout << "    V.01    " << endl;

  bool active = true;
  string user_input;

  while (active){

    displayUsageMessage();

    cin >> user_input;
    processInput(user_input);

  }

  StoneDistrict stone_district;

  stone_district.flavorText();
  stone_district.decreaseDanger();
  stone_district.flavorText();

  LowerEastDistrict lower_east_district;
  lower_east_district.flavorText();

  return 0;
}
/*
================================================================================
These helper functions take some load off of main.
================================================================================
*/

void displayUsageMessage(){
  cout << "How to use me: " << endl
       << "I require inputs to modify elements of the game." << endl
       << "First, input a number between 1 and 4 that corresponds to the following: " << endl
       << "1. Chaos" << endl
       << "2. Benevolence" << endl
       << "3. Generosity" << endl
       << "4. Greed" << endl;
}
