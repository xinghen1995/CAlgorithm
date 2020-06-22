#include <stdio.h>

int lengthOfLongestSubstring(char * s) {
    char dict[256] = { 0 };
    char *head, *tail;
    int max = 0;
    int len = 0;

    head = tail = s;

    while (*tail != '\0') {
        if (dict[(size_t)*tail] != 0) {
            while (*head != *tail) {
                if (len > max) max = len;
                dict[(size_t)*head] = 0;
                len--;
                head++;
            }
            len--;
            head++;
        }
        dict[(size_t)*tail] = 1;
        len++;
        tail++;
    }
    if (len > max) max = len;
    
    return max;
}

int main() {
    char *a = "aabaab!bb";

    printf("%d\n", lengthOfLongestSubstring(a));
    return 0;
}