//
// Created by mysel on 2020/11/27.
//

#ifndef INC_454_SOLUTION_HPP
#define INC_454_SOLUTION_HPP

#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(const int*)a - *(const int*)b;
}

int fourSumCount(int* A, int ASize, int* B, int BSize, int* C, int CSize, int* D, int DSize){
    qsort(A, ASize, sizeof(A[0]), &compare);
    qsort(B, BSize, sizeof(B[0]), &compare);
    qsort(C, CSize, sizeof(C[0]), &compare);
    qsort(D, DSize, sizeof(D[0]), &compare);
    int ca = 0, cb = 0, cc = 0, cd = 0;

    return 0;
}

#endif //INC_454_SOLUTION_HPP
