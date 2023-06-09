#include "game_data.h"

// Definitions of the member functions of the GameData class
GameData::GameData() {
    white_score = 0;
    black_score = 0;
    Board new_board({});
    board = &new_board;
}

void GameData::set_piece_types(std::vector<PieceType> pieces) {
    piece_types = pieces;
}

int GameData::get_white_score() {
    return white_score;
}

int GameData::get_black_score() {
    return black_score;
}

int GameData::get_turn() {
    return turn;
}