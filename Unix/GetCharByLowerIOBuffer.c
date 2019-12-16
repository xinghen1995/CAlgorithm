//: C08:GetCharByLowerIOBuffer.c
// Created by XPL on 2019/12/17.
#include <stdio.h>
#include <unistd.h>

#undef getchar

#define BUFSIZE 100

int getchar() {
    static char buf[BUFSIZE];
    static char *bufp = buf;
    static int n = 0;

    if (n == 0) {
        n = read(0, buf, BUFSIZE);
        bufp = buf;
    }
    return (--n >= 0) ? *bufp++ : EOF;
}

int main() {
    char ch;

    while ((ch = getchar()) != EOF) {
        printf("%c ", ch);
    }
    return 0;
}
///:~