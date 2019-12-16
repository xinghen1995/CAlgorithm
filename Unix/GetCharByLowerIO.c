//: C08:GetCharByLowerIO.c
// Created by XPL on 2019/12/17.
#include <stdio.h>
#include <unistd.h>

#undef getchar

int getchar(void) {
    char c;

    return ((read(0, &c, 1) == 1) ? (unsigned char)c : EOF);
}

int main() {
    int ch = 0;

    ch = getchar();
    printf("%c\n", ch);

    return 0;
}

///:~