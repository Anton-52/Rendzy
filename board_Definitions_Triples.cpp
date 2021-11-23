#include "board_Prototype.h"
//____________________________________________________________________________________
bool Board::horizontalNonSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    //    Проверка на такой тип троек          O  O  *

    if (j > 2 && j < 14)
    {
        if (playing_field[i][j - 1].symbol == symbolColor &&
            playing_field[i][j - 2].symbol == symbolColor &&
            playing_field[i][j - 3].symbol == spaceSymbol &&
            playing_field[i][j + 1].symbol == spaceSymbol)
        {
            if (j == 3 && playing_field[i][j + 2].symbol == spaceSymbol) return true;
            else if (j == 13 && playing_field[i][j - 4].symbol == spaceSymbol) return true;
            else if (playing_field[i][j + 2].symbol == spaceSymbol ||
                playing_field[i][j - 4].symbol == spaceSymbol) return true;
            else return false;
        }
        else;
    }
    else;
    //________________________________________________________________________________
     //    Проверка на такой тип троек          *  O  O

    if (j > 0 && j < 12)
    {
        if (playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j + 2].symbol == symbolColor &&
            playing_field[i][j + 3].symbol == spaceSymbol &&
            playing_field[i][j - 1].symbol == spaceSymbol)
        {
            if (j == 1 && playing_field[i][j + 4].symbol == spaceSymbol) return true;
            else if (j == 11 && playing_field[i][j - 2].symbol == spaceSymbol) return true;
            else if (playing_field[i][j + 4].symbol == spaceSymbol ||
                playing_field[i][j - 2].symbol == spaceSymbol) return true;
            else return false;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    //     Проверка на такой тип троек            O  *  O

    if (j > 1 && j < 13)
    {
        if (playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j + 2].symbol == spaceSymbol &&
            playing_field[i][j - 2].symbol == spaceSymbol &&
            playing_field[i][j - 1].symbol == symbolColor)
        {
            if (j == 2 && playing_field[i][j + 3].symbol == spaceSymbol) return true;
            else if (j == 11 && playing_field[i][j - 3].symbol == spaceSymbol) return true;
            else if (playing_field[i][j + 3].symbol == spaceSymbol ||
                playing_field[i][j - 3].symbol == spaceSymbol) return true;
            else return false;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::horizontalSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек            O - *  O

    if (j > 2 && j < 13)
    {
        if (playing_field[i][j - 1].symbol == spaceSymbol &&
            playing_field[i][j - 2].symbol == symbolColor &&
            playing_field[i][j - 3].symbol == spaceSymbol &&
            playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j + 2].symbol == spaceSymbol)
            return true;
        else;;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O  * - O
    
    if (j > 1 && j < 12)
    {
        if (playing_field[i][j - 1].symbol == symbolColor &&
            playing_field[i][j - 2].symbol == spaceSymbol &&
            playing_field[i][j + 3].symbol == spaceSymbol &&
            playing_field[i][j + 1].symbol == spaceSymbol &&
            playing_field[i][j + 2].symbol == symbolColor)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            * - O  O

    if (j > 0 && j < 11)
    {
        if (playing_field[i][j + 1].symbol == spaceSymbol &&
            playing_field[i][j + 2].symbol == symbolColor &&
            playing_field[i][j + 3].symbol == symbolColor &&
            playing_field[i][j - 1].symbol == spaceSymbol &&
            playing_field[i][j + 4].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O  O -  *

    if (j > 3 && j < 14)
    {
        if (playing_field[i][j + 1].symbol == spaceSymbol &&
            playing_field[i][j - 2].symbol == symbolColor &&
            playing_field[i][j - 3].symbol == symbolColor &&
            playing_field[i][j - 1].symbol == spaceSymbol &&
            playing_field[i][j - 4].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O - O  *
    if (j > 3 && j < 14)
    {
        if (playing_field[i][j + 1].symbol == spaceSymbol &&
            playing_field[i][j - 1].symbol == symbolColor &&
            playing_field[i][j - 3].symbol == symbolColor &&
            playing_field[i][j - 2].symbol == spaceSymbol &&
            playing_field[i][j - 4].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            *  O - O
 
    if (j > 0 && j < 11)
    {
        if (playing_field[i][j - 1].symbol == spaceSymbol &&
            playing_field[i][j + 2].symbol == spaceSymbol &&
            playing_field[i][j + 3].symbol == symbolColor &&
            playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j + 4].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    return false;

}
bool Board::verticalNonSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек            O 
    //                                        O 
    //                                        *

    if (i > 2 && i < 14)
    {
        if (playing_field[i + 1][j].symbol == spaceSymbol &&
            playing_field[i - 1][j].symbol == symbolColor &&
            playing_field[i - 2][j].symbol == symbolColor &&
            playing_field[i - 3][j].symbol == spaceSymbol)
        {
            if (i == 3 && playing_field[i + 2][j].symbol == spaceSymbol) return true;
            else if (i == 13 && playing_field[i - 4][j].symbol == spaceSymbol) return true;
            else if (playing_field[i + 2][j].symbol == spaceSymbol ||
                playing_field[i - 4][j].symbol == spaceSymbol)return true;
            else return false;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            * 
    //                                        O 
    //                                        O

    if (i > 0 && i < 12)
    {
        if (playing_field[i - 1][j].symbol == spaceSymbol &&
            playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i + 2][j].symbol == symbolColor &&
            playing_field[i + 3][j].symbol == spaceSymbol)
        {
            if (i == 1 && playing_field[i + 4][j].symbol == spaceSymbol) return true;
            else if (i == 11 && playing_field[i - 2][j].symbol == spaceSymbol) return true;
            else if (playing_field[i - 2][j].symbol == spaceSymbol ||
                playing_field[i + 4][j].symbol == spaceSymbol)return true;
            else return false;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O 
    //                                        * 
    //                                        O

    if (i > 1 && i < 13)
    {
        if (playing_field[i - 1][j].symbol == symbolColor &&
            playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i + 2][j].symbol == spaceSymbol &&
            playing_field[i - 2][j].symbol == spaceSymbol)
        {
            if (i == 2 && playing_field[i + 3][j].symbol == spaceSymbol) return true;
            else if (i == 12 && playing_field[i - 3][j].symbol == spaceSymbol) return true;
            else if (playing_field[i - 3][j].symbol == spaceSymbol &&
                playing_field[i + 3][j].symbol == spaceSymbol)return true;
            else return false;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::verticalSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек            O 
    //                                        * 
    //                                        -
    //                                        O

    if (i > 2 && i < 13)
    {
        if (playing_field[i - 1][j].symbol == spaceSymbol &&
            playing_field[i - 2][j].symbol == symbolColor &&
            playing_field[i - 3][j].symbol == spaceSymbol &&
            playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i + 2][j].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O 
    //                                        - 
    //                                        *
    //                                        O

    if (i > 1 && i < 12)
    {
        if (playing_field[i - 1][j].symbol == symbolColor &&
            playing_field[i - 2][j].symbol == spaceSymbol &&
            playing_field[i + 1][j].symbol == spaceSymbol &&
            playing_field[i + 2][j].symbol == symbolColor &&
            playing_field[i + 3][j].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            * 
    //                                        - 
    //                                        O
    //                                        O

    if (i > 0 && i < 11)
    {
        if (playing_field[i + 1][j].symbol == spaceSymbol &&
            playing_field[i - 1][j].symbol == spaceSymbol &&
            playing_field[i + 2][j].symbol == symbolColor &&
            playing_field[i + 3][j].symbol == symbolColor &&
            playing_field[i + 4][j].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O
    //                                        O 
    //                                        -
    //                                        *

    if (i > 3 && i < 14)
    {
        if (playing_field[i + 1][j].symbol == spaceSymbol &&
            playing_field[i - 1][j].symbol == spaceSymbol &&
            playing_field[i - 2][j].symbol == symbolColor &&
            playing_field[i - 3][j].symbol == symbolColor &&
            playing_field[i - 4][j].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            O
    //                                        - 
    //                                        O
    //                                        *

    if (i > 3 && i < 14)
    {
        if (playing_field[i + 1][j].symbol == spaceSymbol &&
            playing_field[i - 2][j].symbol == spaceSymbol &&
            playing_field[i - 1][j].symbol == symbolColor &&
            playing_field[i - 3][j].symbol == symbolColor &&
            playing_field[i - 4][j].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек            *
    //                                        O 
    //                                        -
    //                                        O

    if (i > 0 && i < 11)
    {
        if (playing_field[i - 1][j].symbol == spaceSymbol &&
            playing_field[i + 2][j].symbol == spaceSymbol &&
            playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i + 3][j].symbol == symbolColor &&
            playing_field[i - 4][j].symbol == spaceSymbol)
            return true;
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::secondaryNonSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек                  O 
    //                                           O
    //                                        *

    if (i > 2 && i < 14 && j > 0 && j < 12)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == spaceSymbol &&
            playing_field[i + 1][j - 1].symbol == spaceSymbol)
        {
            if (((i == 3 && j > 1) || (j == 11 && i < 12)) &&
                playing_field[i + 2][j - 2].symbol == spaceSymbol) return true;
            else if (((i == 13 && j < 11) || (j == 1 && i > 3)) &&
                playing_field[i - 4][j + 4].symbol == spaceSymbol) return true;
            else if ((i > 3 && i < 13 && j > 1 && j < 11) &&
                (playing_field[i + 2][j - 2].symbol == spaceSymbol ||
                    playing_field[i - 4][j + 4].symbol == spaceSymbol)) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек                  * 
    //                                           O
    //                                        O

    if (i > 0 && i < 12 && j > 2 && j < 14)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == spaceSymbol &&
            playing_field[i - 1][j + 1].symbol == spaceSymbol)
        {
            if (((i == 1 && j > 3) || (j == 13 && i < 10)) &&
                playing_field[i + 4][j - 4].symbol == spaceSymbol) return true;
            else if (((i == 11 && j < 12) || (j == 3 && i > 1)) &&
                playing_field[i - 2][j + 2].symbol == spaceSymbol) return true;
            else if ((i > 1 && i < 11 && j > 3 && j < 13) &&
                (playing_field[i - 2][j + 2].symbol == spaceSymbol ||
                    playing_field[i + 4][j - 4].symbol == spaceSymbol)) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек                  O 
    //                                           *
    //                                        O

    if (i > 1 && i < 13 && j > 1 && j < 13)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == spaceSymbol &&
            playing_field[i + 2][j - 2].symbol == spaceSymbol)
        {
            if (((i == 2 && j > 2) || (j == 12 && i < 12)) &&
                playing_field[i + 3][j - 3].symbol == spaceSymbol) return true;
            else if (((i == 12 && j < 12) || (j == 2 && i > 2)) &&
                playing_field[i - 3][j + 3].symbol == spaceSymbol) return true;
            else if ((i > 2 && i < 12 && j > 2 && j < 12) &&
                (playing_field[i + 3][j - 3].symbol == spaceSymbol ||
                    playing_field[i - 3][j + 3].symbol == spaceSymbol)) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::secondarySpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек                 O 
    //                                           -
    //                                         *
    //                                       O

    if (i > 2 && i < 1 && j > 1 && j < 12)
    {
        if (playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == spaceSymbol &&
            playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек                 O 
    //                                           *
    //                                         -
    //                                       O

    if (i > 1 && i < 12 && j > 2 && j < 13)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == spaceSymbol &&
            playing_field[i + 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек                 O 
    //                                           O
    //                                         -
    //                                       *

    if (i > 3 && i < 14 && j > 0 && j < 11)
    {
        if (playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == symbolColor &&
            playing_field[i - 4][j + 4].symbol == spaceSymbol &&
            playing_field[i + 1][j - 1].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек                 * 
    //                                           -
    //                                         O
    //                                       O

    if (i > 0 && i < 11 && j > 3 && j < 14)
    {
        if (playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == symbolColor &&
            playing_field[i + 4][j - 4].symbol == spaceSymbol &&
            playing_field[i + 1][j - 1].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    /// Проверка на такой тип троек                 O 
    //                                           -
    //                                         O
    //                                       *

    if (i > 3 && i < 14 && j > 0 && j < 11)
    {
        if (playing_field[i + 1][j - 1].symbol == spaceSymbol &&
            playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == spaceSymbol &&
            playing_field[i - 4][j + 4].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек                 * 
    //                                           O
    //                                         -
    //                                       O

    if (i > 0 && i < 11 && j > 3 && j < 14)
    {
        if (playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == spaceSymbol &&
            playing_field[i + 4][j - 4].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::mainNonSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек         O 
    //                                        O
    //                                           *

    if (i > 2 && i < 14 && j > 2 && j < 14)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == spaceSymbol)
        {
            if (((i == 3 && j > 2) || (j == 3 && i > 2)) &&
                playing_field[i + 2][j + 2].symbol == spaceSymbol) return true;
            else if (((i == 13 && j > 3) || (j == 13 && i > 3)) &&
                playing_field[i - 4][j - 4].symbol == spaceSymbol) return true;
            else if (playing_field[i + 2][j + 2].symbol == spaceSymbol ||
                playing_field[i - 4][j - 4].symbol == spaceSymbol) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек         * 
    //                                        O
    //                                           O

    if (i > 0 && i < 12 && j > 0 && j < 12)
    {
        if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == spaceSymbol)
        {
            if (((i == 1 && j < 11) || (j == 1 && i < 10)) &&
                playing_field[i + 4][j + 4].symbol == spaceSymbol) return true;
            else if (((i == 11 && j > 1) || (j == 11 && i > 1)) &&
                playing_field[i - 2][j - 2].symbol == spaceSymbol) return true;
            else if ((i > 1 && i < 11 && j > 1 && j < 11) &&
                (playing_field[i - 2][j - 2].symbol == spaceSymbol ||
                    playing_field[i + 4][j + 4].symbol == spaceSymbol)) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек         O 
    //                                        *
    //                                           O

    if (i > 1 && i < 13 && j > 1 && j < 13)
    {
        if (playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == spaceSymbol &&
            playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == spaceSymbol)
        {
            if (((i == 2 && j < 12) || (j == 2 && i < 12)) &&
                playing_field[i + 3][j + 3].symbol == spaceSymbol) return true;
            else if (((i == 12 && j > 2) || (j == 12 && i > 2)) &&
                playing_field[i - 3][j - 3].symbol == spaceSymbol) return true;
            else if ((i > 2 && i < 12 && j > 2 && j < 12) && 
                (playing_field[i + 3][j + 3].symbol == spaceSymbol ||
                playing_field[i - 3][j - 3].symbol == spaceSymbol)) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::mainSpace3(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип троек              O 
    //                                            -
    //                                              *
    //                                                O

    if (i > 2 && i < 13 && j > 2 && j < 13)
    {
        if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек              O 
    //                                            *
    //                                              -
    //                                                O

    if (i > 1 && i < 12 && j > 1 && j < 12)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == spaceSymbol &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек           O 
    //                                         O
    //                                           -
    //                                             *

    if (i > 3 && i < 14 && j > 3 && j < 14)
    {
        if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == symbolColor &&
            playing_field[i - 4][j - 4].symbol == spaceSymbol &&
            playing_field[i - 1][j - 1].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек           * 
    //                                         -
    //                                           O
    //                                             O

    if (i > 0 && i < 11 && j > 0 && j < 11)
    {
        if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == symbolColor &&
            playing_field[i + 4][j + 4].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек           * 
    //                                         O
    //                                           -
    //                                             O

    if (i > 0 && i < 11 && j > 0 && j < 11)
    {
        if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 2][j + 2].symbol == spaceSymbol &&
            playing_field[i + 3][j + 3].symbol == symbolColor &&
            playing_field[i + 4][j + 4].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == symbolColor) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип троек           O 
    //                                         -
    //                                           O
    //                                             *

    if (i > 3 && i < 14 && j > 3 && j < 14)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == spaceSymbol &&
            playing_field[i - 3][j - 3].symbol == symbolColor &&
            playing_field[i - 4][j - 4].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == spaceSymbol) return true;
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
//____________________________________________________________________________________
bool Board::horizontal3(int i, int j, char symbolColor)
{
    if (horizontalNonSpace3(i, j, symbolColor) == true) return true;
    else if (horizontalSpace3(i, j, symbolColor) == true) return true;
    else return false;

}
bool Board::vertical3(int i, int j, char symbolColor)
{
    if (verticalNonSpace3(i, j, symbolColor) == true)return true;
    else if (verticalSpace3(i, j, symbolColor) == true)return true;
    else return false;
}
bool Board::mainDiagonals3(int i, int j, char symbolColor)
{
    if (mainNonSpace3(i, j, symbolColor) == true) return true;
    else if (mainSpace3(i, j, symbolColor) == true) return true;
    else return false;
}
bool Board::secondaryDiagonals3(int i, int j, char symbolColor)
{
    if (secondaryNonSpace3(i, j, symbolColor) == true)return true;
    else if (secondarySpace3(i, j, symbolColor) == true) return true;
    else return false;
}
//____________________________________________________________________________________
bool Board::forkDetect3(int i, int j, char symbolColor)
{
    int lines3Count = 0;
    if (horizontal3(i, j, symbolColor) == true) lines3Count++; else;
    if (vertical3(i, j, symbolColor) == true) lines3Count++; else;
    if (mainDiagonals3(i, j, symbolColor) == true)lines3Count++; else;
    if (secondaryDiagonals3(i, j, symbolColor) == true)lines3Count++; else;
    if (lines3Count > 1) return true;
    else return false;
}
//____________________________________________________________________________________