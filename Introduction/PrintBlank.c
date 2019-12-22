//: PrintBlank.c
// Created by XPL on 2019/12/22.
#include <stdio.h>

int main() {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            printf("\\n");
        } else if (ch == '\t') {
            printf("\\t");
        } else if (ch == '\b') {
            printf("\\b");
        } else {
            putchar(ch);
        }
    }
    return 0;
}
///:~