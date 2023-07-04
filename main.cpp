#include "./chessboard/board.h"
#include "./game/game_data.h"

// forward declarations
std::vector<PieceType> read_pieces_cfg();
int command_loop(GameData*);

// entry point
int main() {
    GameData* game_data = new GameData();
    game_data->set_piece_types(read_pieces_cfg());

    int result = command_loop(game_data);
}