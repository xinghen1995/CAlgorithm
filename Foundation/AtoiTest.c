//: AtoiTset.c
// Created by XPL on 2019/12/29.
#include <stdio.h>
#include <ctype.h>

int myAtoi(char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = n * 10 + (s[i] - '0');
    return sign * n;
}

int main() {
    char s[100] = {0};

    scanf("%s", s);
    printf("%d\n", myAtoi(s));
    return 0;
}
///:~
