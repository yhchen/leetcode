////
//// Created by mysel on 2020/11/23.
////
//
//#ifndef INC_67_SOLUTION_HPP
//#define INC_67_SOLUTION_HPP
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char *addBinary(char *a, char *b) {
//    int alen = strlen(a);
//    int blen = strlen(b);
//    int retlen = (alen > blen ? alen : blen) + 1;
//    char *ret = (char *) malloc(retlen + 1);
//    ret[retlen] = 0;
//    bool addflag = 0;
//    for (int i = 1; i < retlen; ++i) {
//        int total = addflag ? 1 : 0;
//        if (i <= alen) {
//            total += a[alen - i] == '0' ? 0 : 1;
//        }
//        if (i <= blen) {
//            total += b[blen - i] == '0' ? 0 : 1;
//        }
//        addflag = total >= 2;
//        ret[retlen - i] = (total & 1) ? '1' : '0';
//    }
//    if (addflag) ret[0] = '1';
//    else ret = ret + 1;
//
//    return ret;
//}
//
//#endif //INC_67_SOLUTION_HPP


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
    char pa, pb;
    char carry = '0';
    while (retlen > 1 || carry == '1') {
        pa = --alen >= 0 ? a[alen] : '0';
        pb = --blen >= 0 ? b[blen] : '0';
        ret[--retlen] = carry ^ pa ^ pb;
        carry = (pa & carry) | (pb & carry) | (pa & pb);
    }

    return ret + retlen;
}

#endif //INC_67_SOLUTION_HPP
