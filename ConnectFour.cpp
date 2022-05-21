#include <iostream>
#include "ConnectFour.h"
#include "Display.h"
#include "SFML/Graphics.hpp"

using namespace std;

int ConnectFour::rows = 6;
int ConnectFour::columns = 7;

void ConnectFour::resetBoard()
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
            board[i][j] = 0;
    }
}

void ConnectFour::drawBoard()
{
    int i,j;
    cout<<"\n---------------------"<<endl;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
            if(board[i][j] == 1)
                cout<<"[X]";
            else if(board[i][j] == 2)
                cout<<"[O]";
            else
                cout<<"[ ]";
        cout<<"\n---------------------"<<endl;
    }
}

int ConnectFour::startGame()
{

    resetBoard();
    sf::Texture menuTexture;
    menuTexture.loadFromFile("Assets/menu.png");

    sf::Sprite menu;
    menu.setTexture(menuTexture);

    sf::RenderWindow menuWindow(sf::VideoMode(896, 768), "Connect 4!");

    menuWindow.clear();
    menuWindow.draw(menu);
    menuWindow.display();

    int type = 0;
    sf::Event eventMenu{};
    while(menuWindow.isOpen())
    {
        while(menuWindow.pollEvent(eventMenu))
        {
            if (eventMenu.type == sf::Event::Closed)
            {
                menuWindow.close();
                return 0;
            }
            if(eventMenu.type == sf::Event::MouseButtonPressed)
                type = getButton(sf::Vector2i(eventMenu.mouseButton.x,eventMenu.mouseButton.y));
            if(type != 0)
                menuWindow.close();
        }

    }

    int choice = 10;
    int player = 1;
    int result;
    int column;
    int ai_choice;
    bool loop = true;

    AI AI(type);
    Display display;

    sf::Event event{};
    sf::Event end{};

    sf::Texture oneWinTexture;
    oneWinTexture.loadFromFile("Assets/1win.png");
    sf::Sprite oneWin;
    oneWin.setTexture(oneWinTexture);
    oneWin.setPosition(256,256);

    sf::Texture twoWinTexture;
    twoWinTexture.loadFromFile("Assets/2win.png");
    sf::Sprite twoWin;
    twoWin.setTexture(twoWinTexture);
    twoWin.setPosition(256,256);

    sf::Texture drawTexture;
    drawTexture.loadFromFile("Assets/draw.png");
    sf::Sprite Draw;
    Draw.setTexture(drawTexture);
    Draw.setPosition(256,256);

    while(true)
    {
        sf::RenderWindow window(sf::VideoMode(896, 768), "Connect 4!");
        while (window.isOpen())
        {
            display.load("Assets/tileset.png", sf::Vector2u(128, 128), *board, 7, 6);

            window.clear();
            window.draw(display);
            window.display();

            if (player == 1)
            {
                //cout << "PLAYER 1\n-";
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                    {
                        window.close();
                        return 0;
                    }

                    if (event.type == sf::Event::MouseButtonPressed)
                    {
                        column = getColumn(sf::Vector2i(event.mouseButton.x, event.mouseButton.y));
                        choice = column + 1;

                        result = ingameMove(choice - 1, player);
                        AI.getBoard(board);

                        if (result == 1)
                        {
                            //cout << "Player 1 Win!\n" << endl;
                            display.load("Assets/tileset.png", sf::Vector2u(128, 128), *board, 7, 6);
                            window.clear();
                            window.draw(display);
                            window.draw(oneWin);
                            window.display();
                            resetBoard();
                            loop = true;
                            while(loop)
                            {
                                while (window.pollEvent(end))
                                {
                                    if (end.type == sf::Event::Closed)
                                    {
                                        window.close();
                                        return 0;
                                    }

                                    if (end.type == sf::Event::MouseButtonPressed)
                                    {
                                        window.close();
                                        loop = false;
                                    }
                                }
                            }
                        }

                        else if (result == 2)
                            player = 1;

                        else if (result == 3)
                        {
                            //cout << "Draw!\n";
                            display.load("Assets/tileset.png", sf::Vector2u(128, 128), *board, 7, 6);
                            window.clear();
                            window.draw(display);
                            window.draw(Draw);
                            window.display();
                            resetBoard();
                            loop = true;
                            while(loop)
                            {
                                while (window.pollEvent(end))
                                {
                                    if (end.type == sf::Event::Closed)
                                    {
                                        window.close();
                                        return 0;
                                    }

                                    if (end.type == sf::Event::MouseButtonPressed)
                                    {
                                        window.close();
                                        loop = false;
                                    }
                                }
                            }
                        }
                        else
                            player = 2;
                    }
                }
            }
            else
            {
                ai_choice = AI.move();
                result = ingameMove(ai_choice - 1, player);

                if (result == 1)
                {
                    //cout << "PLAYER 2 Wins!\n";
                    display.load("Assets/tileset.png", sf::Vector2u(128, 128), *board, 7, 6);
                    window.clear();
                    window.draw(display);
                    window.draw(twoWin);
                    window.display();

                    resetBoard();
                    loop = true;
                    while(loop)
                    {
                        while (window.pollEvent(end))
                        {
                            if (end.type == sf::Event::Closed)
                            {
                                window.close();
                                return 0;
                            }

                            if (end.type == sf::Event::MouseButtonPressed)
                            {
                                window.close();
                                loop = false;
                            }
                        }
                    }
                }
                else if (result == 2)
                    player = 2;

                else if (result == 3)
                {
                    //cout << "Draw!\n";
                    display.load("Assets/tileset.png", sf::Vector2u(128, 128), *board, 7, 6);
                    window.clear();
                    window.draw(display);
                    window.draw(Draw);
                    window.display();
                    resetBoard();
                    loop = true;
                    while(loop)
                    {
                        while (window.pollEvent(end))
                        {
                            if (end.type == sf::Event::Closed)
                            {
                                window.close();
                                return 0;
                            }

                            if (end.type == sf::Event::MouseButtonPressed)
                            {
                                window.close();
                                loop = false;
                            }
                        }
                    }
                }
                else
                    player = 1;
            }
        }
    }

    return 0;
}

