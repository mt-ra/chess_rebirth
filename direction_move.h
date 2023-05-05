#include <vector>

#ifndef DIRMOVE
#define DIRMOVE

class DirectionMove : public Move {
private:
    int move_idx;
public:
    DirectionMove(int);
    int get_move_idx();
};

#endif