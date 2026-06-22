#pragma once
#include <vector>
#include <map>
#include "position.h"

using namespace std;

class Block
{

private:

    int cellSize;
    int rotationState;

public:

    int ID;
    map<int, vector<Position>> cells;

    Block();


};