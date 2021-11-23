#include "board_Prototype.h"
bool Board::longLineDetect(int i, int j,int length,char symbolColor)
{

	//if (i > -1 && i<15 && j>-1 && j < 15)
	//{
		// Странно... почему-то это условие не работает
		// На весь код ниже, приходится включать его
		// В каждый цикл for. и не только туда.
		playing_field[i][j].symbol = symbolColor;
		int symbolColorCount = 0;
//__________________________________________________________________________________
	    // Проверка на горизонтальный длинный ряд.

		for (int k = j; i > -1 && i<15 && j>-1 && j < 15 && k < 15; k++)
		{
			if (playing_field[i][k].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		for (int k = j; i > -1 && i<15 && j>-1 && j < 15 && k > -1; k--)
		{
			if (playing_field[i][k].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		symbolColorCount--;
		if (length == 5 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount == length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else if (length == 6 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount >= length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else
		{
			cout << "invalid parametr length. It can be only 5 or 6";
			return false;
		}
		symbolColorCount = 0;
//__________________________________________________________________________________
		// Проверка на вертикальный длинный ряд.
		
		for (int k = i; i > -1 && i<15 && j>-1 && j < 15 && k < 15; k++)
		{
			if (playing_field[k][j].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		for (int k = i; i > -1 && i<15 && j>-1 && j < 15 && k > -1; k--)
		{
			if (playing_field[k][j].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		symbolColorCount--;
		if (length == 5 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount == length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else if (length == 6 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount >= length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else
		{
			cout << "invalid parametr length. It can be only 5 or 6";
			return false;
		}
		symbolColorCount = 0;
//_________________________________________________________________________________
	    // Проверка на длинный ряд, параллельний побочной диагонали.
		for (int n = i, m = j; n > -1 && n<15 && m>-1 && m < 15; n--, m++)
		{
			if (playing_field[n][m].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		for (int n = i, m = j; n > -1 && n<15 && m>-1 && m < 15; n++, m--)
		{
			if (playing_field[n][m].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		symbolColorCount--;
		if (length == 5 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount == length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else if (length == 6 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount >= length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else
		{
			cout << "invalid parametr length. It can be only 5 or 6";
			return false;
		}
		symbolColorCount = 0;
//__________________________________________________________________________________
		// Проверка на длинный ряд, параллельний главной диагонали.
		for (int n = i, m = j; n > -1 && n<15 && m>-1 && m < 15; n++, m++)
		{
			if (playing_field[n][m].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		for (int n = i, m = j; n > -1 && n<15 && m>-1 && m < 15; n--, m--)
		{
			if (playing_field[n][m].symbol == symbolColor) symbolColorCount++;
			else break;
		}
		symbolColorCount--;
		if (length == 5 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount == length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else if (length == 6 && i > -1 && i<15 && j>-1 && j < 15)
		{
			if (symbolColorCount >= length)
			{
				playing_field[i][j].symbol = spaceSymbol;
				return true;
			}
			else;
		}
		else
		{
			cout << "invalid parametr length. It can be only 5 or 6";
			return false;
		}
		symbolColorCount = 0;
	//}
	//else return false;
		if( i > -1 && i<15 && j>-1 && j < 15) playing_field[i][j].symbol = spaceSymbol;else;
	return false;
}
