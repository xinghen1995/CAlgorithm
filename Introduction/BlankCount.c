//: BlankCount.c
// Created by XPL on 2019/12/22.
#include <stdio.h>

int main() {
    int ch;
    long nn, nb, nt;

    nn = nb = nt = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            nn++;
        } else if (ch == '\t') {
            nt++;
        } else if (ch == ' ') {
            nb++;
        }
    }
    printf("nn %d nb %d nt %d\n", nn, nb, nt);
    return 0;
}

///:~