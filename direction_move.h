#include <vector>
#include "structs.h"
#include "move.h"

#ifndef DIRMOVE
#define DIRMOVE

class DirectionMove : public Move {
private:
    displacement_vector move_direction;
    std::vector<int> valid_move_distances;
public:
    DirectionMove();
};

#endif