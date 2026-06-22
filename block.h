#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

using namespace std;

class Block
{

private:

    int cellSize;
    int rotationState;
    vector<Color> colors;

public:

    int ID;
    map<int, vector<Position>> cells;

    Block();
    void Draw();
};