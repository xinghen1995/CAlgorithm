//: Dynamic/HamsterEatsBeans.c
// Created by XPL on 2019/12/5.

/* Description: Hamster eats beans
 * m * n的方格上，每一格存放一定数量的豆子，一只仓鼠从左下角一直吃到右上角，
 * 但仓鼠只能向右或向上走。那么仓鼠做多可以吃多少豆子？
 */
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main() {
    int m, n;
    int i, j;
    int **beans;
    int **path;

    scanf("%d %d", &m, &n);

    beans = (int**)malloc(sizeof(void*) * m);
    path = (int**)malloc(sizeof(void*) * m);

    for (i = 0; i < m; i++) {
        beans[i] = (int*)malloc(sizeof(int) * n);
        path[i] = (int*)malloc(sizeof(int) * n);
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &beans[i][j]);
        }
    }

    printf("Beans:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", beans[i][j]);
        }
        printf("\n");
    }

    for (i = m - 1; i >= 0; i--) { /* to up */
        for (j = 0; j < n; j++) { /* to right */
            if (i == m - 1 && j == 0) {
                path[i][j] = beans[i][j];
            } else if (i != m - 1 && j == 0) {
                path[i][j] = beans[i][j] + path[i+1][j];
            } else if (i == m - 1 && j != 0) {
                path[i][j] = beans[i][j] + path[i][j-1];
            } else {
                path[i][j] = beans[i][j] + max(path[i+1][j], path[i][j-1]);
            }
        }
    }

    printf("Path:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", path[i][j]);
        }
        printf("\n");
    }
    printf("max path:%d\n", path[0][n-1]);

    for (i = 0; i < m; i++) {
        free(beans[i]);
        free(path[i]);
    }

    free(path);
    free(beans);
}
///:~