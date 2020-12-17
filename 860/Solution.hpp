//
// Created by mysel on 12/10/2020.
//

#ifndef INC_860_SOLUTION_HPP
#define INC_860_SOLUTION_HPP

/**
 * 更高效的写法
 */
//bool lemonadeChange(int* bills, int billsSize) {
//    int i = 0;
//    int cntV = 0, cntX = 0;
//    for (; i < billsSize; i++) {
//        switch (bills[i]) {
//            case 5:
//                cntV++;
//                break;
//            case 10:
//                cntX++, cntV--;
//                break;
//            case 20:
//                (cntX) ? (cntX--, cntV--) : (cntV -= 3);
//                break;
//            default:
//                break;
//        } //switch
//        if (cntV < 0)break;
//    } return i == billsSize;
//}


const int BILL_AMOUNT[] = {5, 10, 20};
const int BILL_SIZE = sizeof(BILL_AMOUNT) / sizeof(BILL_AMOUNT[0]);
#define prise 5

bool lemonadeChange(int *bills, int billsSize) {
    int billcount[21] = {0};
    for (int i = 0; i < billsSize; ++i) {
        int b = bills[i];
        if (b == prise) {
            ++billcount[prise];
            continue;
        }
        // gain
        ++billcount[b];
        b -= prise;
        // change
        for (int j = BILL_SIZE - 2; j > -1; --j) {
            int amount = BILL_AMOUNT[j];
            if (amount <= b) {
                int need = b / amount;
                if (need > billcount[amount]) {
                    b -= billcount[amount] * amount;
                    billcount[amount] = 0;
                } else {
                    b -= need * amount;
                    billcount[amount] -= need;
                }
            }
        }
        if (b > 0) return false;
    }

    return true;
}

#endif //INC_860_SOLUTION_HPP
