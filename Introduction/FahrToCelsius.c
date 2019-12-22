//: FahrToCelsius.c
// Created by XPL on 2019/12/22.
#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* Lower */
    upper = 300;    /* upper */
    step = 20;      /* step */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
///:~