#include "init.h"
//Prototypes====================================================================
void outputUsageMessage   ();
void initializeDistricts  (vector<District*>& districts);
void outputStartupMessage ();
void processMenuInput     (int input, vector<District*>& districts);
//==============================================================================

string TextSpacing = "\n\n\n\n\n\n\n\n\n\n";

int main(int argc, char const *argv[]) {

  srand( time(NULL));
  outputStartupMessage();

  vector<District*>   districts;  //place to store districts.
  initializeDistricts(districts); //load districts into vector.

  outputUsageMessage();

  bool active = true;
  int user_input;
  while (active){

    cin >> user_input;

    processMenuInput(user_input, districts); // we need districts to do some operations.
    outputUsageMessage();
    }
    
  return 0;
}

/*
================================================================================
These are a few helper functions for main. It primarly makes the code easier to
 read.
================================================================================
*/

//Startup Message---------------------------------------------------------------
void outputStartupMessage(){
  cout << "                     D & D HELPER                          " << endl;
  cout << "===========================================================" << endl;
  cout << "                        V.02                               " << endl;
  cout << TextSpacing << TextSpacing;
}

//Usage Message-----------------------------------------------------------------
void outputUsageMessage(){
  cout << TextSpacing;
  cout << "===========================================================" << endl;
  cout << "        1) Players have moved to another district.         " << endl;
  cout << "        2) Players have performed an action.               " << endl;
  cout << "        3) Exit this Menu.                                 " << endl;
  cout << TextSpacing << TextSpacing << TextSpacing << TextSpacing;
}

//Initialize Districts----------------------------------------------------------
void initializeDistricts(vector<District*>& districts){
  districts.push_back( new StoneDistrict    () );
  districts.push_back( new LowerEastDistrict() );
  districts.push_back( new BorderDistrict   () );
  districts.push_back( new NorthDistrict    () );
}

//Process Menu Input------------------------------------------------------------
void processMenuInput(int input, vector<District*>& districts){
  switch (input){

    //Players have moved to another district------------------------------------
    case 1:

      int district_selection;
      cout << TextSpacing;
      cout << "===============================================================" << endl;
      cout << "      Indicate which district they have traveled to:           " << endl << endl;
      cout << "      1)  Stone                14) Central Market              " << endl;
      cout << "      2)  Lower East           15) Hotel                       " << endl;
      cout << "      3)  Border               16) Sea                         " << endl;
      cout << "      4)  North                17) Damen                       " << endl;
      cout << "      5)  South Market         18) Baxter's Theatre            " << endl;
      cout << "      6)  Capital              19) Blue                        " << endl;
      cout << "      7)  Bernard              20) Fishery                     " << endl;
      cout << "      8)  Capital Mausoleum    21) East A                      " << endl;
      cout << "      9)  St. Abraham          22) East B                      " << endl;
      cout << "      10) Church of Anne       23) North Fishery               " << endl;
      cout << "      11) Flower Square        24) Easy Fishery                " << endl;
      cout << "      12) North Market         25) Steam Mines                 " << endl;
      cout << "      13) South Fishery                                        " << endl;
      cout << TextSpacing << TextSpacing << TextSpacing << TextSpacing;

      cin >> (district_selection);


      cout << "===========================================" << endl;
      districts.at(district_selection - 1)->flavorText();
      cout << "===========================================" << endl;

      break;

    //Players have performed an action------------------------------------------
    case 2:

      int action_selection;
      cout << TextSpacing;
      cout << "What type of action?" << endl;
      cout << "====================" << endl;
      cout << "1) Benevolent       " << endl;
      cout << "2) Malevolent       " << endl;
      cout << "3) Charitable       " << endl;
      cout << "4) Greedy           " << endl;
      cout << TextSpacing << TextSpacing << TextSpacing << TextSpacing;

      cin >> action_selection;

      switch (action_selection) {

        case 1 :
          for ( auto &district : districts ){
            //25 percent chance of decreasing a given districts danger.
            if (rand() % 4 == 1) { district->decreaseDanger(); }
          } break;

        case 2 :
          for ( auto &district : districts ){
            //25 percent chance of increasing a given districts danger.
            if (rand() % 4 == 1) { district->increaseDanger(); }
          } break;

        case 3 :
          for ( auto &district : districts ){
            //25 percent chance of increasing a given districts wealth.
            if (rand() % 4 == 1) { district->increaseWealth(); }
          } break;

        case 4 :
          for ( auto &district : districts ){
            //25 percent chance of decreased a given districts wealth.
            if (rand() % 4 == 1) { district->decreaseWealth(); }
          } break;
      }
}

}