int ConnectFour::ingameMove(int choice, int player)
{
    int i = rows - 1;
    int j;
    int sum = 0;
    bool possible = true;

    for(j = 0;j < 7; j++)
    {
        if(board[0][j] != 0)
            sum++;
    }
    if(sum == 7)
        return 3;

    while(possible)
    {
        if(board[i][choice] == 0)
        {
            board[i][choice] = player;
            if(winGame(i,choice,player))
                return 1;
            possible = false;
        }
        else if(i == 0)
        {
            return 2;
        }
        else
            i--;
    }
    return 0;
}

bool ConnectFour::winGame(int row,int column, int player)
{
    //Check horizontal
    if(checkHorizontal(row,player))
        return true;
    //Check vertical
    if(checkVertical(column,player))
        return true;
    //Check Diagonal
    if(checkDiagonal(row,column,player))
        return true;

    return false;
}


bool ConnectFour::checkHorizontal(int row, int player)
{
    int i;
    int score = 0;

    for(i = 0; i < columns; i++)
    {
        if(board[row][i] == player)
            score++;
        else
            score = 0;
        if (score == 4)
            return true;
    }

    return false;
}

bool ConnectFour::checkVertical(int column, int player)
{
    int i;
    int score = 0;

    for(i = 0; i < rows; i++)
    {
        if(board[i][column] == player)
            score++;
        else
            score = 0;
        if (score == 4)
            return true;
    }

    return false;
}

bool ConnectFour::checkDiagonal(int row, int column, int player)
{
    int score = 1;
    int count = 1;

    //SE
    while((row+count < rows) && (column+count < columns))
    {
        if(board[row+count][column+count] == player)
        {
            score++;
            count++;
            //cout<<score<<endl;
        }
        else
            break;
    }

    //NW
    count = 1;
    while((row-count >= 0) && (column-count >= 0))
    {
        if(board[row-count][column-count] == player)
        {
            score++;
            count++;
            //cout<<score<<endl;
        }
        else
            break;
    }

    if(score == 4)
        return true;

    score = 1;
    count = 1;
    //SW
    while((row-count >= 0) && (column+count < columns))
    {
        if(board[row-count][column+count] == player)
        {
            score++;
            count++;
            //cout<<score<<endl;
        }
        else
            break;
    }

    //NE
    count = 1;
    while((row+count < rows) && (column-count >= 0))
    {
        if(board[row+count][column-count] == player)
        {
            score++;
            count++;
            //cout<<score<<endl;
        }
        else
            break;
    }

    if(score == 4)
        return true;
    else
        return false;
}

int ConnectFour::getColumn(sf::Vector2i position)
{
    if(position.x < 0 || position.x > 896 || position.y < 0 || position.y > 768)
        return 0;
    float lengthOfColumn = 896/7;
    int currentColumn = position.x/lengthOfColumn;
    return currentColumn;
}

int ConnectFour::getButton(sf::Vector2<int> position)
{
    if(position.x < 0 || position.x > 896 || position.y < 0 || position.y > 768)
        return 0;
    if(position.x > 298 && position.x < 598)
    {
        if (position.y > 400 && position.y < 450)
            return 3;
        else if (position.y > 475 && position.y < 525)
            return 2;
        else if (position.y > 550 && position.y < 600)
            return 1;
        else
            return 0;
    }

    return 0;
}






