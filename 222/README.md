# 222 count complete tree nodes

[https://leetcode-cn.com/problems/count-complete-tree-nodes/](https://leetcode-cn.com/problems/count-complete-tree-nodes/)

解题思路:

1. 先获取left节点最大深度

2. 最后一层的数量为 [1, 1 << left deep]

3. 二分法方式检查最后一层有多少个

4. 用位运算方法遍历到最后一层的节点，判定节点是否存在

5. ((1 << left deep) - 1) + 最后一层的数量
