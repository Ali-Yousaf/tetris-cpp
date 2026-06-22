#include <iostream>
#include <raylib.h>
#include "game.h"
#include "colors.h"

using namespace std;

const int SCREEN_WIDTH = 300;
const int SCREEN_HEIGHT = 600;
const int FPS = 60;

Color DARK_BLUE = {44, 44, 127, 255};

int main () 
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARK_BLUE);

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;

}