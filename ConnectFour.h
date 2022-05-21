#ifndef PROJEKT_CONNECTFOUR_H
#define PROJEKT_CONNECTFOUR_H
#include "AI.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class ConnectFour {
    static int rows;
    static int columns;
    int board[6][7];
public:

    void resetBoard();                                      //Reset the board
    void drawBoard();                                       //Print Board in terminal
    int ingameMove(int choice,int player);                  //insert a game piece

    int startGame();                                        //Start Game

    bool winGame(int row,int column, int player);           //Check if player wins
    bool checkHorizontal(int row, int player);              //Check Victory Points Horizontal
    bool checkVertical(int column, int player);             //Check Victory Points Vertical
    bool checkDiagonal(int row, int column, int player);    //Check Victory Points Diagonal


    int getColumn(sf::Vector2<int> position);
    int getButton(sf::Vector2<int> position);

};


#endif //PROJEKT_CONNECTFOUR_H
