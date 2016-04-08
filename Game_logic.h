#pragma once
#include "Board.h"
#define PLAYER1 X
#define PLAYER2 O
class Game_Logic{
        Board* _board;
        char _turn;
        bool _end;
        char _winner;
        char _players[2]; 
    public:
        Game_Logic();
        ~Game_Logic();
        bool get_end()const;
        char get_winner()const;
        char get_turn_no()const;
        char get_turn()const;
        char* get_board()const;
        bool make_move(int where);
        bool game_result()const;
};
