/*************************************************************************
	> File Name: oj_180.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 11:25:14 PM CST
 ************************************************************************/
#include <stdio.h>

int func(int x) {
    long long int num = 2;
    for (int i = 1; i < x; i++) {
        num *= 2;
    }
    return num;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", func(n));
}

