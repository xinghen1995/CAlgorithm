//: PowerTest.c
// Created by XPL on 2019/12/23.
#include <stdio.h>

int power(int base, int n);

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        printf("%*d %*d %*d\n", 6, i, 6,
                power(2, i), 6, power(-3, i));
    }
    return 0;
}

int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 0; i < n; i++) {
        p *= base;
    }
    return p;
}
///:~