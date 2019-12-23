//: StrcatTest.c
// Created by XPL on 2019/12/24.
#include <stdio.h>

void myStrcat(char s[], char t[]) {
    int i, j;

    i = j = 0;
    while (s[i] != '\0') {
        i++;
    }
    while ((s[i++] = t[j++]) != '\0')
        ;
}

int main() {
    char a[100] = "abcdef";
    char b[100] = "ghijklmn";

    myStrcat(a, b);
    printf("%s\n", a);
    return 0;
}

///:~