#include <unordered_set>
#include <vector>
#include <iostream>

void fillSet(std::unordered_set<uint32_t>& set) {
    std::cout << "filling set" << std::endl;
    for(uint32_t i = 0; i < 20000000; ++i) {
        set.emplace(i);
    }
}

void fillVector(std::vector<uint32_t>& vector) {
    for(uint32_t i = 0; i < 20000000; ++i) {
        vector.emplace_back(i);
    }
}

int main(int argc, char *argv[]) {
    std::unordered_set<uint32_t> set;
    std::vector<uint32_t> vector;
    if(argv[1][0] == 's') {
        fillSet(set);
    } else {
        fillVector(vector);
    }
    std::cin.ignore();
}