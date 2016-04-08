#pragma once
#include <cstdio>
#define X 'x'
#define O 'o'
#define SIZE 9

class Board{
    private:
        char* _board;
    public:
        Board();
        char* get_board() const;
        bool put_on_board(int where, char sign);
        bool move_available(void)const;
        ~Board();
};
