//: ShellSortTest.c
// Created by XPL on 2019/12/29.
#include <stdio.h>

void shellSort(int v[], int n) {
    int gap, i, j, temp;
    
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

int main() {
    int v[] = {12, 41, 32, 1, 4, 6, 324, 32};
    size_t len = sizeof(v) / sizeof(int);
    
    shellSort(v, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
///:~