#include "board_Prototype.h"
struct treeNode
{
    int line = 0, column = 0, value = 0, level = 0;
    treeNode* parent = NULL;
    vector <treeNode*>sons;
};



class Player
{
public:
    void setCell(Board& desk,char playerColor,int rank,int move);
    bool human = false, bot = false;
    bool blackSymbolPlayer = false, whiteSymbolPlayer = false;
private:
    int evaluationFunction(int i, int j, Board desk,char playerColor);
    treeNode* minMax( Board desk, char playerColor,int rank,int move);
    void sonsAdder(int i, int j, Board desk, int level,char PlayerColor, treeNode* parent,int rank, int alpha, int beta);
    bool firstEval = true;
};

