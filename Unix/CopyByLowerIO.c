#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define PERMS  0666
#define BUFFSIZE 100

void error(char *, ...);

int main(int argc, char *argv[])
{
    int f1, f2, n;
    char buf[BUFFSIZE];

    if (argc != 3)
        error("Usage: cp from to");
    if ((f1 = open(argv[1], O_RDONLY, 0)) == -1) 
        error("cp: can't open %s\n", argv[1]);
    if ((f2 = creat(argv[2], PERMS)) == -1)
        error("cp: can't create %s, mode %03o", argv[2], PERMS);
    while ((n = read(f1, buf, BUFFSIZE)) > 0)
        if (write(f2, buf, n) != n) 
            error("cp: write error on file %s", argv[2]);
    return 0;
}