//: NBlankToOne.c
// Created by XPL on 2019/12/22.
#include <stdio.h>

int main() {
    int ch;
    int blankFlg;

    blankFlg = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            if (blankFlg == 1) {
                continue;
            } else {
                blankFlg = 1;
            }
        } else {
            blankFlg = 0;
        }
        putchar(ch);
    }
    return 0;
}
///:~