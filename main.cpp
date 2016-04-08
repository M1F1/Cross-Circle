#include <iostream>
#include "Harness.h"
using namespace std;

int main(){
   Input_con in_con1 = Input_con();
   Input_con in_con2 = Input_con();
   Output_con* out_con = new Output_con();
   Input_con* players_inputs = new Input_con[2];
   players_inputs[0] = in_con1;
   players_inputs[1] = in_con2;
   Harness* h = new Harness(out_con, players_inputs);
   h->Start();
   delete h;
}
