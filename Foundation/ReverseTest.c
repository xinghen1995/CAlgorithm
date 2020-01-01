//: ReverseTest.c
// Created by XPL on 2020/1/1.
#include <stdio.h>
#include <string.h>

void myReverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main() {
    char s[] = "jfldsajg;asd;a";

    myReverse(s);
    printf("%s\n", s);
    return 0;
}
///:~