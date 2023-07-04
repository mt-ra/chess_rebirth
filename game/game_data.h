#include "../chessboard/board.h"
#include "../pieces/piece_type.h"
#include <vector>

#ifndef GAME_DATA_H
#define GAME_DATA_H

class GameData {
private:
    Board* board;
    std::vector<PieceType> piece_types;
    int white_score;
    int black_score;
    int turn;
public:
    GameData();

    void set_piece_types(std::vector<PieceType>);

    int get_white_score();
    int get_black_score();
    int get_turn();
};

#endif