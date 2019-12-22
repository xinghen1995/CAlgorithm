//: DigitCount.c
// Created by XPL on 2019/12/23.
#include <stdio.h>
#include <string.h>

int main() {
    int c, nwhite, nother;
    int i;
    int ndigit[10];

    nwhite = nother = 0;
    memset(ndigit, 0, sizeof(int) * 10);

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }
    printf("digits =");
    for (i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, others = %d\n", nwhite, nother);
    return 0;
}
///:~