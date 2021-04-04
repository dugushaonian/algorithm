#include <stdio.h>

int candidate(int a[], int si) {
    int i = 0, cand = 0, count = 1;
    cand = a[0];
    for (i = 1; i < si; ++i) {
        if (count == 0) {
            cand = a[i];
        }
        if (a[i] == cand) {
            count++;
        }
        if (a[i] != cand) {
            count--;
        }
    }
    return cand;
}
int majority(int a[], int si) {
    int i = 0, cand = 0, cand_count = 0;
    cand = candidate(a, si);
    for (i = 0; i < si; ++i) {
        if (a[i] == cand) {
            cand_count++;
        }
    }
    if (cand_count > si / 2) {
        return cand;
    }
    return -1;
}

int main() {
    int a[20] = {3, 2, 1, 3, 1, 1, 1, 3, 1, 2, 1, 1, 1, 4, 5, 1, 1, 3, 1, 3};
    int maj;
    maj = majority(a, 20);
    printf("%d", maj);
    getchar();
    getchar();
    return 0;
}

