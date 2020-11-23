//
// Created by mysel on 2020/11/23.
//

#ifndef INC_67_SOLUTION_HPP
#define INC_67_SOLUTION_HPP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *addBinary(char *a, char *b) {
    int alen = strlen(a);
    int blen = strlen(b);
    int retlen = (alen > blen ? alen : blen) + 1;
    char *ret = (char *) malloc(retlen + 1);
    ret[retlen] = 0;
    bool addflag = 0;
    for (int i = 1; i < retlen; ++i) {
        int total = addflag ? 1 : 0;
        if (i <= alen) {
            total += a[alen - i] == '0' ? 0 : 1;
        }
        if (i <= blen) {
            total += b[blen - i] == '0' ? 0 : 1;
        }
        addflag = total >= 2;
        ret[retlen - i] = (total & 1) ? '1' : '0';
    }
    if (addflag) ret[0] = '1';
    else ret = ret + 1;

    return ret;
}


//char *addBinary(char *a, char *b) {
//    int i = strlen(a);
//    int j = strlen(b);
//
//    int len = i > j ? i : j;
//    char *res = (char *) malloc(sizeof(char) * (len + 2));
//    res[++len] = 0;
//
//    char carry = '0';
//    char pa, pb;
//    while (len > 1 || carry == '1') {
//        pa = i > 0 ? a[--i] : '0';
//        pb = j > 0 ? b[--j] : '0';
//        res[--len] = pa ^ pb ^ carry; // 当前位
//        carry = (pa & carry) | (pb & carry) | (pa & pb); //进位
//    }
//    return res + len;
//}

#endif //INC_67_SOLUTION_HPP
