#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>

using namespace std;
struct cell
{
    bool avaliable,blockedToNextMove;
    char symbol;
};


class Board
{
public:
    //________________________________________________________________________________
    //     **Функции в этом разделе принимают в качестве аргументов координату
    //       Клетки игрового поля. 
    //     **Возвращаяют TRUE, если ход черных в эту клетку ПРИВОДИТ к образованию
    //       Тройки, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ, в противном случае возвращают
    //       FALSE
    //     
    bool horizontalNonSpace3(int i, int j, char symbolColor);
    bool horizontalSpace3(int i, int j, char symbolColor);
    bool verticalNonSpace3(int i, int j, char symbolColor);
    bool verticalSpace3(int i, int j, char symbolColor);
    bool secondaryNonSpace3(int i, int j, char symbolColor);
    bool secondarySpace3(int i, int j, char symbolColor);
    bool mainNonSpace3(int i, int j, char symbolColor);
    bool mainSpace3(int i, int j, char symbolColor);
    //________________________________________________________________________________
    //     **Функции в этом разделе принимают в качестве аргументов координату
    //       Клетки игрового поля.
    //     **Возвращают TRUE и FALSE в тех же случаях, 
    //       что и функции предыдущего раздела,
    //     **По сути являются промежуточным звеном абстракции между
    //       функциями предыдущего раздела и функцией определяющей наличие
    //       вилки 3 х 3, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ.
    //   
    bool horizontal3(int i, int j, char symbolColor);
    bool vertical3(int i, int j, char symbolColor);
    bool mainDiagonals3(int i, int j, char symbolColor);
    bool secondaryDiagonals3(int i, int j, char symbolColor);
    //________________________________________________________________________________
    //     **Эта функция принимаетв качестве аргументов координату
    //       Клетки игрового поля.
    //     **Возвращаяет TRUE, если ход черных в эту клетку ПРИВОДИТ к образованию
    //       Вилки 3 х 3, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ, в противном случае возвращаeт
    //       FALSE
    //
    bool forkDetect3(int i, int j, char symbolColor);
    //________________________________________________________________________________
    






    //________________________________________________________________________________
    //     **Функции в этом разделе принимают в качестве аргументов координату
    //       Клетки игрового поля. 
    //     **Возвращаяют TRUE, если ход черных в эту клетку ПРИВОДИТ к образованию
    //       Четверки, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ, в противном случае возвращают
    //       FALSE
    //     
    bool horizontalNonSpace4(int i, int j, char symbolColor);
    bool horizontalSpace4(int i, int j, char symbolColor);
    bool verticalNonSpace4(int i, int j, char symbolColor);
    bool verticalSpace4(int i, int j, char symbolColor);
    bool secondaryNonSpace4(int i, int j, char symbolColor);
    bool secondarySpace4(int i, int j, char symbolColor);
    bool mainNonSpace4(int i, int j, char symbolColor);
    bool mainSpace4(int i, int j, char symbolColor);
    //________________________________________________________________________________
    //     **Функции в этом разделе принимают в качестве аргументов координату
    //       Клетки игрового поля.
    //     **Возвращают TRUE и FALSE в тех же случаях, 
    //       что и функции предыдущего раздела,
    //     **По сути являются промежуточным звеном абстракции между
    //       функциями предыдущего раздела и функцией определяющей наличие
    //       вилки 4 х 4, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ.
    //   
    bool horizontal4(int i, int j, char symbolColor);
    bool vertical4(int i, int j, char symbolColor);
    bool secondaryDiagonals4(int i, int j, char symbolColor);
    bool mainDiagonals4(int i, int j, char symbolColor);
    //________________________________________________________________________________
    //     **Эта функция принимаетв качестве аргументов координату
    //       Клетки игрового поля.
    //     **Возвращаяет TRUE, если ход черных в эту клетку ПРИВОДИТ к образованию
    //       Вилки 4 х 4, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ, в противном случае возвращаeт
    //       FALSE
    //
    bool forkDetect4(int i, int j, char symbolColor);
    //________________________________________________________________________________
      

    //________________________________________________________________________________
    // Создание игрового поля и определения для игровых символов.
    Board();
    void render(int setLine, int setColomn);
    void ruleTest(char symbolColor);
    void refresh();
    char blackSymbol = 'O', whiteSymbol = 'X', spaceSymbol = '.',winner = ' ';
    cell playing_field[15][15];
    int freeSpace = 225;



    //________________________________________________________________________________
    //     **Эта функция принимаетв качестве аргументов координату
    //       Клетки игрового поля.
    //     **Возвращает TRUE, если ход черных в эту клетку Приводит к образованию
    //       Длинного ряда или Пятерки, СОГЛАСНО ПРАВИЛАМ ИГРЫ РЭНДЗЮ, в противном случае 
    //       возвращает FALSE.

    bool longLineDetect(int i, int j, int length, char symbolColor);
    //________________________________________________________________________________
    private:
};

