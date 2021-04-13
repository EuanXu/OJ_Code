/*************************************************************************
	> File Name: oj_186.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2021 07:10:01 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100000

int num[MAX_N + 5];

int func(int n) {
    int result = 0;
    if (num[0] > n) return 1;
    for (int i = 0; i < n; i += num[i]) {
        result += 1;
    }
    return result;
}

int main () {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    printf("%d", func(n));
    return 0;
}

