#include <iostream>
#include "Solution.hpp"

int main() {
    char S[1024];
//    strcpy(S, "lasjflasdjflasdjflkadsjflkajlljfdlkjasdflkjadslfkjdaflkjvcnxvkjlfjd");
//    strcpy(S, "baa");
    strcpy(S, "aaabbbcccddd");
    std::cout << reorganizeString(S) << std::endl;
    return 0;
}
