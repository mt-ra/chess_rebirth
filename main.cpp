#include "board.h"
#include "game_data.h"

int main() {
    GameData* game_data = new GameData();
    std::vector<PieceType> piece_types = read_pieces_cfg();
    game_data->set_piece_types(piece_types);
}