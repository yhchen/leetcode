# 134. 加油站

链接:

[https://leetcode-cn.com/problems/gas-station/comments/](https://leetcode-cn.com/problems/gas-station/comments/)

### 解题思路：

从0开始循环向前找，如果发现油站不满足条件了就向后取找，直到一个循环执行完成，如果剩余油量>=0，则表示满足条件，返回节点。否则返回-1。
```c++
    int start = 0;
    int current = gas[0] - cost[0];
    for (int i = 1; i < gasSize; ++i) {
        if (current < 0) {
            // 向前找是否有合适的
            const int idx = --start + gasSize;
            current += gas[idx] - cost[idx];
        } else {
            const int idx = start + i;
            current += gas[idx] - cost[idx];
        }
    }
    return current >= 0 ? (start >= 0 ? start: start + gasSize) : -1;
```


### 拓展解题思路

https://leetcode-cn.com/problems/gas-station/solution/shou-hua-tu-jie-liang-ge-guan-jian-jie-lun-de-jian/
