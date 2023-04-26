#include "tile.h"
#define MAX_ROW 100
#define MAX_COL 100

#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    Tile map[MAX_ROW][MAX_COL];

public:
    Board();
    Tile* get_tile(int, int);

};

#endif