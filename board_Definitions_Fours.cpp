#include "board_Prototype.h"

//____________________________________________________________________________________
bool Board::horizontalNonSpace4(int i, int j,char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип четверок          *  O  O  O

    if (j < 12)
    {
        if (playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j + 2].symbol == symbolColor &&
            playing_field[i][j + 3].symbol == symbolColor)
        {
            if (j == 0 && playing_field[i][j + 4].symbol == spaceSymbol &&
                playing_field[i][j + 5].symbol != symbolColor) return true;
            else if (j == 11 && playing_field[i][j - 1].symbol == spaceSymbol &&
                playing_field[i][j - 2].symbol != symbolColor) return true;
            else if (j == 1 && ((playing_field[i][j - 1].symbol == spaceSymbol &&
                playing_field[i][j + 4].symbol != symbolColor) ||
                (playing_field[i][j + 4].symbol == spaceSymbol &&
                    playing_field[i][j - 1].symbol != symbolColor &&
                    playing_field[i][j + 5].symbol != symbolColor))) return true;
            else if (j == 10 && ((playing_field[i][j + 4].symbol == spaceSymbol &&
                playing_field[i][j - 1].symbol != symbolColor) ||
                (playing_field[i][j - 1].symbol == spaceSymbol &&
                    playing_field[i][j - 2].symbol != symbolColor &&
                    playing_field[i][j + 4].symbol != symbolColor))) return true;
            else if (j > 1 && j < 10)
            {
                if (playing_field[i][j - 1].symbol == spaceSymbol &&
                    playing_field[i][j - 2].symbol != symbolColor &&
                    playing_field[i][j + 4].symbol != symbolColor) return true;
                else if (playing_field[i][j + 4].symbol == spaceSymbol &&
                    playing_field[i][j - 1].symbol != symbolColor &&
                    playing_field[i][j + 5].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          O  *  O  O

    if (j > 0 && j < 13)
    {
        if (playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j + 2].symbol == symbolColor &&
            playing_field[i][j - 1].symbol == symbolColor)
        {
            if (j == 1 && playing_field[i][j + 3].symbol == spaceSymbol &&
                playing_field[i][j + 4].symbol != symbolColor) return true;
            else if (j == 12 && playing_field[i][j - 2].symbol == spaceSymbol &&
                playing_field[i][j - 3].symbol != symbolColor) return true;
            else if (j == 2 && ((playing_field[i][j - 2].symbol == spaceSymbol &&
                playing_field[i][j + 3].symbol != symbolColor) ||
                (playing_field[i][j + 3].symbol == spaceSymbol &&
                    playing_field[i][j - 2].symbol != symbolColor &&
                    playing_field[i][j + 4].symbol != symbolColor))) return true;
            else if (j == 11 && ((playing_field[i][j + 3].symbol == spaceSymbol &&
                playing_field[i][j - 2].symbol != symbolColor) ||
                (playing_field[i][j - 2].symbol == spaceSymbol &&
                    playing_field[i][j + 3].symbol != symbolColor &&
                    playing_field[i][j - 3].symbol != symbolColor))) return true;
            else if (j > 2 && j < 10)
            {
                if (playing_field[i][j - 2].symbol == spaceSymbol &&
                    playing_field[i][j - 3].symbol != symbolColor &&
                    playing_field[i][j + 3].symbol != symbolColor)  return true;
                else if (playing_field[i][j + 3].symbol == spaceSymbol &&
                    playing_field[i][j - 2].symbol != symbolColor &&
                    playing_field[i][j + 4].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          O  O  *  O

    if (j > 1 && j < 14)
    {
        if (playing_field[i][j + 1].symbol == symbolColor &&
            playing_field[i][j - 2].symbol == symbolColor &&
            playing_field[i][j - 1].symbol == symbolColor)
        {
            if (j == 2 && playing_field[i][j + 2].symbol == spaceSymbol &&
                playing_field[i][j + 3].symbol != symbolColor) return true;
            else if (j == 13 && playing_field[i][j - 3].symbol == spaceSymbol &&
                playing_field[i][j - 4].symbol != symbolColor) return true;
            else if (j == 3 && ((playing_field[i][j - 3].symbol == spaceSymbol &&
                playing_field[i][j + 2].symbol != symbolColor) ||
                (playing_field[i][j + 2].symbol == spaceSymbol &&
                    playing_field[i][j - 3].symbol != symbolColor &&
                    playing_field[i][j + 3].symbol != symbolColor))) return true;
            else if (j == 12 && ((playing_field[i][j + 2].symbol == spaceSymbol &&
                playing_field[i][j - 3].symbol != symbolColor) ||
                (playing_field[i][j - 3].symbol == spaceSymbol &&
                    playing_field[i][j + 2].symbol != symbolColor &&
                    playing_field[i][j - 4].symbol != symbolColor))) return true;
            else if (j > 3 && j < 12)
            {
                if (playing_field[i][j + 2].symbol == spaceSymbol &&
                    playing_field[i][j - 3].symbol != symbolColor &&
                    playing_field[i][j + 3].symbol != symbolColor)  return true;
                else if (playing_field[i][j - 3].symbol == spaceSymbol &&
                    playing_field[i][j + 2].symbol != symbolColor &&
                    playing_field[i][j - 4].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
   // Проверка на такой тип четверок          O  O  O  *

    if (j > 2)
    {
        if (playing_field[i][j - 1].symbol == symbolColor &&
            playing_field[i][j - 2].symbol == symbolColor &&
            playing_field[i][j - 3].symbol == symbolColor)
        {
            if (j == 3 && playing_field[i][j + 1].symbol == spaceSymbol &&
                playing_field[i][j + 2].symbol != symbolColor) return true;
            else if (j == 14 && playing_field[i][j - 4].symbol == spaceSymbol &&
                playing_field[i][j - 5].symbol != symbolColor) return true;
            else if (j == 4 && ((playing_field[i][j - 4].symbol == spaceSymbol &&
                playing_field[i][j + 1].symbol != symbolColor) ||
                (playing_field[i][j + 1].symbol == spaceSymbol &&
                    playing_field[i][j + 2].symbol != symbolColor &&
                    playing_field[i][j - 4].symbol != symbolColor))) return true;
            else if (j == 13 && ((playing_field[i][j + 1].symbol == spaceSymbol &&
                playing_field[i][j - 4].symbol != symbolColor) ||
                (playing_field[i][j - 4].symbol == spaceSymbol &&
                    playing_field[i][j - 5].symbol != symbolColor &&
                    playing_field[i][j + 1].symbol != symbolColor))) return true;
            else if (j > 4 && j < 13)
            {
                if (playing_field[i][j + 1].symbol == spaceSymbol &&
                    playing_field[i][j + 2].symbol != symbolColor &&
                    playing_field[i][j - 4].symbol != symbolColor) return true;
                else if (playing_field[i][j - 4].symbol == spaceSymbol &&
                    playing_field[i][j + 1].symbol != symbolColor &&
                    playing_field[i][j - 5].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::horizontalSpace4(int i, int j, char symbolColor)
              {
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        *  О  О  -  О

                  if (j < 11)
                  {
                      if (playing_field[i][j + 1].symbol == symbolColor &&
                          playing_field[i][j + 2].symbol == symbolColor &&
                          playing_field[i][j + 3].symbol == spaceSymbol &&
                          playing_field[i][j + 4].symbol == symbolColor)
                      {
                          if (j == 0 && playing_field[i][j + 5].symbol != symbolColor) return true;
                          else if (j == 10 && playing_field[i][j - 1].symbol != symbolColor) return true;
                          else if (j > 0 && j < 10 && playing_field[i][j + 5].symbol != symbolColor &&
                              playing_field[i][j - 1].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        *  О  -  О  О

                  if (j < 11)
                  {
                      if (playing_field[i][j + 1].symbol == symbolColor &&
                          playing_field[i][j + 2].symbol == spaceSymbol &&
                          playing_field[i][j + 3].symbol == symbolColor &&
                          playing_field[i][j + 4].symbol == symbolColor)
                      {
                          if (j == 0 && playing_field[i][j + 5].symbol != symbolColor) return true;
                          else if (j == 10 && playing_field[i][j - 1].symbol != symbolColor) return true;
                          else if (j > 0 && j < 10 && playing_field[i][j + 5].symbol != symbolColor &&
                              playing_field[i][j - 1].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        *  -  О  О  О

                  if (j < 11)
                  {
                      if (playing_field[i][j + 1].symbol == spaceSymbol &&
                          playing_field[i][j + 2].symbol == symbolColor &&
                          playing_field[i][j + 3].symbol == symbolColor &&
                          playing_field[i][j + 4].symbol == symbolColor)
                      {
                          if (j == 0 && playing_field[i][j + 5].symbol != symbolColor) return true;
                          else if (j == 10 && playing_field[i][j - 1].symbol != symbolColor) return true;
                          else if (j > 0 && j < 10 && playing_field[i][j + 5].symbol != symbolColor &&
                              playing_field[i][j - 1].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  -  О  О  *

                  if (j > 3)
                  {
                      if (playing_field[i][j - 1].symbol == symbolColor &&
                          playing_field[i][j - 2].symbol == symbolColor &&
                          playing_field[i][j - 3].symbol == spaceSymbol &&
                          playing_field[i][j - 4].symbol == symbolColor)
                      {
                          if (j == 4 && playing_field[i][j + 1].symbol != symbolColor) return true;
                          else if (j == 14 && playing_field[i][j - 5].symbol != symbolColor) return true;
                          else if (j > 4 && j < 14 && playing_field[i][j - 5].symbol != symbolColor &&
                              playing_field[i][j + 1].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  O  -  О  *

                  if (j > 3)
                  {
                      if (playing_field[i][j - 1].symbol == symbolColor &&
                          playing_field[i][j - 2].symbol == spaceSymbol &&
                          playing_field[i][j - 3].symbol == symbolColor &&
                          playing_field[i][j - 4].symbol == symbolColor)
                      {
                          if (j == 4 && playing_field[i][j + 1].symbol != symbolColor) return true;
                          else if (j == 14 && playing_field[i][j - 5].symbol != symbolColor) return true;
                          else if (j > 4 && j < 14 && playing_field[i][j - 5].symbol != symbolColor &&
                              playing_field[i][j + 1].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  O  О  -  *

                  if (j > 3)
                  {
                      if (playing_field[i][j - 1].symbol == spaceSymbol &&
                          playing_field[i][j - 2].symbol == symbolColor &&
                          playing_field[i][j - 3].symbol == symbolColor &&
                          playing_field[i][j - 4].symbol == symbolColor)
                      {
                          if (j == 4 && playing_field[i][j + 1].symbol != symbolColor) return true;
                          else if (j == 14 && playing_field[i][j - 5].symbol != symbolColor) return true;
                          else if (j > 4 && j < 14 && playing_field[i][j - 5].symbol != symbolColor &&
                              playing_field[i][j + 1].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  *  О  -  O

                  if (j > 0 && j < 12)
                  {
                      if (playing_field[i][j - 1].symbol == symbolColor &&
                          playing_field[i][j + 1].symbol == symbolColor &&
                          playing_field[i][j + 2].symbol == spaceSymbol &&
                          playing_field[i][j + 3].symbol == symbolColor)
                      {
                          if (j == 1 && playing_field[i][j + 4].symbol != symbolColor) return true;
                          else if (j == 11 && playing_field[i][j - 2].symbol != symbolColor) return true;
                          else if (j > 2 && j < 11 && playing_field[i][j - 2].symbol != symbolColor &&
                              playing_field[i][j + 4].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________ 
                  // Проверка на такой тип четверёрок        O  *  -  O  O

                  if (j > 0 && j < 12)
                  {
                      if (playing_field[i][j - 1].symbol == symbolColor &&
                          playing_field[i][j + 1].symbol == spaceSymbol &&
                          playing_field[i][j + 2].symbol == symbolColor &&
                          playing_field[i][j + 3].symbol == symbolColor)
                      {
                          if (j == 1 && playing_field[i][j + 4].symbol != symbolColor) return true;
                          else if (j == 11 && playing_field[i][j - 2].symbol != symbolColor) return true;
                          else if (j > 2 && j < 11 && playing_field[i][j - 2].symbol != symbolColor &&
                              playing_field[i][j + 4].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  -  *  O  O

                  if (j > 1 && j < 13)
                  {
                      if (playing_field[i][j - 1].symbol == spaceSymbol &&
                          playing_field[i][j + 1].symbol == symbolColor &&
                          playing_field[i][j + 2].symbol == symbolColor &&
                          playing_field[i][j - 2].symbol == symbolColor)
                      {
                          if (j == 1 && playing_field[i][j + 4].symbol != symbolColor) return true;
                          else if (j == 11 && playing_field[i][j - 2].symbol != symbolColor) return true;
                          else if (j > 2 && j < 11 && playing_field[i][j - 2].symbol != symbolColor &&
                              playing_field[i][j + 4].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  -  O  *  O

                  if (j > 2 && j < 14)
                  {
                      if (playing_field[i][j - 1].symbol == symbolColor &&
                          playing_field[i][j + 1].symbol == symbolColor &&
                          playing_field[i][j - 2].symbol == spaceSymbol &&
                          playing_field[i][j - 3].symbol == symbolColor)
                      {
                          if (j == 3 && playing_field[i][j + 2].symbol != symbolColor) return true;
                          else if (j == 13 && playing_field[i][j - 4].symbol != symbolColor) return true;
                          else if (j > 3 && j < 13 && playing_field[i][j + 2].symbol != symbolColor &&
                              playing_field[i][j - 4].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  O  -  *  O

                  if (j > 2 && j < 14)
                  {
                      if (playing_field[i][j - 1].symbol == spaceSymbol &&
                          playing_field[i][j + 1].symbol == symbolColor &&
                          playing_field[i][j - 2].symbol == symbolColor &&
                          playing_field[i][j - 3].symbol == symbolColor)
                      {
                          if (j == 3 && playing_field[i][j + 2].symbol != symbolColor) return true;
                          else if (j == 13 && playing_field[i][j - 4].symbol != symbolColor) return true;
                          else if (j > 3 && j < 13 && playing_field[i][j + 2].symbol != symbolColor &&
                              playing_field[i][j - 4].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O  O  *  -  O

                  if (j > 1 && j < 13)
                  {
                      if (playing_field[i][j + 1].symbol == spaceSymbol &&
                          playing_field[i][j - 1].symbol == symbolColor &&
                          playing_field[i][j + 2].symbol == symbolColor &&
                          playing_field[i][j - 2].symbol == symbolColor)
                      {
                          if (j == 3 && playing_field[i][j + 2].symbol != symbolColor) return true;
                          else if (j == 13 && playing_field[i][j - 4].symbol != symbolColor) return true;
                          else if (j > 3 && j < 13 && playing_field[i][j + 2].symbol != symbolColor &&
                              playing_field[i][j - 4].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  return false;
              }
bool Board::verticalNonSpace4(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип четверок          *  
    //                                         O 
    //                                         O 
    //                                         O

    if (i < 12)
    {
        if (playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i + 2][j].symbol == symbolColor &&
            playing_field[i + 3][j].symbol == symbolColor)
        {
            if (i == 0 && playing_field[i + 4][j].symbol == spaceSymbol &&
                playing_field[i + 5][j].symbol != symbolColor) return true;
            else if (i == 11 && playing_field[i - 1][j].symbol == spaceSymbol &&
                playing_field[i - 2][j].symbol != symbolColor) return true;
            else if (i == 1 && ((playing_field[i - 1][j].symbol == spaceSymbol &&
                playing_field[i + 4][j].symbol != symbolColor) ||
                (playing_field[i + 4][j].symbol == spaceSymbol &&
                    playing_field[i - 1][j].symbol != symbolColor &&
                    playing_field[i + 5][j].symbol != symbolColor))) return true;
            else if (i == 10 && ((playing_field[i + 4][j].symbol == spaceSymbol &&
                playing_field[i - 1][j].symbol != symbolColor) ||
                (playing_field[i - 1][j].symbol == spaceSymbol &&
                    playing_field[i - 2][j].symbol != symbolColor &&
                    playing_field[i + 4][j].symbol != symbolColor))) return true;
            else if (i > 1 && i < 10)
            {
                if (playing_field[i - 1][j].symbol == spaceSymbol &&
                    playing_field[i - 2][j].symbol != symbolColor &&
                    playing_field[i + 4][j].symbol != symbolColor) return true;
                else if (playing_field[i + 4][j].symbol == spaceSymbol &&
                    playing_field[i - 1][j].symbol != symbolColor &&
                    playing_field[i + 5][j].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          О  
    //                                         * 
    //                                         O 
    //                                         O

    if (i > 0 && i < 13)
    {
        if (playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i + 2][j].symbol == symbolColor &&
            playing_field[i - 1][j].symbol == symbolColor)
        {
            if (i == 1 && playing_field[i + 3][j].symbol == spaceSymbol &&
                playing_field[i + 4][j].symbol != symbolColor) return true;
            else if (i == 12 && playing_field[i - 2][j].symbol == spaceSymbol &&
                playing_field[i - 3][j].symbol != symbolColor) return true;
            else if (i == 2 && ((playing_field[i - 2][j].symbol == spaceSymbol &&
                playing_field[i + 3][j].symbol != symbolColor) ||
                (playing_field[i + 3][j].symbol == spaceSymbol &&
                    playing_field[i - 2][j].symbol != symbolColor &&
                    playing_field[i + 4][j].symbol != symbolColor))) return true;
            else if (i == 11 && ((playing_field[i][j].symbol == spaceSymbol &&
                playing_field[i - 2][j].symbol != symbolColor) ||
                (playing_field[i - 2][j].symbol == spaceSymbol &&
                    playing_field[i + 3][j].symbol != symbolColor &&
                    playing_field[i - 3][j].symbol != symbolColor))) return true;
            else if (i > 2 && i < 10)
            {
                if (playing_field[i - 2][j].symbol == spaceSymbol &&
                    playing_field[i - 3][j].symbol != symbolColor &&
                    playing_field[i + 3][j].symbol != symbolColor)  return true;
                else if (playing_field[i + 3][j].symbol == spaceSymbol &&
                    playing_field[i - 2][j].symbol != symbolColor &&
                    playing_field[i + 4][j].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          О  
    //                                         O 
    //                                         * 
    //                                         O

    if (i > 1 && i < 14)
    {
        if (playing_field[i + 1][j].symbol == symbolColor &&
            playing_field[i - 2][j].symbol == symbolColor &&
            playing_field[i - 1][j].symbol == symbolColor)
        {
            if (i == 2 && playing_field[i + 2][j].symbol == spaceSymbol &&
                playing_field[i + 3][j].symbol != symbolColor) return true;
            else if (i == 13 && playing_field[i - 3][j].symbol == spaceSymbol &&
                playing_field[i - 4][j].symbol != symbolColor) return true;
            else if (i == 3 && ((playing_field[i][j].symbol == spaceSymbol &&
                playing_field[i + 2][j].symbol != symbolColor) ||
                (playing_field[i + 2][j].symbol == spaceSymbol &&
                    playing_field[i - 3][j].symbol != symbolColor &&
                    playing_field[i + 3][j].symbol != symbolColor))) return true;
            else if (i == 12 && ((playing_field[i + 2][j].symbol == spaceSymbol &&
                playing_field[i - 3][j].symbol != symbolColor) ||
                (playing_field[i - 3][j].symbol == spaceSymbol &&
                    playing_field[i + 2][j].symbol != symbolColor &&
                    playing_field[i - 4][j].symbol != symbolColor))) return true;
            else if (i > 3 && i < 12)
            {
                if (playing_field[i + 2][j].symbol == spaceSymbol &&
                    playing_field[i - 3][j].symbol != symbolColor &&
                    playing_field[i + 3][j].symbol != symbolColor)  return true;
                else if (playing_field[i - 3][j].symbol == spaceSymbol &&
                    playing_field[i + 2][j].symbol != symbolColor &&
                    playing_field[i - 4][j].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          О  
    //                                         O 
    //                                         O 
    //                                         *

    if (i > 2)
    {
        if (playing_field[i - 1][j].symbol == symbolColor &&
            playing_field[i - 2][j].symbol == symbolColor &&
            playing_field[i - 3][j].symbol == symbolColor)
        {
            if (i == 3 && playing_field[i + 1][j].symbol == spaceSymbol &&
                playing_field[i + 2][j].symbol != symbolColor) return true;
            else if (i == 14 && playing_field[i - 4][j].symbol == spaceSymbol &&
                playing_field[i - 5][j].symbol != symbolColor) return true;
            else if (i == 4 && ((playing_field[i - 4][j].symbol == spaceSymbol &&
                playing_field[i + 1][j].symbol != symbolColor) ||
                (playing_field[i + 1][j].symbol == spaceSymbol &&
                    playing_field[i + 2][j].symbol != symbolColor &&
                    playing_field[i - 4][j].symbol != symbolColor))) return true;
            else if (i == 13 && ((playing_field[i + 1][j].symbol == spaceSymbol &&
                playing_field[i - 4][j].symbol != symbolColor) ||
                (playing_field[i - 4][j].symbol == spaceSymbol &&
                    playing_field[i - 5][j].symbol != symbolColor &&
                    playing_field[i + 1][j].symbol != symbolColor))) return true;
            else if (i > 4 && i < 13)
            {
                if (playing_field[i + 1][j].symbol == spaceSymbol &&
                    playing_field[i + 2][j].symbol != symbolColor &&
                    playing_field[i - 4][j].symbol != symbolColor) return true;
                else if (playing_field[i - 4][j].symbol == spaceSymbol &&
                    playing_field[i + 1][j].symbol != symbolColor &&
                    playing_field[i - 5][j].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::verticalSpace4(int i, int j, char symbolColor)
              {
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        * 
                  //                                         О 
                  //                                         О 
                  //                                         - 
                  //                                         О

                  if (i < 11)
                  {
                      if (playing_field[i + 1][j].symbol == symbolColor &&
                          playing_field[i + 2][j].symbol == symbolColor &&
                          playing_field[i + 3][j].symbol == spaceSymbol &&
                          playing_field[i + 4][j].symbol == symbolColor)
                      {
                          if (i == 0 && playing_field[i + 5][j].symbol != symbolColor) return true;
                          else if (i == 10 && playing_field[i - 1][j].symbol != symbolColor) return true;
                          else if (i > 0 && i < 10 && playing_field[i + 5][j].symbol != symbolColor &&
                              playing_field[i - 1][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        *  
                  //                                         О 
                  //                                         -
                  //                                         О 
                  //                                         О

                  if (i < 11)
                  {
                      if (playing_field[i + 1][j].symbol == symbolColor &&
                          playing_field[i + 2][j].symbol == spaceSymbol &&
                          playing_field[i + 3][j].symbol == symbolColor &&
                          playing_field[i + 4][j].symbol == symbolColor)
                      {
                          if (i == 0 && playing_field[i + 5][j].symbol != symbolColor) return true;
                          else if (i == 10 && playing_field[i - 1][j].symbol != symbolColor) return true;
                          else if (i > 0 && i < 10 && playing_field[i + 5][j].symbol != symbolColor &&
                              playing_field[i - 1][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        *
                  //                                         - 
                  //                                         О 
                  //                                         О 
                  //                                         О

                  if (i < 11)
                  {
                      if (playing_field[i + 1][j].symbol == spaceSymbol &&
                          playing_field[i + 2][j].symbol == symbolColor &&
                          playing_field[i + 3][j].symbol == symbolColor &&
                          playing_field[i + 4][j].symbol == symbolColor)
                      {
                          if (i == 0 && playing_field[i + 5][j].symbol != symbolColor) return true;
                          else if (i == 10 && playing_field[i - 1][j].symbol != symbolColor) return true;
                          else if (i > 0 && i < 10 && playing_field[i + 5][j].symbol != symbolColor &&
                              playing_field[i - 1][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O 
                  //                                         -
                  //                                         О
                  //                                         О
                  //                                         *

                  if (i > 3)
                  {
                      if (playing_field[i - 1][j].symbol == symbolColor &&
                          playing_field[i - 2][j].symbol == symbolColor &&
                          playing_field[i - 3][j].symbol == spaceSymbol &&
                          playing_field[i - 4][j].symbol == symbolColor)
                      {
                          if (i == 4 && playing_field[i + 1][j].symbol != symbolColor) return true;
                          else if (i == 14 && playing_field[i - 5][j].symbol != symbolColor) return true;
                          else if (i > 4 && i < 14 && playing_field[i - 5][j].symbol != symbolColor &&
                              playing_field[i + 1][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O 
                  //                                         O 
                  //                                         - 
                  //                                         О 
                  //                                         *

                  if (i > 3)
                  {
                      if (playing_field[i - 1][j].symbol == symbolColor &&
                          playing_field[i - 2][j].symbol == spaceSymbol &&
                          playing_field[i - 3][j].symbol == symbolColor &&
                          playing_field[i - 4][j].symbol == symbolColor)
                      {
                          if (i == 4 && playing_field[i + 1][j].symbol != symbolColor) return true;
                          else if (i == 14 && playing_field[i - 5][j].symbol != symbolColor) return true;
                          else if (i > 4 && i < 14 && playing_field[i - 5][j].symbol != symbolColor &&
                              playing_field[i + 1][j].symbol != symbolColor) return true;
                          else;
                      }
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O 
                  //                                         O 
                  //                                         О 
                  //                                         - 
                  //                                         *

                  if (i > 3)
                  {
                      if (playing_field[i - 1][j].symbol == spaceSymbol &&
                          playing_field[i - 2][j].symbol == symbolColor &&
                          playing_field[i - 3][j].symbol == symbolColor &&
                          playing_field[i - 4][j].symbol == symbolColor)
                      {
                          if (i == 4 && playing_field[i + 1][j].symbol != symbolColor) return true;
                          else if (i == 14 && playing_field[i - 5][j].symbol != symbolColor) return true;
                          else if (i > 4 && i < 14 && playing_field[i - 5][j].symbol != symbolColor &&
                              playing_field[i + 1][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O 
                  //                                         *
                  //                                         О
                  //                                         - 
                  //                                         O

                  if (i > 0 && i < 12)
                  {
                      if (playing_field[i - 1][j].symbol == symbolColor &&
                          playing_field[i + 1][j].symbol == symbolColor &&
                          playing_field[i + 2][j].symbol == spaceSymbol &&
                          playing_field[i + 3][j].symbol == symbolColor)
                      {
                          if (i == 1 && playing_field[i + 4][j].symbol != symbolColor) return true;
                          else if (i == 11 && playing_field[i - 2][j].symbol != symbolColor) return true;
                          else if (i > 2 && i < 11 && playing_field[i - 2][j].symbol != symbolColor &&
                              playing_field[i + 4][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________ 
                  // Проверка на такой тип четверёрок        O 
                  //                                         *  
                  //                                         - 
                  //                                         O 
                  //                                         O

                  if (i > 0 && i < 12)
                  {
                      if (playing_field[i - 1][j].symbol == symbolColor &&
                          playing_field[i + 1][j].symbol == spaceSymbol &&
                          playing_field[i + 2][j].symbol == symbolColor &&
                          playing_field[i + 3][j].symbol == symbolColor)
                      {
                          if (i == 1 && playing_field[i + 4][j].symbol != symbolColor) return true;
                          else if (i == 11 && playing_field[i - 2][j].symbol != symbolColor) return true;
                          else if (i > 2 && i < 11 && playing_field[i - 2][j].symbol != symbolColor &&
                              playing_field[i + 4][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O 
                  //                                         - 
                  //                                         * 
                  //                                         O 
                  //                                         O

                  if (i > 1 && i < 13)
                  {
                      if (playing_field[i - 1][j].symbol == spaceSymbol &&
                          playing_field[i + 1][j].symbol == symbolColor &&
                          playing_field[i + 2][j].symbol == symbolColor &&
                          playing_field[i - 2][j].symbol == symbolColor)
                      {
                          if (i == 1 && playing_field[i + 4][j].symbol != symbolColor) return true;
                          else if (i == 11 && playing_field[i - 2][j].symbol != symbolColor) return true;
                          else if (i > 2 && i < 11 && playing_field[i - 2][j].symbol != symbolColor &&
                              playing_field[i + 4][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O 
                  //                                         - 
                  //                                         O 
                  //                                         * 
                  //                                         O

                  if (i > 2 && i < 14)
                  {
                      if (playing_field[i - 1][j].symbol == symbolColor &&
                          playing_field[i + 1][j].symbol == symbolColor &&
                          playing_field[i - 2][j].symbol == spaceSymbol &&
                          playing_field[i - 3][j].symbol == symbolColor)
                      {
                          if (i == 3 && playing_field[i + 2][j].symbol != symbolColor) return true;
                          else if (i == 13 && playing_field[i - 4][j].symbol != symbolColor) return true;
                          else if (i > 3 && i < 13 && playing_field[i + 2][j].symbol != symbolColor &&
                              playing_field[i - 4][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O
                  //                                         O 
                  //                                         - 
                  //                                         * 
                  //                                         O

                  if (i > 2 && i < 14)
                  {
                      if (playing_field[i - 1][j].symbol == spaceSymbol &&
                          playing_field[i + 1][j].symbol == symbolColor &&
                          playing_field[i - 2][j].symbol == symbolColor &&
                          playing_field[i - 3][j].symbol == symbolColor)
                      {
                          if (i == 3 && playing_field[i + 2][j].symbol != symbolColor) return true;
                          else if (i == 13 && playing_field[i - 4][j].symbol != symbolColor) return true;
                          else if (i > 3 && i < 13 && playing_field[i + 2][j].symbol != symbolColor &&
                              playing_field[i - 4][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  // Проверка на такой тип четверёрок        O
                  //                                         O 
                  //                                         * 
                  //                                         - 
                  //                                         O

                  if (i > 1 && i < 13)
                  {
                      if (playing_field[i + 1][j].symbol == spaceSymbol &&
                          playing_field[i - 1][j].symbol == symbolColor &&
                          playing_field[i + 2][j].symbol == symbolColor &&
                          playing_field[i - 2][j].symbol == symbolColor)
                      {
                          if (i == 3 && playing_field[i + 2][j].symbol != symbolColor) return true;
                          else if (i == 13 && playing_field[i - 4][j].symbol != symbolColor) return true;
                          else if (i > 3 && i < 13 && playing_field[i + 2][j].symbol != symbolColor &&
                              playing_field[i - 4][j].symbol != symbolColor) return true;
                          else;
                      }
                      else;
                  }
                  else;
                  //________________________________________________________________________________
                  return false;
              }
bool Board::secondaryNonSpace4(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  *  
    //                                               O 
    //                                             O 
    //                                           O

    if (i > -1 && i < 12 && j>2 && j < 15)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == symbolColor)
        {
            //______
            if ((i == 0 && j > 3) || (j == 14 && i < 11))
            {
                if (((i == 0 && j == 4) || (i == 10 && j == 14)) &&
                    playing_field[i + 4][j - 4].symbol == spaceSymbol) return true;
                else if (i != 0 && j != 4 && i != 10 && j != 14 &&
                    playing_field[i + 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 5][j - 5].symbol != symbolColor) return true;
                else;
            }
            //______
            else if ((j == 3 && i > 0) || (i == 11 && j < 14))
            {
                if (((i == 1 && j == 3) || (i == 11 && j == 13)) &&
                    playing_field[i - 1][j + 1].symbol == spaceSymbol) return true;
                else if (i != 1 && j != 13 && i != 11 && j != 13 &&
                    playing_field[i - 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 2][j + 2].symbol != symbolColor) return true;
                else;
            }
            //_______
            else if ((i == 1 && j > 3) || (j == 13 && i < 11))
            {
                if ((i == 1 && j == 4) || (i == 10 && j == 13))
                {
                    if (playing_field[i - 1][j + 1].symbol == spaceSymbol
                        && playing_field[i + 4][j - 4].symbol != symbolColor) return true;
                    else if (playing_field[i + 4][j - 4].symbol == spaceSymbol &&
                        playing_field[i - 1][j + 1].symbol != symbolColor)return true;
                    else;
                }
                else if (i != 1 && j != 4 && i != 10 && j != 13)
                {
                    if ((playing_field[i - 1][j + 1].symbol == spaceSymbol &&
                        playing_field[i + 4][j - 4].symbol != symbolColor) ||
                        (playing_field[i + 4][j - 4].symbol == spaceSymbol &&
                            playing_field[i + 5][j - 5].symbol != symbolColor &&
                            playing_field[i - 1][j + 1].symbol != symbolColor)) return true;
                    else;
                }
                else;
            }
            //_______
            else if ((i == 10 && j < 13) || (j == 4 && i > 1))
            {
                if ((playing_field[i - 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 2][j + 2].symbol != symbolColor &&
                    playing_field[i + 4][j - 4].symbol != symbolColor) ||
                    (playing_field[i + 4][j - 4].symbol == spaceSymbol &&
                        playing_field[i - 1][j + 1].symbol != symbolColor))return true;
                else;
            }
            //_______
            else if (i > 1 && i < 10 && j>4 && j < 13)
            {
                if (playing_field[i - 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i + 4][j - 4].symbol == spaceSymbol) return true;
                else if (playing_field[i + 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 5][j - 5].symbol != symbolColor &&
                    playing_field[i - 1][j + 1].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               O 
    //                                             O 
    //                                           *

    if (i > 2 && i<15 && j>-1 && j < 12)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == symbolColor)
        {
            //______
            if ((i == 3 && j > 0) || (j == 11 && j < 14))
            {
                if (((i == 3 && j == 1) || (i == 13 && j == 11))
                    && playing_field[i + 1][j - 1].symbol == spaceSymbol) return true;
                else if (i != 3 && i != 13 && j != 1 && j != 11 &&
                    playing_field[i + 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 2][j - 2].symbol != symbolColor) return true;
                else;
            }
            //______
            else if ((i == 14 && j < 11) || (j == 0 && i > 3))
            {
                if (((i == 4 && j == 0) || (i == 14 && j == 10)) &&
                    playing_field[i - 4][j + 4].symbol == spaceSymbol) return true;
                else if (i != 4 && i != 14 && j != 0 && j != 10 &&
                    playing_field[i - 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 5][j + 5].symbol == spaceSymbol) return true;
                else;
            }
            //______
            else if ((i == 13 && j < 11) || (j == 1 && i > 3))
            {
                if ((i == 4 && j == 1) || (i == 13 && j == 10))
                {
                    if ((playing_field[i + 1][j - 1].symbol == spaceSymbol &&
                        playing_field[i - 4][j + 4].symbol != symbolColor) ||
                        (playing_field[i - 4][j + 4].symbol == spaceSymbol
                            && playing_field[i + 1][j - 1].symbol == spaceSymbol))return true;
                    else if (i != 4 && i != 13 && j != 1 && j != 10)
                    {
                        if (playing_field[i + 1][j - 1].symbol == spaceSymbol &&
                            playing_field[i - 4][j + 4].symbol != symbolColor)return true;
                        else if (playing_field[i - 4][j + 4].symbol == spaceSymbol &&
                            playing_field[i - 5][j + 5].symbol != symbolColor &&
                            playing_field[i + 1][j - 1].symbol != symbolColor)return true;
                        else;
                    }
                    else;
                }
                else;
            }
            //______
            else if ((i == 4 && j > 1) || (j == 10 && i < 13))
            {
                if ((playing_field[i - 4][j + 4].symbol == spaceSymbol
                    && playing_field[i + 1][j - 1].symbol != symbolColor) ||
                    (playing_field[i + 1][j - 1].symbol == spaceSymbol &&
                        playing_field[i + 2][j - 2].symbol != symbolColor &&
                        playing_field[i - 4][j + 4].symbol != symbolColor))return true;
                else;
            }
            //______
            else if (i > 4 && i < 13 && j>1 && j < 10 &&
                ((playing_field[i + 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 2][j - 2].symbol != symbolColor &&
                    playing_field[i - 4][j + 4].symbol != symbolColor) ||
                    (playing_field[i - 4][j + 4].symbol == spaceSymbol &&
                        playing_field[i - 5][j + 5].symbol != symbolColor &&
                        playing_field[i + 1][j - 1].symbol != symbolColor))) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               * 
    //                                             O 
    //                                           O

    if (i > 0 && i < 13 && j>1 && j < 14)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == symbolColor)
        {
            //______
            if ((i == 1 && j > 2) || (j == 13 && i < 12))
            {
                if ((i == 1 && j == 3) || (i == 11 && j == 13) &&
                    playing_field[i + 3][i - 3].symbol == spaceSymbol) return true;
                else if (i != 1 && i != 11 && j != 3 && j != 13 &&
                    (playing_field[i + 3][j - 3].symbol == spaceSymbol &&
                        playing_field[i + 4][j - 4].symbol == spaceSymbol)) return true;
                else;
            }
            //______
            else if ((i == 12 && j > 13) || (j == 2 && i > 1))
            {
                if (((i == 3 && j == 2) || (i == 12 && j == 12)) &&
                    playing_field[i - 2][j + 2].symbol == spaceSymbol)return true;
                else if (i != 3 && j != 2 && i != 12 && j != 12 &&
                    playing_field[i - 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j + 3].symbol != symbolColor)return true;
                else;
            }
            //______
            else if ((i == 2 && j > 2) || (j == 12 && i < 12))
            {
                if ((i == 2 && j == 3) || (i == 11 && j == 12))
                {
                    if (playing_field[i - 2][j + 2].symbol == spaceSymbol &&
                        playing_field[i + 3][j - 3].symbol != symbolColor)return true;
                    else if (playing_field[i + 3][j - 3].symbol == spaceSymbol &&
                        playing_field[i - 2][j + 2].symbol != symbolColor) return true;
                    else;
                }
                else if (i != 2 && j != 3 && i != 1 && j != 12)
                {
                    if (playing_field[i - 2][j + 2].symbol == spaceSymbol &&
                        playing_field[i + 3][j - 3].symbol != symbolColor) return true;
                    else if (playing_field[i + 3][j - 3].symbol == spaceSymbol &&
                        playing_field[i - 2][j + 2].symbol != symbolColor &&
                        playing_field[i + 4][j - 4].symbol != symbolColor) return true;
                    else;
                }
                else;
            }
            //______
            else if ((i == 11 && j < 12 && j>2) || (j == 3 && i > 2 && i < 12))
            {
                if (playing_field[i + 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i - 2][j + 2].symbol != symbolColor)return true;
                else if (playing_field[i - 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j - 3].symbol != symbolColor &&
                    playing_field[i - 3][j + 3].symbol != symbolColor) return true;
                else;
            }
            //______
            else if (i > 2 && i < 11 && j>3 && j < 12)
            {
                if (playing_field[i - 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j + 3].symbol != symbolColor &&
                    playing_field[i + 3][j - 3].symbol != symbolColor) return true;
                else if (playing_field[i + 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i + 4][j - 4].symbol != symbolColor &&
                    playing_field[i - 2][j + 2].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               O 
    //                                             * 
    //                                           O

    if (i > 1 && i < 14 && j>0 && j < 13)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i + 1][j - 1].symbol == symbolColor)
        {
            //______
            if ((i == 2 && j > 1) || (j == 12 && i < 13))
            {
                if ((i == 2 && j == 2) || (i == 12 && j == 12)
                    && playing_field[i + 2][j - 2].symbol == spaceSymbol) return true;
                else if (i != 2 && i != 12 && j != 2 && j != 12 &&
                    playing_field[i + 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j - 3].symbol != symbolColor) return true;
                else;
            }
            //______
            else if ((j == 1 && i > 2) || (i == 13 && j < 12))
            {
                if ((i == 3 && j == 1) || (i == 13 && j == 11)
                    && playing_field[i - 3][j + 3].symbol == spaceSymbol) return true;
                else if (i != 2 && i != 13 && j != 1 && j != 11 &&
                    playing_field[i - 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 4][j + 4].symbol != symbolColor) return true;
                else;
            }
            //______
            else if ((i == 3 && j == 2) || (i == 12 && j == 11))
            {
                if (playing_field[i + 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j + 3].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i + 2][j - 2].symbol != symbolColor)return true;
                else;
            }
            //______
            else if ((i == 3 && j > 2) || (j == 11 && i < 12))
            {
                if (playing_field[i - 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i + 2][j - 2].symbol != symbolColor) return true;
                else if (playing_field[i + 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j - 3].symbol != symbolColor &&
                    playing_field[i - 3][j + 3].symbol != symbolColor)return true;
                else;
            }
            //______
            else if ((i == 12 && j < 11) || (j == 2 && i < 3))
            {
                if (playing_field[i + 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j + 3].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i + 2][j - 2].symbol != symbolColor &&
                    playing_field[i - 4][j + 4].symbol != symbolColor) return true;
                else;
            }
            else if (i > 3 && i < 12 && j>2 && j < 11)
            {
                if (playing_field[i + 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j - 3].symbol != symbolColor &&
                    playing_field[i - 3][j + 3].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 4][j + 4].symbol != symbolColor &&
                    playing_field[i + 2][j - 2].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::secondarySpace4(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               - 
    //                                             O 
    //                                           O
    //                                         *

    if (i > 3 && i<15 && j>-1 && j < 10)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == spaceSymbol &&
            playing_field[i - 4][j + 4].symbol == symbolColor)
            if (((i == 4 && j > 0 && j < 10) || (j == 10 && i > 3 && i < 14)) &&
                playing_field[i + 1][j - 1].symbol != symbolColor) return true;
            else if (((i == 14 && j > -1 && j < 10) || (j == 0 && i < 15 && i>4)) &&
                playing_field[i - 5][j + 5].symbol != symbolColor) return true;
            else if (i > 4 && i < 14 && j>0 && j < 10 &&
                playing_field[i + 1][i - 1].symbol != symbolColor &&
                playing_field[i - 5][j + 5].symbol != symbolColor) return true;
            else;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               O 
    //                                             - 
    //                                           O
    //                                         *

    if (i > 3 && i<15 && j>-1 && j < 10)
    {
        if (playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == spaceSymbol &&
            playing_field[i - 3][j + 3].symbol == symbolColor &&
            playing_field[i - 4][j + 4].symbol == symbolColor) 
            if (((i == 4 && j > 0 && j < 10) || (j == 10 && i > 3 && i < 14)) &&
                playing_field[i + 1][j - 1].symbol != symbolColor) return true;
            else if (((i == 14 && j > -1 && j < 10) || (j == 0 && i < 15 && i>4)) &&
                playing_field[i - 5][j + 5].symbol != symbolColor) return true;
            else if (i > 4 && i < 14 && j>0 && j < 10 &&
                playing_field[i + 1][i - 1].symbol != symbolColor &&
                playing_field[i - 5][j + 5].symbol != symbolColor) return true;
            else;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               O 
    //                                             O 
    //                                           -
    //                                         *

    if (i > 3 && i<15 && j>-1 && j < 10)
    {
        if (playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == symbolColor &&
            playing_field[i - 4][j + 4].symbol == symbolColor) 
            if (((i == 4 && j > 0 && j < 10) || (j == 10 && i > 3 && i < 14)) &&
                playing_field[i + 1][j - 1].symbol != symbolColor) return true;
            else if (((i == 14 && j > -1 && j < 10) || (j == 0 && i < 15 && i>4)) &&
                playing_field[i - 5][j + 5].symbol != symbolColor) return true;
            else if (i > 4 && i < 14 && j>0 && j < 10 &&
                playing_field[i + 1][i - 1].symbol != symbolColor &&
                playing_field[i - 5][j + 5].symbol != symbolColor) return true;
            else;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  *  
    //                                               - 
    //                                             O 
    //                                           O
    //                                         O

    if (i > -1 && i<11 && j>3 && j < 15)
    {
        if (playing_field[i + 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == symbolColor &&
            playing_field[i + 4][j - 4].symbol == symbolColor) 
            if (((i == 0 && j > 3 && j < 15) || (j == 14 && i > -1 && i < 11)) &&
                playing_field[i + 5][j - 5].symbol != symbolColor) return true;
            else if (((i == 10 && j > 3 && j < 15) || (j == 4 && i < 11 && i>-1)) &&
                playing_field[i - 1][j + 1].symbol != symbolColor) return true;
            else if (i > 0 && i < 10 && j>4 && j < 14 &&
                playing_field[i + 5][i - 5].symbol != symbolColor &&
                playing_field[i - 1][j + 1].symbol != symbolColor) return true;
            else;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  *  
    //                                               O 
    //                                             - 
    //                                           O
    //                                         O

    if (i > -1 && i < 11 && j>3 && j < 15)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == spaceSymbol &&
            playing_field[i + 3][j - 3].symbol == symbolColor &&
            playing_field[i + 4][j - 4].symbol == symbolColor) 
            if (((i == 0 && j > 3 && j < 15) || (j == 14 && i > -1 && i < 11)) &&
                playing_field[i + 5][j - 5].symbol != symbolColor) return true;
            else if (((i == 10 && j > 3 && j < 15) || (j == 4 && i < 11 && i>-1)) &&
                playing_field[i - 1][j + 1].symbol != symbolColor) return true;
            else if (i > 0 && i < 10 && j>4 && j < 14 &&
                playing_field[i + 5][i - 5].symbol != symbolColor &&
                playing_field[i - 1][j + 1].symbol != symbolColor) return true;
            else;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  *  
    //                                               O 
    //                                             O 
    //                                           -
    //                                         O


    if (i > -1 && i < 11 && j>3 && j < 15)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == spaceSymbol &&
            playing_field[i + 4][j - 4].symbol == symbolColor) 
            if (((i == 0 && j > 3 && j < 15) || (j == 14 && i > -1 && i < 11)) &&
                playing_field[i + 5][j - 5].symbol != symbolColor) return true;
            else if (((i == 10 && j > 3 && j < 15) || (j == 4 && i < 11 && i>-1)) &&
                playing_field[i - 1][j + 1].symbol != symbolColor) return true;
            else if (i > 0 && i < 10 && j>4 && j < 14 &&
                playing_field[i + 5][i - 5].symbol != symbolColor &&
                playing_field[i - 1][j + 1].symbol != symbolColor) return true;
            else;
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               - 
    //                                             O 
    //                                           *
    //                                         O

    if (i > 2 && i < 14 && j>0 && j < 12)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == spaceSymbol &&
            playing_field[i - 3][j + 3].symbol == symbolColor)
        {
            if (((i == 3 && j > 1 && j < 12) || (j == 11 && i > 2 && i < 13)) &&
                playing_field[i + 2][j - 2].symbol != symbolColor)return true;
            else if (((i == 13 && j > 0 && j < 11) || (j == 1 && i > 3 && i < 14)) &&
                playing_field[i - 4][j + 4].symbol != symbolColor) return true;
            else if (i > 3 && i < 13 && j>1 && j < 11 &&
                playing_field[i + 2][j - 2].symbol != symbolColor &&
                playing_field[i - 4][j + 4].symbol != symbolColor) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               O 
    //                                             - 
    //                                           *
    //                                         O

    if (i > 2 && i < 14 && j>0 && j < 12)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 2][j + 2].symbol == symbolColor &&
            playing_field[i - 3][j + 3].symbol == symbolColor) 
        {
            if (((i == 3 && j > 1 && j < 12) || (j == 11 && i > 2 && i < 13)) &&
                playing_field[i + 2][j - 2].symbol != symbolColor)return true;
            else if (((i == 13 && j > 0 && j < 11) || (j == 1 && i > 3 && i < 14)) &&
                playing_field[i - 4][j + 4].symbol != symbolColor) return true;
            else if (i > 3 && i < 13 && j>1 && j < 11 &&
                playing_field[i + 2][j - 2].symbol != symbolColor &&
                playing_field[i - 4][j + 4].symbol != symbolColor) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               O 
    //                                             * 
    //                                           -
    //                                         O

    if (i > 1 && i < 13 && j>1 && j < 13)
    {
        if (playing_field[i + 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i - 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j + 2].symbol == symbolColor)
        {
            if (((i == 2 && j > 2 && j < 13) || (j == 12 && i > 1 && i < 12)) &&
                playing_field[i + 3][j - 3].symbol != symbolColor)return true;
            else if (((i == 12 && j > 1 && j < 12) || (j == 12 && i > 2 && i < 12)) &&
                playing_field[i - 3][j + 3].symbol != symbolColor) return true;
            else if (i > 2 && i < 12 && j>2 && j < 12 &&
                playing_field[i + 3][j - 3].symbol != symbolColor &&
                playing_field[i - 3][j + 3].symbol != symbolColor) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               * 
    //                                             - 
    //                                           O
    //                                         O

    if (i > 0 && i < 12 && j>2 && j < 14)
    {
        if (playing_field[i + 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i + 3][j - 3].symbol == symbolColor &&
            playing_field[i - 1][j + 1].symbol == symbolColor)
        {
            if (((i == 1 && j > 3 && j < 14) || (j == 13 && i > 0 && i < 11)) &&
                playing_field[i + 4][j - 4].symbol != symbolColor)return true;
            else if (((i == 11 && j > 2 && j < 13) || (j == 3 && i > 1 && i < 12)) &&
                playing_field[i - 2][j + 2].symbol != symbolColor) return true;
            else if (i > 1 && i < 11 && j>3 && j < 13 &&
                playing_field[i + 4][j - 4].symbol != symbolColor &&
                playing_field[i - 2][j + 2].symbol != symbolColor) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               * 
    //                                             O 
    //                                           -
    //                                         O

    if (i > 0 && i < 12 && j>2 && j < 14)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == spaceSymbol &&
            playing_field[i + 3][j - 3].symbol == symbolColor &&
            playing_field[i - 1][j + 1].symbol == symbolColor) 
        {
            if (((i == 1 && j > 3 && j < 14) || (j == 13 && i > 0 && i < 11)) &&
                playing_field[i + 4][j - 4].symbol != symbolColor)return true;
            else if (((i == 11 && j > 2 && j < 13) || (j == 3 && i > 1 && i < 12)) &&
                playing_field[i - 2][j + 2].symbol != symbolColor) return true;
            else if (i > 1 && i < 11 && j>3 && j < 13 &&
                playing_field[i + 4][j - 4].symbol != symbolColor &&
                playing_field[i - 2][j + 2].symbol != symbolColor) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок                  O  
    //                                               - 
    //                                             * 
    //                                           O
    //                                         O

    if (i > 1 && i < 13 && j>1 && j < 13)
    {
        if (playing_field[i + 1][j - 1].symbol == symbolColor &&
            playing_field[i + 2][j - 2].symbol == symbolColor &&
            playing_field[i - 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 2][j + 2].symbol == symbolColor) 
        {
            if (((i == 2 && j > 2 && j < 13) || (j == 12 && i > 1 && i < 12)) &&
                playing_field[i + 3][j - 3].symbol != symbolColor)return true;
            else if (((i == 12 && j > 1 && j < 12) || (j == 12 && i > 2 && i < 12)) &&
                playing_field[i - 3][j + 3].symbol != symbolColor) return true;
            else if (i > 2 && i < 12 && j>2 && j < 12 &&
                playing_field[i + 3][j - 3].symbol != symbolColor &&
                playing_field[i - 3][j + 3].symbol != symbolColor) return true;
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::mainNonSpace4(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип четверок          *  
    //                                           O 
    //                                             O 
    //                                               O

    if (i > -1 && i<12 && j>-1 && j < 12)
    {
        if (playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == symbolColor)
        {
            //_____
            if (((i == 0 && j == 10) || (i == 10 && j == 0))
                && playing_field[i + 4][j + 4].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 0 && j < 10) || (j == 0 && i < 10)) &&
                playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                playing_field[i + 5][j + 5].symbol != symbolColor) return true;
            //_____
            else if (((i == 1 && j == 11) || (i == 11 && j == 1)) &&
                playing_field[i - 1][j - 1].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 11 && j > 1) || (j == 11 && i > 2)) &&
                playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                playing_field[i - 2][j - 2].symbol != symbolColor)return true;
            //_____
            else if ((i == 1 && j == 10) || (i == 10 && j == 1))
            {
                if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 4][j + 4].symbol != symbolColor) return true;
                else if (playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 1][j - 1].symbol != symbolColor)return true;
                else;
            }
            //_____
            else if ((i == 10 && j > 1) || (j == 10 && i > 1))
            {
                if (playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 1][j - 1].symbol != symbolColor) return true;
                else if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor &&
                    playing_field[i + 4][j + 4].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if ((i == 1 && j < 10) || (j == 1 && j < 10))
            {
                if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 4][j + 4].symbol != symbolColor) return true;
                else if (playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 1][j - 1].symbol != symbolColor &&
                    playing_field[i + 5][j + 5].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if (i > 1 && i < 10 && j>1 && j < 10)
            {
                if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor &&
                    playing_field[i + 4][j + 4].symbol != symbolColor) return true;
                else if (playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 1][j - 1].symbol != symbolColor &&
                    playing_field[i + 5][j + 5].symbol != symbolColor) return true;
                else;
            }
            //_____
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          O  
    //                                           O 
    //                                             O 
    //                                               *

    if (i > 2 && i < 15 && j>2 && j < 15)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == symbolColor)
        {
            //_____
            if (((i == 4 && j == 14) || (i == 14 && j == 4))
                && playing_field[i - 4][j - 4].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 3 && j < 13 && j>2) || (j == 3 && i < 13 && i>2)) &&
                playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                playing_field[i + 2][j + 2].symbol != symbolColor) return true;
            //_____
            else if (((i == 14 && j == 4) || (j == 14 && i == 4)) &&
                playing_field[i - 4][j - 4].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 14 && j > 4) || (j == 14 && i > 4)) &&
                playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                playing_field[i - 5][j - 5].symbol != symbolColor)return true;
            //_____
            else if ((i == 13 && j == 4) || (i == 4 && j == 13))
            {
                if (playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 1][j + 1].symbol != symbolColor) return true;
                else if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 4][j - 4].symbol != symbolColor)return true;
                else;
            }
            //_____
            else if ((i == 13 && j > 4 && j < 14) || (j == 13 && i > 4 && i < 14))
            {
                if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 4][j - 4].symbol != symbolColor) return true;
                else if (playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i - 5][j - 5].symbol != symbolColor &&
                    playing_field[i + 1][j + 1].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if ((i == 4 && j < 13) || (j == 4 && i < 13))
            {
                if (playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 1][j + 1].symbol != symbolColor) return true;
                else if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 4][j - 4].symbol != symbolColor &&
                    playing_field[i + 2][j + 2].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if (i > 4 && i < 13 && j>4 && j < 13)
            {
                if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i + 2][j + 2].symbol != symbolColor &&
                    playing_field[i - 4][j - 4].symbol != symbolColor) return true;
                else if (playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 1][j + 1].symbol != symbolColor &&
                    playing_field[i - 5][j - 5].symbol != symbolColor) return true;
                else;
            }
            //_____
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          O  
    //                                           * 
    //                                             O 
    //                                               O

    if (i > 0 && i < 13 && j>0 && j < 13)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == symbolColor)
        {
            //_____
            if (((i == 1 && j == 11) || (i == 11 && j == 1)) &&
                playing_field[i + 3][j + 3].symbol == spaceSymbol)return true;
            //_____
            else if (((i == 2 && j == 12) || (i == 12 && j == 2)) &&
                playing_field[i - 2][j - 2].symbol == spaceSymbol)return true;
            //_____
            else if (((i == 1 && j > 1 && j < 11) || (j == 1 && i > 1 && i < 11)) &&
                playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                playing_field[i + 4][j + 4].symbol != symbolColor) return true;
            //_____
            else if (((i == 12 && j > 2 && j < 13) || (j == 12 && i > 2 && i < 13)) &&
                playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                playing_field[i - 3][j - 3].symbol != symbolColor) return true;
            //_____
            else if ((i == 2 && j == 11) || (i == 11 && j == 2))
            {
                if (playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j + 3].symbol != symbolColor) return true;
                else if (playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if ((i == 2 && j > 1 && j < 11) || (j == 2 && i > 1 && i < 11))
            {
                if (playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j + 3].symbol != symbolColor) return true;
                else if (playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor &&
                    playing_field[i + 4][j + 4].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if ((i == 1 && j > 2 && j < 12) || (j == 11 && i > 2 && i < 12))
            {
                if (playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor)return true;
                else if (playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j - 3].symbol != symbolColor &&
                    playing_field[i + 3][j + 3].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if (i > 2 && i < 11 && j>2 && j < 11)
            {
                if (playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i + 4][j + 4].symbol != symbolColor &&
                    playing_field[i - 2][j - 2].symbol != symbolColor)return true;
                else if (playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j - 3].symbol != symbolColor &&
                    playing_field[i + 3][j + 3].symbol != symbolColor) return true;
                else;
            }
            //_____
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок          O  
    //                                           O 
    //                                             * 
    //                                               O

    if (i > 1 && i < 14 && j>1 && j < 14)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor)
        {
            //_____
            if (((i == 2 && j == 12) || (i == 12 && j == 2)) &&
                playing_field[i + 2][j + 2].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 13 && j == 3) || (i == 3 && j == 13)) &&
                playing_field[i - 3][j - 3].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 2 && j > 1 && j < 12) || (j == 2 && i > 1 && i < 12)) &&
                playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                playing_field[i + 3][i + 3].symbol == spaceSymbol) return true;
            //_____
            else if (((i == 13 && j > 3 && j < 14) || (j == 13 && i > 3 && i < 14)) &&
                playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                playing_field[i - 4][j - 4].symbol != symbolColor)return true;
            //_____
            else if ((i == 12 && j == 3) || (i == 3 && j == 12))
            {
                if (playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i + 2][j + 2].symbol != symbolColor) return true;
                else if (playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j - 3].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if ((i == 3 && j > 2 && j < 12) || (j == 3 && i > 2 && i < 12))
            {
                if (playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i + 2][j + 2].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j - 3].symbol != symbolColor &&
                    playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j + 3].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if ((i == 12 && j > 3 && j < 13) || (j == 12 && i > 3 && i < 13))
            {
                if (playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i - 3][j - 3].symbol != symbolColor)return true;
                else if (playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i - 4][j - 4].symbol != symbolColor &&
                    playing_field[i + 2][j + 2].symbol != symbolColor) return true;
                else;
            }
            //_____
            else if (i > 3 && i < 12 && j>3 && j < 12)
            {
                if (playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i + 3][j + 3].symbol != symbolColor &&
                    playing_field[i - 3][j - 3].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i + 2][j + 2].symbol != symbolColor &&
                    playing_field[i - 4][j - 4].symbol != symbolColor) return true;
            }
            //_____
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
bool Board::mainSpace4(int i, int j, char symbolColor)
{
    //________________________________________________________________________________
    // Проверка на такой тип четверок               *  
    //                                                - 
    //                                                  O 
    //                                                    O
    //                                                      O
    
    if (i > -1 && i<11 && j>-1 && j < 11)
    {
        if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == symbolColor &&
            playing_field[i + 4][j + 4].symbol == symbolColor)
        {
            if (((i == 0 && j > -1 && j < 10) || (j == 0 && i > -1 && i < 10)) &&
                playing_field[i + 5][j + 5].symbol != symbolColor) return true;
            else if (((i == 10 && j > 0 && j < 11) || (j == 10 && i > 0 && i < 11)) &&
                playing_field[i - 1][j - 1].symbol != symbolColor)return true;
            else if (i > 0 && i < 10 && j>0 && j < 10)
            {
                if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 5][j + 5].symbol != symbolColor) return true;
                else if (playing_field[i - 1][j - 1].symbol != symbolColor &&
                    playing_field[i + 5][j + 5].symbol == spaceSymbol) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               *  
    //                                                O 
    //                                                  - 
    //                                                    O
    //                                                      O
    
    if (i > -1 && i<11 && j>-1 && j < 11)
    {
        if (playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == spaceSymbol &&
            playing_field[i + 3][j + 3].symbol == symbolColor &&
            playing_field[i + 4][j + 4].symbol == symbolColor) 
        {
            if (((i == 0 && j > -1 && j < 10) || (j == 0 && i > -1 && i < 10)) &&
                playing_field[i + 5][j + 5].symbol != symbolColor) return true;
            else if (((i == 10 && j > 0 && j < 11) || (j == 10 && i > 0 && i < 11)) &&
                playing_field[i - 1][j - 1].symbol != symbolColor)return true;
            else if (i > 0 && i < 10 && j>0 && j < 10)
            {
                if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 5][j + 5].symbol != symbolColor) return true;
                else if (playing_field[i - 1][j - 1].symbol != symbolColor &&
                    playing_field[i + 5][j + 5].symbol == spaceSymbol) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               *  
    //                                                O 
    //                                                  O 
    //                                                    -
    //                                                      O

    if (i > -1 && i<11 && j>-1 && j < 11)
    {
        if (playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == spaceSymbol &&
            playing_field[i + 4][j + 4].symbol == symbolColor) 
        {
            if (((i == 0 && j > -1 && j < 10) || (j == 0 && i > -1 && i < 10)) &&
                playing_field[i + 5][j + 5].symbol != symbolColor) return true;
            else if (((i == 10 && j > 0 && j < 11) || (j == 10 && i > 0 && i < 11)) &&
                playing_field[i - 1][j - 1].symbol != symbolColor)return true;
            else if (i > 0 && i < 10 && j>0 && j < 10)
            {
                if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
                    playing_field[i + 5][j + 5].symbol != symbolColor) return true;
                else if (playing_field[i - 1][j - 1].symbol != symbolColor &&
                    playing_field[i + 5][j + 5].symbol == spaceSymbol) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                O 
    //                                                  O 
    //                                                    -
    //                                                      *

    if (i > 3 && i<15 && j>3 && j < 15)
    {
        if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == symbolColor &&
            playing_field[i - 4][j - 4].symbol == symbolColor)
        {
            if (((i == 4 && j > 3 && j < 14) || (j == 4 && i > 3 && i < 14)) &&
                playing_field[i + 1][j + 1].symbol != symbolColor) return true;
            else if (((i == 14 && j > 4 && j < 15) || (j == 14 && i > 4 && i < 15)) &&
                playing_field[i - 5][j - 5].symbol != symbolColor)return true;
            else if (i > 4 && i < 14 && j>4 && j < 14)
            {
                if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 5][j - 5].symbol != symbolColor) return true;
                else if (playing_field[i - 5][j - 5].symbol == spaceSymbol &&
                    playing_field[i + 1][j + 1].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                O 
    //                                                  - 
    //                                                    O
    //                                                      *
    if (i > 3 && i < 15 && j>3 && j < 15)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == spaceSymbol &&
            playing_field[i - 3][j - 3].symbol == symbolColor &&
            playing_field[i - 4][j - 4].symbol == symbolColor) 
        {
            if (((i == 4 && j > 3 && j < 14) || (j == 4 && i > 3 && i < 14)) &&
                playing_field[i + 1][j + 1].symbol != symbolColor) return true;
            else if (((i == 14 && j > 4 && j < 15) || (j == 14 && i > 4 && i < 15)) &&
                playing_field[i - 5][j - 5].symbol != symbolColor)return true;
            else if (i > 4 && i < 14 && j>4 && j < 14)
            {
                if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 5][j - 5].symbol != symbolColor) return true;
                else if (playing_field[i - 5][j - 5].symbol == spaceSymbol &&
                    playing_field[i + 1][j + 1].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                - 
    //                                                  O 
    //                                                    O
    //                                                      *
    if (i > 3 && i < 15 && j>3 && j < 15)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == spaceSymbol &&
            playing_field[i - 4][j - 4].symbol == symbolColor) 
        {
            if (((i == 4 && j > 3 && j < 14) || (j == 4 && i > 3 && i < 14)) &&
                playing_field[i + 1][j + 1].symbol != symbolColor) return true;
            else if (((i == 14 && j > 4 && j < 15) || (j == 14 && i > 4 && i < 15)) &&
                playing_field[i - 5][j - 5].symbol != symbolColor)return true;
            else if (i > 4 && i < 14 && j>4 && j < 14)
            {
                if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
                    playing_field[i - 5][j - 5].symbol != symbolColor) return true;
                else if (playing_field[i - 5][j - 5].symbol == spaceSymbol &&
                    playing_field[i + 1][j + 1].symbol != symbolColor) return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                * 
    //                                                  - 
    //                                                    O
    //                                                      O

    if (i > 0 && i < 12 && j>0 && j < 12)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i + 1][j + 1].symbol == spaceSymbol &&
            playing_field[i + 2][j + 2].symbol == symbolColor &&
            playing_field[i + 3][j + 3].symbol == symbolColor)
        {
            if (((i == 1 && j > 0 && j < 11) || (j == 1 && i > 0 && i < 11)) &&
                playing_field[i + 4][j + 4].symbol != symbolColor)return true;
            else if (((i == 11 && j > 1 && j < 12) || (j == 11 && i > 1 && i < 12)) &&
                playing_field[i - 2][j - 2].symbol != symbolColor)return true;
            else if (i > 1 && i < 11 && j>2 && j < 11)
            {
                if (playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor)return true;
                else if (playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 4][j + 4].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                * 
    //                                                  O 
    //                                                    -
    //                                                      O

    if (i > 0 && i < 12 && j>0 && j < 12)
    {
        if (playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == spaceSymbol &&
            playing_field[i + 3][j + 3].symbol == symbolColor) 
        {
            if (((i == 1 && j > 0 && j < 11) || (j == 1 && i > 0 && i < 11)) &&
                playing_field[i + 4][j + 4].symbol != symbolColor)return true;
            else if (((i == 11 && j > 1 && j < 12) || (j == 11 && i > 1 && i < 12)) &&
                playing_field[i - 2][j - 2].symbol != symbolColor)return true;
            else if (i > 1 && i < 11 && j>2 && j < 11)
            {
                if (playing_field[i + 4][j + 4].symbol == spaceSymbol &&
                    playing_field[i - 2][j - 2].symbol != symbolColor)return true;
                else if (playing_field[i - 2][j - 2].symbol == spaceSymbol &&
                    playing_field[i + 4][j + 4].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                - 
    //                                                  * 
    //                                                    O
    //                                                      O

    if (i > 1 && i < 13 && j>1 && j < 13)
    {
        if (playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == symbolColor)
        {
            if (((i == 2 && j > 1 && j < 12) || (j == 2 && i > 1 && i < 12)) &&
                playing_field[i + 3][j + 3].symbol != symbolColor)return true;
            else if (((i == 12 && j > 2 && j < 13) || (j == 12 && i > 2 && i < 13)) &&
                playing_field[i - 3][j - 3].symbol != symbolColor)return true;
            else if (i > 2 && i < 12 && j>2 && j < 12)
            {
                if (playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 3][j - 3].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i + 3][j + 3].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                O 
    //                                                  * 
    //                                                    -
    //                                                      O

    if (i > 1 && i < 13 && j>1 && j < 13)
    {
        if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i + 2][j + 2].symbol == symbolColor) 
        {
            if (((i == 2 && j > 1 && j < 12) || (j == 2 && i > 1 && i < 12)) &&
                playing_field[i + 3][j + 3].symbol != symbolColor)return true;
            else if (((i == 12 && j > 2 && j < 13) || (j == 12 && i > 2 && i < 13)) &&
                playing_field[i - 3][j - 3].symbol != symbolColor)return true;
            else if (i > 2 && i < 12 && j>2 && j < 12)
            {
                if (playing_field[i + 3][j + 3].symbol == spaceSymbol &&
                    playing_field[i - 3][j - 3].symbol != symbolColor) return true;
                else if (playing_field[i - 3][j - 3].symbol == spaceSymbol &&
                    playing_field[i + 3][j + 3].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                O 
    //                                                  - 
    //                                                    *
    //                                                      O

    if (i > 2 && i < 14 && j>2 && j < 14)
    {
        if (playing_field[i + 1][j + 1].symbol == symbolColor &&
            playing_field[i - 1][j - 1].symbol == spaceSymbol &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == symbolColor)
        {
            if (((i == 3 && j > 2 && j < 13) || (j == 3 && i > 2 && i < 13)) &&
                playing_field[i + 2][j + 2].symbol != symbolColor)return true;
            else if (((i == 13 && j > 3 && j < 14) || (j == 13 && i > 3 && i < 14)) &&
                playing_field[i - 4][j - 4].symbol != symbolColor)return true;
            else if (i > 3 && i < 13 && j>3 && j < 13)
            {
                if (playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i - 4][j - 4].symbol != symbolColor)return true;
                else if (playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 2][j + 2].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    // Проверка на такой тип четверок               O  
    //                                                - 
    //                                                  O 
    //                                                    *
    //                                                      O

    if (i > 2 && i < 14 && j>2 && j < 14)
    {
        if (playing_field[i + 1][j + 1].symbol == spaceSymbol &&
            playing_field[i - 1][j - 1].symbol == symbolColor &&
            playing_field[i - 2][j - 2].symbol == symbolColor &&
            playing_field[i - 3][j - 3].symbol == symbolColor) 
        {
            if (((i == 3 && j > 2 && j < 13) || (j == 3 && i > 2 && i < 13)) &&
                playing_field[i + 2][j + 2].symbol != symbolColor)return true;
            else if (((i == 13 && j > 3 && j < 14) || (j == 13 && i > 3 && i < 14)) &&
                playing_field[i - 4][j - 4].symbol != symbolColor)return true;
            else if (i > 3 && i < 13 && j>3 && j < 13)
            {
                if (playing_field[i + 2][j + 2].symbol == spaceSymbol &&
                    playing_field[i - 4][j - 4].symbol != symbolColor)return true;
                else if (playing_field[i - 4][j - 4].symbol == spaceSymbol &&
                    playing_field[i + 2][j + 2].symbol != symbolColor)return true;
                else;
            }
            else;
        }
        else;
    }
    else;
    //________________________________________________________________________________
    return false;
}
//____________________________________________________________________________________
bool Board::horizontal4(int i, int j, char symbolColor)
{
    if (horizontalNonSpace4(i, j, symbolColor) == true) return true;
    else if (horizontalSpace4(i, j, symbolColor) == true) return true;
    else return false;
}
bool Board::vertical4(int i, int j, char symbolColor)
{
    if (verticalNonSpace4(i, j, symbolColor) == true)return true;
    else if (verticalSpace4(i, j, symbolColor) == true)return true;
    else return false;
} 
bool Board::secondaryDiagonals4(int i, int j, char symbolColor)
{
    if (secondaryNonSpace4(i, j, symbolColor) == true) return true;
    else if (secondarySpace4(i, j, symbolColor) == true)return true;
    else return false;
}
bool Board::mainDiagonals4(int i, int j, char symbolColor)
{
    if (mainNonSpace4(i, j, symbolColor) == true) return true;
    else if (mainSpace4(i, j, symbolColor) == true)return true;
    else return false;
    return false;
}
//____________________________________________________________________________________
bool Board::forkDetect4(int i, int j, char symbolColor)
{
    int linesCount4 = 0;
    if (horizontal4(i, j, symbolColor) == true) linesCount4++; else;
    if (vertical4(i, j, symbolColor) == true) linesCount4++; else;
    if (mainDiagonals4(i, j, symbolColor) == true)linesCount4++; else;
    if (secondaryDiagonals4(i, j, symbolColor) == true)linesCount4++; else;
    if (linesCount4 > 1) return true;
    else return false;
}
//____________________________________________________________________________________