//: BinSearch.c
// Created by XPL on 2019/12/27.
#include <stdio.h>
#include <stdlib.h>

int binSearch(int x, int v[], int n) {
    int mid, high, low;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (high + low) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int compare(void *a, void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int v[] = { 3, 2, 1, 4, 5, 6, 9 };
    size_t size = sizeof(v) / sizeof(int);

    qsort(v, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    printf("\nFind 5 in v index %d\n", binSearch(5, v, size));
    return 0;
}
///:~