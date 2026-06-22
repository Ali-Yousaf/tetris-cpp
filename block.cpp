#include "block.h"
#include "position.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    rowOffset = 0;
    colOffset = 0;

    colors = GetCellColors();
}

void Block::Draw()
{
    vector<Position> tiles = GetCellPosition();

    for(Position i : tiles)
    {
        DrawRectangle(i.col * cellSize + 1, i.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[ID]);
    }
}

void Block::Move(int rows, int cols)
{
    rowOffset += rows;
    colOffset += cols;
}

vector<Position> Block::GetCellPosition()
{
    vector<Position> tiles = cells[rotationState];
    vector<Position> movedTiles;

    for(Position item : tiles)
    {
        Position newPos = Position(item.row + rowOffset, item.col + colOffset);
        movedTiles.push_back(newPos);
    }

    return movedTiles;
}