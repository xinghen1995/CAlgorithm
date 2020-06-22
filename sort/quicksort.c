#include <myclib.h>

void quicksort(int a[], int low, int high) {
    int le, ri; // left, right;
    int guard;

    if (low >= high) {
        return;
    }
    le = low;
    ri = high;
    guard = a[low];

    while (le < ri) {
        while ((le < ri) && (a[ri] >= guard)) {
            ri--;
        }
        while ((le < ri) && (a[le] <= guard)) {
            le++;
        }
        if (le < ri) {
            swap(&a[le], &a[ri]);
        }
    }
    if (low < le) {
        swap(&a[low], &a[le]);
    }
    quicksort(a, low, le - 1);
    quicksort(a, le + 1, high);
}

int main() {
    const size_t SIZE = 20;
    int a[SIZE];

    array_factory(a, SIZE, 100);
    
    print_array_gui(a, SIZE);

    quicksort(a, 0, SIZE - 1);

    print_array_gui(a, SIZE);
    
    return 0;
}