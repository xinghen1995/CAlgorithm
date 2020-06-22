#include <myclib.h>

void max_heapify(int a[], int len, int i) {
    int le = i * 2 + 1; // left child
    int ri = i * 2 + 2; // right child
    int k;

    if (le >= len) {
        return;
    }
    if (ri >= len) {
        k = le;
    } else {
        k = le;
        if (a[ri] > a[le]) {
            k = ri;
        }
    }
    if (a[k] > a[i]) {
        swap(&a[k], &a[i]);
        max_heapify(a, len, k);
    }
}

void max_heapsort(int a[], int len) {
    int i;

    for (i = len / 2 - 1; i >= 0; i--) {
        max_heapify(a, len, i);
    }

    print_array_gui(a, len);

    for (i = 0; i < len; i++) {
        swap(&a[0], &a[len - i - 1]);
        max_heapify(a, len - i - 1, 0);
    }
}

int main() {
    const int SIZE = 7;
    int a[SIZE];

    array_factory(a, SIZE, 100);
    print_array_gui(a, SIZE);

    max_heapsort(a, SIZE);
    print_array_gui(a, SIZE);

    return 0;
}