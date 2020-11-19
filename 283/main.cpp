#include <iostream>
#include "Solution.hpp"

int main() {
    int v[] = {0, 1, 0, 3, 12};
    moveZeroes(v, sizeof(v) / sizeof(typeof(v[0])));
    std::cout << "[";
    for (int i = 0; i < sizeof(v) / sizeof(typeof(v[0])); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << "]" << std::endl;
    return 0;
}
