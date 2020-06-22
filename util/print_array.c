//: PrintArray.c
// Created by XPL on 2020/1/1.
#include <myclib.h>

static int get_elem_width(int num)
{
    int i = 1;

    if (num < 0) {
        i++;
    }

    while (num / 10 != 0) {
        i++;
        num /= 10;
    }
    return i;
}

void print_array(int v[]) {
    size_t len = sizeof(v) / sizeof(int);
    int i;

    for (i = 0; i < len; i++) {
        pr_none("%d ", v[i]);
    }
    pr_none("\n");
}

void print_array_gui(int v[], size_t len) {
    int i;
    int j;
    int width;

    pr_none("+");
    for (i = 0; i < len; i++) {
        width = get_elem_width(v[i]);
        for (j = 0; j < width; j++) {
            pr_none("-");
        }
        pr_none("+");
    }
    pr_none("\n");

    pr_none("|");
    for (i = 0; i < len; i++) {
        pr_yel("%d", v[i]);
        pr_none("|");
    }
    pr_none("\n");

    pr_none("+");
    for (i = 0; i < len; i++) {
        width = get_elem_width(v[i]);
        for (j = 0; j < width; j++) {
            pr_none("-");
        }
        pr_none("+");
    }
    pr_none("\n");
}

///:~