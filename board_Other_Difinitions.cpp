#include "board_Prototype.h"


Board::Board()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            playing_field[i][j].symbol = spaceSymbol;
            playing_field[i][j].avaliable = true;
            playing_field[i][j].blockedToNextMove = false;
            if (i == 7 && j == 7)
            {
                playing_field[i][j].symbol = blackSymbol;
                playing_field[i][j].avaliable = false;
                playing_field[i][j].blockedToNextMove = true;
                freeSpace--;
            }
        }
    }
 }
void Board::render(int setLine, int setColomn)
{
    HANDLE hcd = GetStdHandle(STD_OUTPUT_HANDLE);
    char visiableDesk[19][21] =
    {
     {' ', ' ', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', ' ', ' ', ' '},
     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
     {' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '0', ' '},
     {' ', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', ' '},
     {' ', '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '2', ' '},
     {' ', '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '3', ' '},
     {' ', '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '4', ' '},
     {' ', '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '5', ' '},
     {' ', '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '6', ' '},
     {' ', '7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '7', ' '},
     {' ', '8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '8', ' '},
     {' ', '9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '9', ' '},
     {'1', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '0'},
     {'1', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '1'},
     {'1', '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '2'},
     {'1', '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '3'},
     {'1', '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '4'},
     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
     {' ', ' ', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', ' ', ' ', ' '},
    };

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            visiableDesk[i + 2][j + 3] = playing_field[i][j].symbol;
        }
    }

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (visiableDesk[i][j] == blackSymbol) 
            {
                if (i == setLine && j == setColomn)
                {
                    SetConsoleTextAttribute(hcd, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                    cout << visiableDesk[i][j];
                    SetConsoleTextAttribute(hcd, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << " ";
                }
                else
                {
                    SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << visiableDesk[i][j] << " ";
                    SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                }
            }
            else if (visiableDesk[i][j] == whiteSymbol)
            {
                if (i == setLine && j == setColomn)
                {
                    SetConsoleTextAttribute(hcd, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                    cout << visiableDesk[i][j];
                    SetConsoleTextAttribute(hcd, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << " ";
                }
                else
                {
                    SetConsoleTextAttribute(hcd, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    cout << visiableDesk[i][j] << " ";
                    SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                }
            }
            else
            {
                if (i == setLine && j == setColomn)
                {
                    
                    SetConsoleTextAttribute(hcd, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                    cout << visiableDesk[i][j];
                    SetConsoleTextAttribute(hcd, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << " ";
                }
                else
                {
                    if (i > 1 && i < 17 && j>2 && j < 18)
                    {
                        if (playing_field[i - 2][j - 3].blockedToNextMove == true)
                        {
                            SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE |
                                BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                            cout << visiableDesk[i][j];
                            SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            cout << " ";
                        }
                        else
                        {
                            SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                            cout << visiableDesk[i][j] << " ";
                            SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                        }
                    }
                    else
                    {
                        SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                        cout << visiableDesk[i][j] << " ";
                        SetConsoleTextAttribute(hcd, FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                }
            }
        }
        cout << endl;
    }
    cout << freeSpace;
}
void Board::ruleTest(char symbolColor)
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (playing_field[i][j].avaliable == true && playing_field[i][j].blockedToNextMove == false)
            {
                if (forkDetect3(i, j, symbolColor) == true ||
                    forkDetect4(i, j, symbolColor) == true ||
                    longLineDetect(i, j, 6, symbolColor) == true)
                {
                    if (longLineDetect(i, j, 5, symbolColor) == true);
                    else playing_field[i][j].blockedToNextMove = true;
                }
                else;
            }
        }
    }
}
void Board::refresh()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (playing_field[i][j].avaliable == true && playing_field[i][j].blockedToNextMove == true)
                playing_field[i][j].blockedToNextMove = false;
        }
    }
}