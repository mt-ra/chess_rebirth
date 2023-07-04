#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include <jsoncpp/json/json.h>

int main() {

    std::ifstream file("pieces.json");
    Json::Reader reader;
    Json::Value complete_piece_data;
    reader.parse(file, complete_piece_data);

    std::cout << complete_piece_data << std::endl;
    

    return 0;
}