#include <stdio.h>

void InsertSort(int a[], int size) {
    int i, j;
    int tmp;

    for (i = 1; i < size; i++) {
        j = i - 1;
        while ((j >= 0) && (a[j] > a[j + 1])) {
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
            j--;
        }
    }
}

int main() {
    int a[] = { 1, 4, 2, 19, 2, 4, 0};
    int size = sizeof(a) / sizeof(int);
    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    } 
    printf("\n");

    InsertSort(a, size);

    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}