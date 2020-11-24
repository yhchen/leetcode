#include <iostream>
#include "Solution.hpp"

#define set(_i, _idx, _start, _end) { \
_i[_idx] = new int[2];                \
_i[_idx][0] = _start;                 \
_i[_idx][1] = _end;                   \
}

void test1() {
    int **i = new int *[3];
    set(i, 0, 1, 2);
    set(i, 1, 4, 5);
    set(i, 2, 1, 5);
    int sizelen = 0;
    std::cout << findMinArrowShots((int **) i, 3, &sizelen) << std::endl;
}

void test2() {
    int **i = new int *[4];
    set(i, 0, 10, 16);
    set(i, 1, 2, 8);
    set(i, 2, 1, 6);
    set(i, 3, 7, 12);
    int sizelen = 0;
    std::cout << findMinArrowShots((int **) i, 4, &sizelen) << std::endl;
}

void test3() {
    int **i = new int *[7];
    set(i, 0, 9, 12);
    set(i, 1, 1, 10);
    set(i, 2, 4, 11);
    set(i, 3, 8, 12);
    set(i, 4, 3, 9);
    set(i, 5, 6, 9);
    set(i, 6, 6, 7);
    int sizelen = 0;
    std::cout << findMinArrowShots((int **) i, 7, &sizelen) << std::endl;
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}
