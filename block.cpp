#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
}

void Block::Draw()
{
    vector<Position> tiles = cells[rotationState];

    for(Position i : tiles)
    {
        DrawRectangle(i.col * cellSize + 1, i.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[ID]);
    }
}