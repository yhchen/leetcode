//
// Created by mysel on 11/30/2020.
//

#ifndef INC_976_SOLUTION_HPP
#define INC_976_SOLUTION_HPP

#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(const int*)a - *(const int*)b;
}

int largestPerimeter(int* A, int ASize){
    if (A == 0 || ASize < 3) return 0;
    qsort(A, ASize, sizeof(A[0]), &compare);
    for (int i = ASize - 3; i > -1; --i) {
        if (A[i] +A[i+1] >A[i+2]) return A[i] +A[i+1] +A[i+2];
    }
    return 0;
}

#endif //INC_976_SOLUTION_HPP
