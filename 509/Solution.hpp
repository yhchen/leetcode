//
// Created by langrensha0016 on 2021/1/4.
//

#ifndef INC_509_SOLUTION_HPP
#define INC_509_SOLUTION_HPP

class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, tmp;
        for (int i = 0; i < n; ++i) {
            tmp = a;
            a = b;
            b = tmp + a;
        }
        return a;
    }
};

#endif //INC_509_SOLUTION_HPP
