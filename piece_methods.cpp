#include "piece.h"

// Definitions of the member functions of the Piece class
Piece::Piece(int _team, int _type) {
    team = _team;
    type = _type;
}

int Piece::get_team() {
    return team;
}

int Piece::get_type() {
    return type;
}