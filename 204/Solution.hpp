//
// Created by mysel on 12/3/2020.
//

#ifndef INC_204_SOLUTION_HPP
#define INC_204_SOLUTION_HPP

#include <math.h>       /* sqrt */
#include <string.h>     /* memset */
#include <stdlib.h>     /* malloc free */

int countPrimes(int n) {
    if (n <= 2) return 0;
    double c = sqrt(n);
    bool *bv = (bool*)malloc(n);
    memset(bv, 0, n);
    for(int i = 3; i <= c; i += 2)
        if (!bv[i])
            for(int j = i*i, k = i << 1; j < n; j += k)
                bv[j] = 1;
    int num = 1;
    for(int i = 3; i < n; i += 2)
        if(!bv[i]) num++;
    free(bv);
    return num;
}

#endif //INC_204_SOLUTION_HPP
