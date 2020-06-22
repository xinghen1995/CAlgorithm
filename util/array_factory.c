#include <time.h>
#include <stdlib.h>
#include <myclib.h>

void array_factory(int a[], size_t size, int bound) {
    int i;

    srand(time(NULL));
    for (i = 0; i < size; i++) {
        a[i] = rand() % bound + 1;
    }    
}