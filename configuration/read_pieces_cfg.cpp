#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "piece_type.h"

#include <jsoncpp/json/json.h>

std::vector<PieceType> read_pieces_cfg() {
    std::vector<PieceType> piece_types;

    std::ifstream file("pieces.json");
    Json::Reader reader;
    Json::Value complete_piece_data;
    reader.parse(file, complete_piece_data);
    

    return piece_types;
}
