//: DeleteTailBlank.c
// Created by XPL on 2019/12/23.
#include <stdio.h>

#define MAXLINE 1000

int myGetLine(char line[], int maxLine);

int main() {
    int len;
    char line[MAXLINE];
    char *ptr;

    while ((len = myGetLine(line, MAXLINE)) > 0) {
        ptr = line + len - 1;
        while (ptr != line) {
            if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n') {
                *ptr = '\0';
            } else {
                break;
            }
            ptr--;
        }
        printf("%s\n", line);
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