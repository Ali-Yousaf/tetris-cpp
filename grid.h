#pragma once
#include <vector>
#include <raylib.h>
using namespace std;

class Grid
{
private:

    int numRows;
    int numCols;
    int cellSize;
    vector<Color> colors;

public:

    int grid[20][10];
    
    Grid();
    void Initialize();
    void Draw();

};