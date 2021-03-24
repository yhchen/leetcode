//
// Created by langrensha0016 on 2021/3/23.
//

#ifndef INC_341_SOLUTION_H
#define INC_341_SOLUTION_H

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    NestedIterator(std::vector<NestedInteger> &nestedList) {
        if (nestedList.size() > 0) {
            _stacks.push_back({&nestedList, 0});
            tryGetNext();
        }
    }

    int next() {
        auto _tmp = _next;
        tryGetNext();
        return _tmp;
    }

    bool hasNext() {
        return _hasNext;
    }

private:
    struct NestedStacks {
        const std::vector<NestedInteger> *list;
        int index;

        inline bool end() const { return index >= list->size(); }

        inline const NestedInteger &getNext() { return (*list)[index++]; }
    };

    void tryGetNext() {
        while (_stacks.size() > 0) {
            auto &stack = _stacks[_stacks.size() - 1];
            const auto &pdata = stack.getNext();
            if (!pdata.isInteger()) {
                clearStack();
                if (pdata.getList().size() > 0) {
                    _stacks.push_back({&pdata.getList(), 0});
                }
                continue;
            }
            // found & clear
            clearStack();
            _next = pdata.getInteger();
            _hasNext = true;
            return;
        }
        _next = 0;
        _hasNext = false;
    }

    void clearStack() {
        while (_stacks.size() > 0) {
            auto &stack = _stacks[_stacks.size() - 1];
            if (stack.end()) {
                _stacks.pop_back();
                continue;
            }
            break;
        }
    }

    std::vector<NestedStacks> _stacks;
    int _next;
    bool _hasNext;
};


////////////////////////////////////////////////////////////////////////////////

//class NestedIterator {
//public:
//    NestedIterator(vector<NestedInteger> &nestedList)
//    {
//        dfs(nestedList);
//    }
//
//    int next() {
//        return _datas[_index++];
//    }
//
//    bool hasNext() {
//        return _index < _datas.size();
//    }
//
//private:
//    void dfs(vector<NestedInteger> &nestedList)
//    {
//        for (int i = 0 ;i < nestedList.size(); ++i) {
//            auto& integer = nestedList[i];
//            if (integer.isInteger()) _datas.push_back(integer.getInteger());
//            else dfs(integer.getList());
//        }
//    }
//
//    vector<int> _datas;
//    size_t _index = 0;
//};

////////////////////////////////////////////////////////////////////////////////

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */


#endif //INC_341_SOLUTION_H
