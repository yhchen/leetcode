//
// Created by mysel on 2020/11/25.
//

#ifndef INC_1370_SOLUTION_HPP
#define INC_1370_SOLUTION_HPP

#include <stdlib.h>

char *sortString(char *s) {
    if (s == 0 || *s == 0) return "";
    int counts[256] = {};
    int length = 0;
    char *tmp = s;
    while (*tmp) {
        ++counts[*(tmp++)];
        ++length;
    }
    char *ret = (char *) malloc(length + 1);
    ret[length] = 0;
    bool small = true;
    int idx = 0;
    while (idx < length) {
        if (small) {
            for (char i = 'a'; i <= 'z'; ++i) {
                if (counts[i] > 0) {
                    --counts[i];
                    ret[idx++] = i;
                }
            }
        } else {
            for (char i = 'z'; i >= 'a'; --i) {
                if (counts[i] > 0) {
                    --counts[i];
                    ret[idx++] = i;
                }
            }
        }
        small = !small;
    }
    return ret;
}

#endif //INC_1370_SOLUTION_HPP
