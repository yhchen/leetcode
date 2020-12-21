//
// Created by langrensha0016 on 2020/12/21.
//

#ifndef INC_746_SOLUTION_HPP
#define INC_746_SOLUTION_HPP

#define min(a, b) ((a) > (b) ? (b): (a))

int minCostClimbingStairs(int *cost, int costSize) {
    if (costSize <= 0) return 0;
    else if (costSize == 1) return cost[0];
    int a = cost[0], b = cost[1];
    for (int i = 2; i < costSize; ++i) {
        int tmp = a;
        a = b;
        b = min(tmp, b) + cost[i];
    }

    return min(a, b);
}

#endif //INC_746_SOLUTION_HPP