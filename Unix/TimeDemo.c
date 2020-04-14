#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    clock_t clk_start = clock();
    clock_t clk_end;
    time_t t = time(NULL);
    struct tm tm_val;
    struct tm *tm_ptr;

    printf("clock()=%ld time()=%ld\n", clk_start, t);
    printf("clock() / CLOCKS_PER_SEC: %ld\n", clock() / CLOCKS_PER_SEC);

    printf("ctime(time_t*): %s\n", ctime(&t));
    tm_ptr = localtime(&t);
    printf("asctime(localtime(time_t*)): %s\n", asctime(localtime(&t)));
    clk_end = clock();
    printf("start %ld end %ld\n", clk_start, clk_end);
    printf("Time Costs Time: %ld sec\n", (clk_end - clk_start) / CLOCKS_PER_SEC);
    return 0;
}