//: Reverse.c
// Created by XPL on 2019/12/23.
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int myGetLine(char line[], int maxLine);
void myReverse(char new[], char old[]);

int main() {
    int len;
    char oldLine[MAXLINE];
    char newLine[MAXLINE];

    while ((len = myGetLine(oldLine, MAXLINE)) > 0) {
        printf("oldLine %s", oldLine);
        myReverse(newLine, oldLine);
        printf("newLine %s", newLine);
    }
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

void myReverse(char new[], char old[]) {
    int len = strlen(old);
    char *ptrNew, *ptrOld;

    ptrNew = new;
    ptrOld = old + len - 1;

    while (ptrOld >= old) {
        *ptrNew = *ptrOld;
        ptrNew++;
        ptrOld--;
    }
    *ptrNew = '\0';
}
///:~