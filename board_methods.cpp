#include "board.h"

// Definitions of the member functions of the Board class
// Definitions
Board::Board() {
    for (int i = 0; i < MAX_ROW; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            map[i][j].set_tile_type(INVALID);
        }
    }
}

Tile* Board::get_tile(int _row, int _col) {
    return &map[_row][_col];
}