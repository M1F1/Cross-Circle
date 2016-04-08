#include "Input_Interface.h"
#include <iostream>
#include <limits>
class Input_con: public Input_Interface{
    public:
        int get_move(){
              while(true){
                  int move = -1;
                  // reading int value, avoiding next input until new line
                  // character
                  if (!(std::cin >> move)) {
                     std::cout << "invalid character was added (ignoring the line)\n";
                     std::cin.clear();
                     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                     return -1;
                    }
                  else if ((move < 0 || move > 8)) return -1;
                  else return move;
                  }
        }

    virtual ~Input_con(){}
};
