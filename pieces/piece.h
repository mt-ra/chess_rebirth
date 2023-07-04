#ifndef PIECE_H
#define PIECE_H

class Piece {
private:
    int team;
    int type;
public:
    Piece(int, int);
    int get_team();
    int get_type();
};

#endif