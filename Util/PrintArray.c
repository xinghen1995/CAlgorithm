//: PrintArray.c
// Created by XPL on 2020/1/1.
#include <stdio.h>
#include "MyLib.h"

void printArray(int v[]) {
    size_t len = sizeof(v) / sizeof(int);

    for (int i = 0; i < len; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

///:~