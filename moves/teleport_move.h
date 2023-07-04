#include <vector>
#include "../structs/structs.h"
#include "move.h"

#ifndef TELMOVE
#define TELMOVE

class TeleportMove : public Move {
private:
    displacement_vector capture_piece_at;
    displacement_vector move_to;
public:
    TeleportMove();
};

#endif