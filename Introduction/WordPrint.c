//: WordPrint.c
// Created by XPL on 2019/12/22.
#include <stdio.h>
#include <string.h>

#define MAX_WORD_SIZE 100

int main() {
    char word[MAX_WORD_SIZE] = {0};
    int index = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            printf("%s\n", word);
            memset(word, 0, sizeof(char) * MAX_WORD_SIZE);
            index = 0;
        } else {
            word[index++] = (char)c;
        }
    }
    return 0;
}

///:~