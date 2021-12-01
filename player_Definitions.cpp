#include "player_Prototype.h"

using namespace std;

void Player::setCell(Board& desk,char playerColor,int rank,int move)
{
	HANDLE hcd = GetStdHandle(STD_OUTPUT_HANDLE);
	if (human == true)
	{
		int setLine = 9, setColumn = 10;
		while (true)
		{
			if (blackSymbolPlayer == true && desk.freeSpace == 0)
			{
				desk.winner = desk.whiteSymbol;
				return;
			}
			else if (whiteSymbolPlayer == true && desk.freeSpace == 0)
			{
				desk.winner = desk.blackSymbol;
				return;
			}
			else;
			system("cls");
			if (blackSymbolPlayer == true) desk.ruleTest(desk.blackSymbol);
			else;
			desk.render(setLine, setColumn);
			int code = _getch();
			if (code == 72)
			{
				if (setLine == 2) setLine = 16;
				else setLine--;
			}
			else if (code == 80)
			{
				if (setLine == 16)setLine = 2;
				else setLine++;
			}
			else if (code == 75)
			{
				if (setColumn == 3) setColumn = 17;
				else setColumn--;
			}
			else if (code == 77)
			{
				if (setColumn == 17) setColumn = 3;
				else setColumn++;
			}
			else if (code == 13)
			{
				if (blackSymbolPlayer == true &&
					desk.playing_field[setLine - 2][setColumn - 3].avaliable == true &&
					desk.playing_field[setLine - 2][setColumn - 3].blockedToNextMove == false)
				{
					if (desk.longLineDetect(setLine - 2, setColumn - 3, 5, desk.blackSymbol) == true)
					{
						desk.winner = desk.blackSymbol;
						return;
					}
					desk.playing_field[setLine - 2][setColumn - 3].symbol = desk.blackSymbol;
					desk.playing_field[setLine - 2][setColumn - 3].avaliable = false;
					desk.playing_field[setLine - 2][setColumn - 3].blockedToNextMove = true;
					desk.freeSpace--;
					return;
     			}
				else if (whiteSymbolPlayer == true &&			
					desk.playing_field[setLine - 2][setColumn - 3].avaliable == true &&		
					desk.playing_field[setLine - 2][setColumn - 3].blockedToNextMove == false)
				{
					if ((desk.longLineDetect(setLine - 2, setColumn - 3, 5, desk.whiteSymbol) == true) || 
						(desk.longLineDetect(setLine - 2, setColumn - 3, 6, desk.whiteSymbol) == true))
					{
						desk.winner = desk.whiteSymbol;
						return;
					}
					desk.playing_field[setLine - 2][setColumn - 3].symbol = desk.whiteSymbol;
					desk.playing_field[setLine - 2][setColumn - 3].avaliable = false;
					desk.playing_field[setLine - 2][setColumn - 3].blockedToNextMove = true;
					desk.freeSpace--;
					return;
				}
				else;
			}
			desk.refresh();
		}
	}
	else if (bot == true)
	{
		
		//int grades[15][15];
		while (true)
		{
			if (blackSymbolPlayer == true && desk.freeSpace == 0)
			{
				desk.winner = desk.whiteSymbol;
				return;
			}
			else if (whiteSymbolPlayer == true && desk.freeSpace == 0)
			{
				desk.winner = desk.blackSymbol;
				return;
			}
			else;
			system("cls");
			if (blackSymbolPlayer == true) desk.ruleTest(desk.blackSymbol);
			else;
			desk.render(0, 0);
			
			int line = 0, column = 0;
			treeNode* bestMove = new treeNode;
			bestMove = minMax(desk, playerColor,rank,move);
			line = bestMove->line;
			column = bestMove->column;
			
			if (whiteSymbolPlayer == true && desk.playing_field[line][column].avaliable == true
				&& desk.playing_field[line][column].blockedToNextMove == false)
			{
				if (desk.longLineDetect(line, column, 5, desk.whiteSymbol) == true)
				{
					desk.winner = desk.whiteSymbol;
					return;
				}
				desk.playing_field[line][column].symbol = desk.whiteSymbol;
				desk.playing_field[line][column].avaliable = false;
				desk.freeSpace--;
				return;
			}
			else if (blackSymbolPlayer == true && desk.playing_field[line][column].avaliable == true
				&& desk.playing_field[line][column].blockedToNextMove == false)
			{
				if (desk.longLineDetect(line, column, 5, desk.blackSymbol) == true)
				{
					desk.winner = desk.blackSymbol;
					return;
				}
				desk.playing_field[line][column].symbol = desk.blackSymbol;
				desk.playing_field[line][column].avaliable = false;
				desk.freeSpace--;
				return;
			}
			desk.refresh();
		}
	}
}
int Player::evaluationFunction(int i, int j, Board desk, char playerColor)
{
	int Grade = 0, whiteNonSpace3 = 0, whiteNonSpace4 = 0,
		whiteLongLine = 0, whiteNonSpaceFork3 = 0, whiteNonSpaceFork4 = 0, whiteNonSpaceFork3x4 = 0,
		blackNonSpace3 = 0, blackNonSpace4 = 0, blackLongLine = 0, blackNonSpaceFork3x4 = 0;
	//____________________________________________________________________________________________________
	// Получим информацию о том какие комбинацию получаются при ходе
	// В выбранную клетку для любого игрока.
	//____________________________________________________________________________________________________
	// Белые тройки
	if (desk.horizontalNonSpace3(i, j, desk.whiteSymbol) == true) whiteNonSpace3++;
	if (desk.verticalNonSpace3(i, j, desk.whiteSymbol) == true)whiteNonSpace3++;
	if (desk.secondaryNonSpace3(i, j, desk.whiteSymbol) == true) whiteNonSpace3++;
	if (desk.mainNonSpace3(i, j, desk.whiteSymbol) == true)whiteNonSpace3++;
	// Белые четверки
	if (desk.horizontalNonSpace4(i, j, desk.whiteSymbol) == true) whiteNonSpace4++;
	if (desk.verticalNonSpace4(i, j, desk.whiteSymbol) == true) whiteNonSpace4++;
	if (desk.secondaryNonSpace4(i, j, desk.whiteSymbol) == true) whiteNonSpace4++;
	if (desk.mainNonSpace4(i, j, desk.whiteSymbol) == true) whiteNonSpace4++;
	// Белые пятерки и длинные ряды
	if (desk.longLineDetect(i, j, 5, desk.whiteSymbol) == true) whiteLongLine++;
	if (desk.longLineDetect(i, j, 6, desk.whiteSymbol) == true) whiteLongLine++;
	// Белые Вилки 3х3 без пустого пространства
	if (whiteNonSpace3 > 1) whiteNonSpaceFork3++;
	// Белые Вилки 4х4 без пустого пространства
	if (whiteNonSpace4 > 1) whiteNonSpaceFork4++;
	// Белые Вилки 3х4 без пустого пространства
	if (whiteNonSpace3 >= 1 && whiteNonSpace4 >= 1) whiteNonSpaceFork3x4++;
	//____________________________________________________________________________________________________
// Черные тройки
	if (desk.horizontalNonSpace3(i, j, desk.blackSymbol) == true) blackNonSpace3++;
	if (desk.verticalNonSpace3(i, j, desk.blackSymbol) == true)  blackNonSpace3++;
	if (desk.secondaryNonSpace3(i, j, desk.blackSymbol) == true) blackNonSpace3++;
	if (desk.mainNonSpace3(i, j, desk.blackSymbol) == true) blackNonSpace3++;
	// Черные четверки
	if (desk.horizontalNonSpace4(i, j, desk.blackSymbol) == true) blackNonSpace4++;
	if (desk.verticalNonSpace4(i, j, desk.blackSymbol) == true) blackNonSpace4++;
	if (desk.secondaryNonSpace4(i, j, desk.blackSymbol) == true)blackNonSpace4++;
	if (desk.mainNonSpace4(i, j, desk.blackSymbol) == true)blackNonSpace4++;
	// Черные Пятерки
	if (desk.longLineDetect(i, j, 5, desk.blackSymbol) == true) blackLongLine++;
	// Черные Вилки 3х4 без пустого пространства
	if (blackNonSpace3 >= 1 && blackNonSpace4 >= 1) blackNonSpaceFork3x4++;
	//____________________________________________________________________________________________________
	if (desk.blackSymbol == playerColor)
	{
		// Перехватываем инициативу, если у противника нет комбинаций
		if (whiteNonSpace3 == 0 &&  whiteNonSpace4 == 0 &&  whiteLongLine == 0 &&
			whiteNonSpaceFork3 == 0  && whiteNonSpaceFork4 == 0 &&
			 whiteNonSpaceFork3x4 == 0 )
		{
			//100% победа, ставим!
			if (blackLongLine != 0)
			{
				Grade = 1000;
				return Grade;
			}
			else
			{
				// Меняя коэффициенты мы меняем значимость комбинаций, так можно задать манеру игры
				Grade = blackNonSpace3 * 1 +  blackNonSpace4 * 1  + blackNonSpaceFork3x4 * 1 ;
				return Grade;
			}
		}
		// Обороняемся
		else
		{
			//100% проигрыш, ставим!
			if (whiteLongLine != 0)
			{
				Grade = 1000;
				return Grade;
			}
			// Если победных ситуаций у нас нет, то такая ситуация 100% проигрыш, ставим!
			else if (whiteNonSpaceFork3 != 0  || whiteNonSpaceFork4 != 0 || whiteNonSpaceFork3x4 != 0)
			{
				Grade = 1000;
				return Grade;
			}
			//Ставим выйгрышную комбинацию быстрее соперника
			else if (blackLongLine != 0)
			{
				Grade = 1000;
				return Grade;
			}
			// Потенциально нежелательные ситуации, с возможностью перехвата инициативы
			else {
				// Меняя коэффициенты мы меняем значимость комбинаций, так можно задать манеру игры
				Grade = blackNonSpace3 * 1 +  blackNonSpace4 * 1  + blackNonSpaceFork3x4 * 1 ;
				Grade = Grade + whiteNonSpace3 * 10  + whiteNonSpace4 * 20 ;
				return Grade;
			}
		}
	}
	else if (desk.whiteSymbol == playerColor)
	{
		// Перехватываем инициативу, если у противника нет комбинаций
		if (blackNonSpace3 == 0 &&  blackNonSpace4 == 0  && blackLongLine == 0 &&
			blackNonSpaceFork3x4 == 0 )
		{
			// 100% победа
			if (whiteLongLine != 0)
			{
				Grade = 1000;
				return Grade;
			}
			else
			{
				// Меняя коэффициенты мы меняем значимость комбинаций, так можно задать манеру игры
				Grade = whiteNonSpace3 * 1  + whiteNonSpace4 * 1   +
					whiteNonSpaceFork3 * 1   + whiteNonSpaceFork4 * 1+
					  whiteNonSpaceFork3x4 * 1 ;
				return Grade;
			}
		}
		// Обороняемся
		else
		{
			//100% проигрыш, ставим!
			if (blackLongLine != 0)
			{
				Grade = 1000;
				return Grade;
			}
			// Если победных ситуаций у нас нет, то такая ситуация 100% проигрыш, ставим!
			else if (blackLongLine != 0 || blackNonSpaceFork3x4 != 0 )
			{
				Grade = 1000;
				return Grade;
			}
			//Ставим выйгрышную комбинацию быстрее соперника
			else if (whiteLongLine != 0)
			{
				Grade = 1000;
				return Grade;
			}
			// Потенциально нежелательные ситуации, с возможностью перехвата инициативы
			else
			{
				// Меняя коэффициенты мы меняем значимость комбинаций, так можно задать манеру игры
				Grade = whiteNonSpace3 * 1  + whiteNonSpace4 * 1  + whiteNonSpaceFork3 
					* 1 + whiteNonSpaceFork4 * 1 + whiteNonSpaceFork3x4 * 1 ;
				Grade = Grade + blackNonSpace3 * 10  + blackNonSpace4 * 20;
				return Grade;
			}
		}
	}
	else return 0;
}
treeNode* Player::minMax(Board desk, char playerColor , int rank,int move)
{
	treeNode* bestMoove = new treeNode;
	vector<treeNode*> valideMoves;
	// Обходим все поле
	// Выбираем выгодные для хода клетки
	int line1 = 0, column1 = 0, line2=0, column2=0;
	if (move == 1)
	{
		line1 = 6;
		line2 = 9;
		column1 = 6;
		column2 = 9;
	}
	else if (move == 2)
	{
		line1 = 5;
		line2 = 10;
		column1 = 5;
		column2 = 10;
	}
	else
	{
		line1 = 0;
		line2 = 15;
		column1 = 0;
		column2 = 15;
	}

	
	for (int i = line1; i < line2; i++)
	{
		for (int j = column1; j < column2; j++)
		{
			if (desk.playing_field[i][j].avaliable == false ||
				desk.playing_field[i][j].blockedToNextMove == true);
			else
			{
				int Grade = evaluationFunction(i, j, desk, playerColor);
				if (Grade < 1)
				{

				}
				else
				{
					int alpha = -10000, beta = +10000;
					treeNode* root = new treeNode;
					root->line = i;
					root->column = j;
					root->parent = NULL;
					root->level = 0;
					root->value = Grade;
					valideMoves.push_back(root);
					sonsAdder(i, j, desk, root->level, playerColor, root, rank , alpha , beta );
				}
			}
		}
	}
	// если все клетки имеют оценку 0,
	// делается ход в первую свободную клетку поля
	if (valideMoves.size() == 0)
	{
		for (int i = line1; i < line2; i++)
		{
			for (int j = column1; j < column2; j++)
			{
				if (desk.playing_field[i][j].avaliable == true &&
					desk.playing_field[i][j].blockedToNextMove == false)
				{
					bestMoove->line = i;
					bestMoove->column = j;
					return bestMoove;
				}
				else;
			}
		}
	}
	else;
	// выбирается лучший из корней построенных деревьев
	bestMoove->value = -1;
	for (unsigned int i = 0; i < valideMoves.size(); i++)
	{
		if (valideMoves[i]->value > bestMoove->value)
		{
			bestMoove->value = valideMoves[i]->value;
			bestMoove->column = valideMoves[i]->column;
			bestMoove->level = valideMoves[i]->level;
			bestMoove->line = valideMoves[i]->line;
			bestMoove->parent = NULL;
		}
		else;
	}
	return bestMoove;
}
void Player::sonsAdder(int i, int j, Board desk, int level,
	char playerColor, treeNode* root, int rank , int alpha, int beta)
{
	level++;
	if (level > rank) return;
	if (playerColor == desk.blackSymbol)
	{
		if (level % 2 == 0) playerColor = desk.blackSymbol;
		else playerColor = desk.whiteSymbol;
	}
	else if (playerColor == desk.whiteSymbol)
	{
		if (level % 2 == 0) playerColor = desk.whiteSymbol;
		else playerColor = desk.blackSymbol;
	}

	firstEval = true;
	// Обходим все поле и выбираем лучшие клетки
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (desk.playing_field[i][j].avaliable == false ||
				desk.playing_field[i][j].blockedToNextMove == true);
			else
			{
				//________________________________________________
				// АЛЬФА - БЕТА ОТСЕЧЕНИЕ
				// 
				// Если клетка свободна и доступна 
				// для хода 
				// Проверяем значения альфа и бета
				// Дальше либо строим дерево решений для
				// Этой клетки, либо прекращаем.
				if (root->level == 0)
				{
					if (alpha == beta);
					else if (alpha > beta) return;
					else;
				}
				else if (alpha >= beta) return;
				else;
				//________________________________________________
				int Grade = evaluationFunction(i, j, desk, playerColor);
				if (Grade < 1);
				else
				{
					treeNode* son = new treeNode;
					son->line = i;
					son->column = j;
					son->parent = root;
					son->level = level;
					son->value = Grade;
					firstEval = false;
					root->sons.push_back(son);
					sonsAdder(i, j, desk, level, playerColor, son, rank, alpha, beta);
					if (firstEval == true)
					{
						son->parent->value = son->value;
					}
					else
					{
						if (level % 2 != 0)
						{
							if (son->value > son->parent->value)
								son->parent->value = son->value;
							// Уточняем Бета
							alpha = son->value;

						}
						else
						{
							if (son->value < son->parent->value)
								son->parent->value = son->value;
							// Уточняем альфа
							beta = son->value;
						}
					}

				}
			}
		}
	}
	level--;
}
