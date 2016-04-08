#include <cstdio> 
#include "Output_Interface.h"
class Output_con: public Output_Interface{
    public:
    void show_welcome()const{
        printf("\n----x------O-----X----o------\n\
    Welcome to Cross&Circle\n\
----O------X-----o----x------\n\n");
    }

    void show_board(char* board)const{
        printf("\t%c | %c | %c\n"
               "\t--+---+--\n"
               "\t%c | %c | %c\n"
               "\t--+---+--\n"
               "\t%c | %c | %c\n\n\n",
               board[0], board[1],
               board[2], board[3],
               board[4], board[5],
               board[6], board[7],
               board[8]
               );
    }
    void show_player_turn(char player)const{printf("Now moves (0-8): %c\n\n", player);}

    void show_move_error(char player)const{printf("Wrong move player: %c! Repeat plz!\n", player);}

    void show_draw()const{printf("Draw!\n");}

    void show_winner(char player)const{printf("Player: %c wins! Congratulations!\nYou received Golden Pants!\n", player);}
    ~Output_con(){}
};
