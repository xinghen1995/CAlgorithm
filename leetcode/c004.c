#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i, j;
    int len;
    int half;
    int flag;
    int tmp[2];
    int k;

    half = (nums1Size + nums2Size) / 2;
    flag = (nums1Size + nums2Size) % 2; 
    printf("nums1Size %d nums2Size %d half %d\n", nums1Size, nums2Size, half);

    i = j = 0;
    len = 0;
    while (len < half + 1) {
        k = len % 2;
        if ((i < nums1Size) && (j < nums2Size)) {
            if (nums1[i] < nums2[j]) {
                tmp[k] = nums1[i];
                i++;
            } else {
                tmp[k] = nums2[j];
                j++;
            }
        } else if (i < nums1Size) {
            tmp[k] = nums1[i];
            i++;
        } else {
            tmp[k] = nums2[j];
            j++;
        }
        len++;
    }
    printf("tmp[0] %d tmp[1] %d\n", tmp[0], tmp[1]);
    if (flag == 0) {
        return (tmp[0] + tmp[1]) / 2.0;
    }  else {
        return tmp[(len - 1) % 2];
    }
}

int main() {
    int nums1[] = {1, 3, 5, 8, 10};
    int nums1Size = sizeof(nums1) / sizeof(int);
    int nums2[] = {2};
    int nums2Size = sizeof(nums2) / sizeof(int);
    double result;

    result = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
    printf("%f\n", result);
    return 0;
}