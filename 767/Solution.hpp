//
// Created by mysel on 11/30/2020.
//

#ifndef INC_767_SOLUTION_HPP
#define INC_767_SOLUTION_HPP

#include <stdlib.h>

#define MAP_SIZE 256

struct CharCount {
    char c;
    short count;
};

int compare(const void *a, const void *b) {
    return ((const struct CharCount *) a)->count - ((const struct CharCount *) b)->count;
}

char *reorganizeString(char *S) {
    if (!S || !S[0]) return "";
    struct CharCount count_map[MAP_SIZE];
    int maxlen = 0;
    char *tmp = S;
    memset(count_map, 0, sizeof(count_map));
    for (int i = 0; i < MAP_SIZE; ++i) {
        count_map[i].c = i;
    }
    while (*tmp) {
        char c = *(tmp++);
        ++count_map[c].count;
    }
    qsort(count_map, MAP_SIZE, sizeof(count_map[0]), &compare);
    int mapbegin = 0;
    for (int i = 0; i < MAP_SIZE; ++i) {
        if (count_map[i].count > 0) {
            mapbegin = i;
            break;
        }
    }
    int slen = tmp - S;
    int mapend = MAP_SIZE - 1, cursor = mapend;
    if (count_map[mapend].count > (slen + 1) / 2) {
        return "";
    }
    if (count_map[mapend].count == (slen + 1) / 2) {

    } else {

    }

    int index = 0;
    while (index < slen) {
        S[index++] = count_map[cursor].c;
        --count_map[cursor].count;
        if (cursor == mapend && count_map[cursor].count <= 0) {
            --mapend;
            --cursor;
        }
        // find next cursor
        else if (cursor == mapend) {
            --cursor;
            // find next max
            while (true) {
                if (cursor < mapbegin) break;
                if (count_map[cursor].count > count_map[cursor - 1].count) {
                    break;
                }
                --cursor;
            }
        } else {
            cursor = mapend;
        }
    }

    return S;
}

#endif //INC_767_SOLUTION_HPP
