//
//int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
//    for (int i = 0; i < gasSize; ++i) {
//        int current = gas[i] - cost[i];
//        if (current < 0) goto NOT_FIT;
//        for (int j = 1; j < gasSize; ++j) {
//            const auto idx = (i + j) % gasSize;
//            current += gas[idx] - cost[idx];
//            if (current < 0) goto NOT_FIT;
//        }
//        return i;
//        NOT_FIT:;
//    }
//    return -1;
//}


int canCompleteCircuit(int *gas, int gasSize, int *cost, int costSize) {
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
}
