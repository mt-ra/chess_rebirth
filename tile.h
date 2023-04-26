#ifndef TILE_H
#define TILE_H

enum TileType {
    INVALID = 0,
    VALID = 1,
};

class Tile {
private:
    enum TileType tile_type;
public:
    Tile();
    void set_tile_type(enum TileType);
};

#endif