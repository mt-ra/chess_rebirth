#include "../pieces/piece.h"

#ifndef TILE_H
#define TILE_H

enum TileType {
    INVALID = 0,
    VALID = 1,
};

class Tile {
private:
    enum TileType tile_type;
    Piece* piece;

public:
    Tile();
    Tile(enum TileType);
    void set_tile_type(enum TileType);
    void set_piece(Piece*);
    void make_empty();
    
    enum TileType get_tile_type();
    Piece* get_piece();

};

#endif