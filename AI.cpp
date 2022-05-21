#include "AI.h"
#include <iostream>
#include <random>

using namespace std;

void AI::getBoard(int board[6][7])
{
    int i,j;
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 7; j++)
        {
            current_board[i][j] = board[i][j];
            if(board[i][j] != 0)
                board_value[i][j] = -100;
        }
    }
}

int AI::move()
{
    if(type == 3)
    {
        int random;
        while(true)
        {
            random = 1 + (int) (7.0 * (rand() / (RAND_MAX + 1.0)));
            if(current_board[0][random] == 0)
                break;
        }
        return random;
    }

    resetValue();
    setValue();
    int move = bestMove();
    return move;
}

void AI::setValue()
{
    int i,j,m,n;
    int score;

    //Possible Moves
    for(i = 0; i < 7; i++)
    {
        j = 0;
        while(j < 6)
        {
            if(current_board[j][i] != 0)
            {
                board_value[j - 1][i] = 100;
                break;
            }
            else if(j == 5)
            {
                board_value[j][i] = 100;
                break;
            }
            else
                j++;
        }
    }

    //Assigning values
    for(i = 0; i < 6; i++)
    {
        score = 0;
        for(j = 0; j < 7; j++)
            if(board_value[i][j] == 100)
            {
                //Vertical
                n = i+1;
                board_value[i][j] = score;
                while(n < 6)
                {
                    if(current_board[n][j] == type)
                        {
                        score++;

                        if(score == 3)
                            score++;

                        n++;
                        }
                    else break;;
                }
                board_value[i][j] = board_value[i][j] + score;

                //Horizontal

                //To the right
                score = 0;
                m = j+1;
                while(m < 7)
                {
                    if(current_board[i][m] == type)
                    {
                        score++;

                        if(score == 3)
                            score++;

                        m++;
                    }
                    else break;
                }
                board_value[i][j] = board_value[i][j] + score;

                //To the left
                score = 0;
                m = j-1;
                while(m >= 0)
                {
                    if(current_board[i][m] == type)
                    {
                        score++;

                        if(score == 3)
                            score++;

                        m--;
                    }
                    else break;
                }
                board_value[i][j] = board_value[i][j] + score;


                //Diagonal

                //SE
                score = 0;
                n = i+1;
                m = j+1;

                while(current_board[n][m] == type && n < 6 && m < 7)
                {
                    score++;

                    if(score == 3)
                        score++;

                    n++;
                    m++;
                }
                board_value[i][j] = board_value[i][j] + score;

                //NW
                score = 0;
                n = i-1;
                m = j-1;

                while(current_board[n][m] == type && n >= 0 && m >= 0)
                {
                    score++;

                    if(score == 3)
                        score++;

                    n--;
                    m--;
                }
                board_value[i][j] = board_value[i][j] + score;

                //SW
                score = 0;
                n = i+1;
                m = j-1;

                while(current_board[n][m] == type && n < 6 && m >= 0)
                {
                    score++;

                    if(score == 3)
                        score++;

                    n++;
                    m--;
                }
                board_value[i][j] = board_value[i][j] + score;

                //NE
                score = 0;
                n = i-1;
                m = j+1;

                while(current_board[n][m] == type && n >= 0 && m < 7)
                {
                    score++;

                    if(score == 3)
                        score++;

                    n--;
                    m++;
                }
                board_value[i][j] = board_value[i][j] + score;
            }
    }

}

void AI::resetValue()
{
    int i,j;

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 7; j++)
            if(current_board[i][j] == 1)
                board_value[i][j] = -100;
            else if(current_board[i][j] == 2)
                board_value[i][j] = -50;
            else
                board_value[i][j] = 0;
    }
}

int AI::bestMove()
{
    int best_move = -1;

    int i,j;

    int max_j;

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 7; j++)
            if(board_value[i][j] > best_move)
            {
                best_move = board_value[i][j];
                max_j = j+1;
            }
    }
    if(best_move == -1)
    {
        int random;
        while(true)
        {
            random = 1 + (int) (7.0 * (rand() / (RAND_MAX + 1.0)));
            if(current_board[0][random] == 0)
                break;
        }
        return random;
    }
    else
        return max_j;
}

AI::AI(int type)
{
    int i,j;

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 7; j++)
        {
            current_board[i][j] = 0;
            board_value[i][j] = 0;
        }
    }
    this->type = type;
}

