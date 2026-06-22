#include <iostream>
#include <raylib.h>
#include <grid.h>
#include <blocks.cpp>

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