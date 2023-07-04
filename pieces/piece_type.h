#include <vector>
#include <string>
#include "../moves/direction_move.h"
#include "../moves/teleport_move.h"

#ifndef PIECE_TYPE
#define PIECE_TYPE

class PieceType {
private:
    std::string alias;
    char symbol;
    std::vector<DirectionMove> direction_moves;
    std::vector<TeleportMove> teleport_moves;
public:
    PieceType();

};

#endif