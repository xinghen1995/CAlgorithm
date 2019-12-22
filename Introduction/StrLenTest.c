//: StrLenTest.c
// Created by XPL on 2019/12/23.
#include <stdio.h>
#include <string.h>

int main() {
    char *str = "12345678";
    int strLen = strlen(str);
    int strSize = sizeof(*str);

    printf("12345678 const string, StrLen %d StrSize %d\n", strLen, strSize);
    return 0;
}

///:~