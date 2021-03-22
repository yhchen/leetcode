#ifndef __SOLUTION_H__
#define __SOLUTION_H__

#include <string>
#include <vector>

// url: https://leetcode-cn.com/problems/verify-preorder-serialization-of-a-binary-tree/

class Solution {
public:
    bool isValidSerialization(std::string preorder) {
        size_t sz = preorder.size();
        const char *data = preorder.c_str();
        int need_scope = 1;
        printf("-----------------------------\n");
        for (size_t i = 0; i < sz; ++i) {
            if (need_scope <= 0) return false;
            if (data[i] == '#') --need_scope;
            else ++need_scope;
            // printf("c: \"%c\" scope: %d\n", data[i], need_scope);
            // find next ','
            while (i < sz && data[++i] != ',');
        }
        return need_scope == 0;
    }
};

#endif // __SOLUTION_H__