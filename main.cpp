#include <iostream>
#include <raylib.h>
#include <grid.h>

using namespace std;

const int SCREEN_WIDTH = 300;
const int SCREEN_HEIGHT = 600;
const int FPS = 60;

Color DARK_BLUE = {44, 44, 127, 255};

int main () 
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    
    grid.grid[0][0] = 1;
    grid.grid[10][0] = 3;
    grid.grid[0][10] = 4;
    grid.grid[5][5] = 7;


    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARK_BLUE);

        grid.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;

}