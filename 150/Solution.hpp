//
// Created by langrensha0016 on 2021/3/24.
//

#ifndef INC_150_SOLUTION_HPP
#define INC_150_SOLUTION_HPP


class Solution {
public:
    int evalRPN(std::vector<string>& tokens) {
        std::vector<int> stacks((tokens.size() + 1) / 2);
        int offset = -1;
        for (const string& s: tokens) {
            char c = s[0];
            // is number
            if (s.size() > 1 || (c >= '0' && c <= '9')) {
                stacks[++offset] = atoi(s.c_str());
            } else {
                int a = stacks[offset - 1], b = stacks[offset];
                switch(c) {
                    case '+': stacks[--offset] = a + b; break;
                    case '-': stacks[--offset] = a - b; break;
                    case '*': stacks[--offset] = a * b; break;
                    case '/': stacks[--offset] = a / b; break;
                }
            }
        }

        return stacks[0];
    }
};


#endif //INC_150_SOLUTION_HPP
