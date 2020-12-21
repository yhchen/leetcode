/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#define DATA_SIZE 128

#include <string.h>

struct TempData {
    int *datas;
    int count;
    const char *s;
    int position;
    int slen;
};

bool findFibonacci(struct TempData *data) {
    if (data->s[data->position] == '0') return false;
    switch (data->count) {
        case 0:
        case 1: {
            int loop = data->slen - data->position;
            if (loop > 11) loop = 11;
            int num = 0;
            for (int i = 0; i < loop; ++i) {
                num = num * 10 + data->s[data->position + i] - '0';
                data->position
            }
            break;
        }
        default:
            break;
    }
}

int *splitIntoFibonacci(char *S, int *returnSize) {
    *returnSize = 0;
    if (S == 0) return 0;

    struct TempData data;
    data.datas = (int *) malloc(DATA_SIZE * sizeof(data.datas[0]));
    data.count = 0;
    data.s = S;
    data.position = 0;
    data.slen = strlen(data.s);

    *returnSize = data.count;
    return data.datas;
}
