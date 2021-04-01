//
// Created by langrensha0016 on 2021/4/1.
//

#ifndef INC_1006_SOLUTION_HPP
#define INC_1006_SOLUTION_HPP

class Solution {
public:
    int clumsy(int N) {
        int res = 0;
        int v = N;
        for (int i = N - 1, j = 0; i > 0; --i, ++j) {
            int symbol = j & 3;
            switch (symbol) {
                case 0:
                    v *= i;
                    break;
                case 1:
                    res += v / i;
                    v = 0;
                    break;
                case 2:
                    res += i;
                    break;
                case 3:
                    v = -i;
                    break;
            }
        }
        res += v;

        return res;
    }
};

#endif //INC_1006_SOLUTION_HPP
