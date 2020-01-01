//: QsortTest.c
// Created by XPL on 2020/1/1.
#include <stdio.h>

void swap(int v[], int i, int j) {
    int tmp;

    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void myQsort(int v[], int left, int right) {
    int i, last;

    if (left >= right)
        return;
    swap(v, left, (left + right) >> 1);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left]) {
            swap(v, ++last, i);
        }
    }
    swap(v, last, left);
    myQsort(v, left, last - 1);
    myQsort(v, last + 1, right);
}

int main() {
    int v[] = { 1, 4, 6, 1, 2, 4,  6, 75, 2, 1, 3 };
    size_t len = sizeof(v) / sizeof(int);

    myQsort(v, 0, len - 1);
    for (int i = 0; i < len; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
///:~