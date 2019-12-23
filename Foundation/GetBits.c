//: GetBits.c
// Created by XPL on 2019/12/24.
#include <stdio.h>

unsigned getBits(unsigned int x, int p, int n) {
    return (x >> p + n -1) & ~(~0 << n);
}

int main() {
    int i;
    int x = 63;

    for (i = 0; i < 10; i++) {
        printf("0x%x ", getBits(x, i, i));
    }
    return 0;
}
///:~