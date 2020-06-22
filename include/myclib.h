//: MyLib.h
// Created by XPL on 2020/1/1.
#ifndef MYCLIB_H
#define MYCLIB_H

#include <stdio.h>

/* log color */
#define pr_none(fmt, ...) printf(fmt, ##__VA_ARGS__)
#define pr_red(fmt, ...)    printf("\033[1;31m" fmt "\033[0m", ##__VA_ARGS__)
#define pr_gre(fmt, ...)    printf("\033[1;32m" fmt "\033[0m", ##__VA_ARGS__)
#define pr_yel(fmt, ...)    printf("\033[1;33m" fmt "\033[0m", ##__VA_ARGS__)

void print_array(int v[]);
void print_array_gui(int v[], size_t len);
void array_factory(int a[], size_t size, int max);
void swap(int *a, int *b);
#endif
///:~