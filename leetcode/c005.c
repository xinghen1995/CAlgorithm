#include <stdio.h>

char * longestPalindrome(char * s) {
    char *prev, *cur;
    int len, len0, len1;
    int maxlen = 0;
    char *str = NULL;

    if (*s == '\0') return s;
    prev = s;
    cur = s + 1;

    while(*cur != '\0') {
        len0 = 0;
        while ((prev >= s) && (*prev == *cur)) {
            len0 += 2;
            prev--;
            cur++;
        }
        cur = cur - (len0 >> 1); 
        prev = cur - 2;
        len1 = 1;
        while ((prev >= s) && (*prev == *cur)) {
            len1 += 2;
            prev--;
            cur++;
        }
        cur = cur - ((len1 - 1) >> 1);
        prev = cur - 1;
        len = (len0 > len1) ? len0 : len1;
        if (len > maxlen) {
            printf("len0 %d len1 %d\n", len0, len1);
            maxlen = len;
            str = (len0 > len1) ? (prev + 1 - (len0 >> 1)) : (prev - (len1 >> 1));
        }
        cur = cur + 1;
        prev = cur - 1;
    }
    if (maxlen == 0) {
        *(s + 1) = '\0';
        return s;
    }
    if (str != NULL) {
        *(str + maxlen) = '\0';
    } else {
        return s;
    }
    return str;
}

int main() {
    char s[] = "babad";
    char *s1;

    s1 = longestPalindrome(s);
    printf("%s\n", s1);

    return 0;
}