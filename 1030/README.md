# 1030 matrix cells in distance order

地址:
[https://leetcode-cn.com/problems/matrix-cells-in-distance-order/](https://leetcode-cn.com/problems/matrix-cells-in-distance-order/)

解题思路:
我的第一想法就是利用图形学算法，循环添加所有的节点到列表中，列表的长度是固定的，R*C，所以预分配好节点避免内存重复申请。然后剩下要解决的问题是节点重复添加的问题，我用了很多边界条件判定是否重复添加，虽然达到了同样的效果，但是可读性和复杂度都有所提升，同故宫阅读网上的一些解决方法发现，可以通过预分配一个100*100的二维数据，记录当前节点是否已经添加到分配列表中。

```c++
vector<vector<int>> vec;
vec.add(r0, c0);
for (int distance = 1; distance < maxDistance; ++distance) {
    for (int r1 = 0; r1 < distance; ++r1) {
        int c1 = distance - r1;
        if (r0 + r1 < R && c0 + c1 < C) vec.add(r1 + r0, c1 + c0);
        if (r0 + r1 < R && c1 >= c0) vec.add(r1 + r0, c1 - c0);
        if (r0 >= r1 && c0 + c1 < C) vec.add(r1 - r0, c1 + c0);
        if (r0 >= r1 && c1 > c0) vec.add(r1 - r0, c1 - c0);
    }
}

```

拓展思路：
用排序的方法也可以实现同样的效果，sort或者桶排序都可以。