#include <iostream>
#include <vector>

class NestedInteger {
public:
    inline bool isInteger() const {
        return _isInteger;
    }

    inline int getInteger() const {
        return _integer;
    }

    inline const std::vector<NestedInteger> &getList() const {
        return _vec;
    }

private:
    bool _isInteger;
    int _integer;
    std::vector<NestedInteger> _vec;
};

#include "Solution.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
