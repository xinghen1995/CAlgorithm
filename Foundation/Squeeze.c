//: Squeeze.c
// Created by XPL on 2019/12/24.
#include <stdio.h>
#define MAXLINE 1000

void squeeze(char s[], char c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main() {
    char line[MAXLINE];

    gets(line);
    squeeze(line, 'a');
    printf("%s\n", line);
    return 0;
}
///:~