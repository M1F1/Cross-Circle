class Output_Interface{
    public:
        virtual void show_welcome()const = 0;

        virtual void show_board(char* board)const = 0;    

        virtual void show_player_turn(char player)const = 0;

        virtual void show_move_error(char player)const = 0;

        virtual void show_draw(void)const = 0;

        virtual void show_winner(char player)const = 0;
        virtual ~Output_Interface(){}
};
