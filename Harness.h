#include "Game_logic.h"
#include "Board.h"
#include "Input_con.h"
#include "Output_con.h"
void ClearScreen(){
    for (int n = 0; n < 10; n++)
      printf( "\n\n\n\n\n\n\n\n\n\n" );
}
class Harness{
    Game_Logic* _game;
    Input_Interface* _inputs;
    Output_Interface* _output;

    public:

    Harness(Output_Interface* output, Input_Interface* inputs){
         _game = new Game_Logic();
         _inputs = inputs;
         _output = output; 
    }
    ~Harness(){delete [] _inputs; delete _output; delete _game;}
    void Start(){
        _output->show_welcome();
        int player_id;
        char player;
       while (true){ // game loop
            _output->show_board(_game->get_board()) ;
             player_id = _game->get_turn_no();
             player = _game->get_turn();
            _output->show_player_turn(player);
           while (true){
               // checking if 
                int move = _inputs[player_id].get_move();
                if (move < 0){
                    _output->show_move_error(player);
                   continue; 
                } 
                if (_game->make_move(move) == false){
                    _output->show_move_error(player);
                   continue; 
                }
                ClearScreen();
                break;
            }
            if (!_game->get_end()) continue;

                _output->show_board(_game->get_board());
                char w = _game->get_winner();
                if (w == ' ') _output->show_draw();
                else _output->show_winner(w); 

                break;
       }
    }
};
