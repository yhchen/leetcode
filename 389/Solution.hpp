//
// Created by langrensha0016 on 2020/12/18.
//

#ifndef INC_389_SOLUTION_HPP
#define INC_389_SOLUTION_HPP

//char findTheDifference(char * s, char * t){
//    int v[256] = { 0 };
//    while (*t) {
//        ++v[*(t++)];
//    }
//    while (*s) {
//        --v[*(s++)];
//    }
//
//    for (char i = 'a'; i <= 'z'; ++i) {
//        if (v[i] > 0) return i;
//    }
//    return '0';
//}

// 通过查找异或的方法找出不同的那一个，其他的都是配对出现的
char findTheDifference(char * s, char * t){
    char c = 0;
    while (*s) {
        c ^= *(s++);
    }
    while (*t) {
        c ^= *(t++);
    }
    return c;
}

#endif //INC_389_SOLUTION_HPP
