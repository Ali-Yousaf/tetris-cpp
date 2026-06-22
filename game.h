#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
private:

    vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

public:

    Grid grid;

    Game();
    Block GetRandomBlock();
    vector<Block> GetAllBlocks();
    void Draw();
};