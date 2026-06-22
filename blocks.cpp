#include "block.h"
#include "position.h"

class Block_L : public Block
{

public:

    Block_L()
    {
        ID = 1;
        cells[0] = {Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};
    }
};

class Block_J : public Block
{

public:

    Block_J()
    {
        ID = 2;
        cells[0] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1)};
    }
};
class Block_I : public Block
{

public:

    Block_I()
    {
        ID = 3;
        cells[0] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 3)};

        cells[1] = {Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2)};
        cells[2] = {Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(3, 1)};
        
    }
};

class Block_O : public Block
{

public:

    Block_O()
    {
        ID = 4;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[2] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
    }
};

class Block_S : public Block
{

public:

    Block_S()
    {
        ID = 5;
        cells[0] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 2)};
        cells[2] = {Position(1, 1), Position(1, 2), Position(2, 0), Position(2, 1)};
        cells[3] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
    }
};

class Block_T : public Block
{

public:

    Block_T()
    {
        ID = 6;
        cells[0] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1)};
    }
};

class Block_Z : public Block
{

public:

    Block_Z()
    {
        ID = 7;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 2), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
    }
};

