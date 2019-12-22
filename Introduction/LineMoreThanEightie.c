//: LineMoreThanEightie.c
// Created by XPL on 2019/12/23.
#include <stdio.h>

#define MAXLINE 1000

int myGetLine(char line[], int maxLine);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = myGetLine(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%s", line);
        }
    }
    return 0;
}

int myGetLine(char line[], int maxLine) {
    int c, i;

    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}
///:~