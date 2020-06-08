#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void array_bound(int a[], int len, int *min, int *max) {
    int i;

    *min = *max = a[0];

    for (i = 1; i < len; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }
        if (a[i] < *min) {
            *min = a[i];
        }
    }
}

int main() {
    int a[] = { -3, 4, 3, 90 };
    int size = sizeof(a) / sizeof(int);
    int *b;
    int min, max;
    int begin;
    int i;
    int target = 0;
    int tmp;

    array_bound(a, size, &min, &max);
    printf("min %d max %d\n", min, max);

    b = (int *)malloc(sizeof(int) * (max - min + 1));
    if (b == NULL) {
        return -1;
    }
    memset(b, 0, sizeof(int) * (max - min + 1));

    begin = -min;

    for (i = 0; i < size; i++) {
        b[a[i] + begin] = i;
    }

    for (i = 0; i < size; i++) {
        tmp = target - a[i];
        if (tmp > max || tmp < min) {
            continue;
        }
        if (b[tmp + begin] != 0) {
            printf("[%d %d]\n", i, b[tmp + begin]);
            break;
        }
    }

    free(b);
    return 0;
}