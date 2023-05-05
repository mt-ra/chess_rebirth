#include "direction_move.h"

// Definitions of the member functions of the Move class
DirectionMove::DirectionMove(int _move_idx) {
    move_idx = _move_idx;
}

int DirectionMove::get_move_idx() {
    return move_idx;
}