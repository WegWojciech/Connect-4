#ifndef PROJEKT_AI_H
#define PROJEKT_AI_H


class AI {
    int current_board[6][7]{};
    int board_value[6][7]{};
    int type;                   //Enemy Types, 1 - Defensive, 2 - Aggressive 3 - Random

public:
    void getBoard(int board[6][7]);
    int move();
    void setValue();
    void resetValue();
    int bestMove();
    explicit AI(int type);

};


#endif //PROJEKT_AI_H
