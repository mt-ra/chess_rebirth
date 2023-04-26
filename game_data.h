#include "board.h"

#ifndef GAME_DATA_H
#define GAME_DATA_H

class GameData {
private:
    Board* board;
    int white_score;
    int black_score;
    int turn;
public:
    GameData();
    int get_white_score();
    int get_black_score();
};

#endif