#include "Crypt.h"
#include <random>
#include <sstream>

using namespace std;

string Cripto::generateUUID() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 255);

    std::stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << std::hex << std::uppercase << dis(gen);
    }

    string uuid = ss.str();
    uuid.insert(8, "-");
    uuid.insert(13, "-");
    uuid.insert(18, "-");
    uuid.insert(23, "-");

    return uuid;
}

string Cripto::hash(string input) {
    std::hash<string> hasher;
    size_t hash = hasher(input);
    stringstream ss;
    ss << std::hex << hash;
    return ss.str();
}