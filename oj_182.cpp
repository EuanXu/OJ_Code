/*************************************************************************
	> File Name: oj_182.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Jan 2021 10:52:14 PM CST
 ************************************************************************/
#include <stdio.h>

int func(int * arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int num[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    printf("%d", func(num, n));
    return 0;
}

