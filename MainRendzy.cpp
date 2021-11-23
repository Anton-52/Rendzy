#include "player_Prototype.h"


using namespace std;

void selectMode(bool& PvP, bool& PvE);
void PvPMode(Player person1, Player person2, Board& desk);

int main()
{
	bool PvP = false, PvE = false;
		
	selectMode(PvP, PvE);
	if (PvP == true)
	{
		Board desk;
		Player person1, person2;
		person1.human = true;
		person2.human = true;
		person1.blackSymbolPlayer = true;
		person2.whiteSymbolPlayer = true;
		PvPMode(person1, person2, desk);
	}
	else if (PvE == true)
	{
		Board desk;
		Player person1, person2;
		cout << " 1 black \n 2 white";
		char choise;
		choise = _getch();
		if (choise == '1')
		{
			person1.blackSymbolPlayer = true;
			person2.whiteSymbolPlayer = true;
			person2.bot = true;
			person1.human = true;
		}
		else if (choise == '2')
		{
			person1.blackSymbolPlayer = true;
			person2.whiteSymbolPlayer = true;
			person2.human = true;
			person1.bot = true;
		}
		PvPMode(person1, person2, desk);
	}
}

void selectMode(bool& PvP, bool& PvE)
{
	int modeKey = 0;
	int code = 0;
	while (true)
	{
		if (modeKey == 0)
		{
			system("cls");
			cout << "   Select A Geme Mode" << endl;
			cout << "-> PvP Mode" << endl;
			cout << "   PvE Mode" << endl;
		}
		else if (modeKey == 1)
		{
			system("cls");
			cout << "   Select A Geme Mode" << endl;
			cout << "   PvP Mode" << endl;
			cout << "-> PvE Mode" << endl;
		}
		else;
		code = _getch();
		if (code == 80)
		{
			if (modeKey == 1) modeKey = 0;
			else modeKey++;
		}
		else if (code == 72)
		{
			if (modeKey == 0) modeKey = 1;
			else modeKey--;
		}
		else if (code == 13)
		{
			if (modeKey == 0) PvP = true;
			else PvE = true;
			break;
		}
	}
	return;
}
void PvPMode(Player person1 , Player person2, Board& desk)
{
	while (true)
	{
		person2.setCell(desk,desk.whiteSymbol,4);
		if (desk.winner == desk.blackSymbol)
		{
			cout << "BLACK PLAYER WIN";
			return;
		}
		else if (desk.winner == desk.whiteSymbol)
		{
			cout << "WHITE PLAYER WIN";
			return;
		}
		else;
		person1.setCell(desk,desk.blackSymbol,4);
		if (desk.winner == desk.blackSymbol)
		{
			cout << "BLACK PLAYER WIN";
			return;
		}
		else if (desk.winner == desk.whiteSymbol)
		{
			cout << "WHITE PLAYER WIN";
			return;
		}
		else;
	}
}


