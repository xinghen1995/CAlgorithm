//: C08:LowerIO.c
// unix programming interface
// Created by XPL on 2019/12/17.
#include <unistd.h>

#define BUFSIZE 100

int main() {
    char buf[BUFSIZE];
    char info[] = "Input:\n";
    int n;

    write(1, info, sizeof(info));
    while ((n = read(0, buf, BUFSIZE)) > 0) {
        write(1, buf, n);
    }

    return 0;
}

///:~