//: RandAndSrand.c
// Created by XPL on 2019/12/24.
#include <stdio.h>

unsigned long int next = 1;

int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65535) % 32768;
}

void srand(unsigned int seed) {
    next = seed;
}

int main() {
    int seed = 100;
    int num;
    int i;

    for (i = 0; i < 10; i++) {
        printf("%d ", rand());
    }
    printf("\n");
    srand(1);

    for (i = 0; i < 10; i++) {
        printf("%d ", rand());
    }
}

///:~