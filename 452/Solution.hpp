//
// Created by mysel on 2020/11/23.
//

#ifndef INC_452_SOLUTION_HPP
#define INC_452_SOLUTION_HPP

#include <stdlib.h>     /* qsort */

int compar(const void *a, const void *b) {
    const int *pa = *(const int **) a;
    const int *pb = *(const int **) b;
    return pa[1] > pb[1] ? 1 : -1;
}

int findMinArrowShots(int **points, int pointsSize, int *pointsColSize) {
    if (points == 0 || pointsSize <= 0) return 0;
    qsort((void *) points, pointsSize, sizeof(points[0]), &compar);
//    for (int i = 0; i < pointsSize; ++i) {
//        std::cout << "[" << points[i][0] << "," << points[i][1] << "]" << std::endl;
//    }
    int ret = 1;
    int end = points[0][1];
    for (int i = 1; i < pointsSize; ++i) {
        if (points[i][0] > end) {
            ++ret;
            end = points[i][1];
        }
    }
    return ret;
}

#endif //INC_452_SOLUTION_HPP
