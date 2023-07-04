#include "tile.h"

// Definitions of the member functions of the Tile class
Tile::Tile(enum TileType _tile_type) {
    tile_type = _tile_type;
    piece = nullptr;
}

Tile::Tile() {
    tile_type = INVALID;
    piece = nullptr;
}

void Tile::set_tile_type(enum TileType _tile_type) {
    tile_type = _tile_type;
}

void Tile::set_piece(Piece* _piece) {
    piece = _piece;
}

void Tile::make_empty() {
    piece = nullptr;
}

enum TileType Tile::get_tile_type() {
    return tile_type;
}

Piece* Tile:: get_piece() {
    return piece;
}
 