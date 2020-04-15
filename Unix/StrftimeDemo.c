#include <stdio.h>
#include <time.h>

int main() {
    time_t time1;
    struct tm *tp;
    char buf[128];

    time(&time1);
    tp = localtime(&time1);
    strftime(buf, 128, "%Y/%m/%d:%H:%M:%S", tp);
    printf("buf: %s\n", buf);

    return 0;
}