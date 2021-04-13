/*************************************************************************
	> File Name: oj_185.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2021 06:12:37 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 30

int num[MAX_N + 3];

void func() {
    num [0] = 1;
    num [1] = 1;
    for (int i = 2; i <= 30; i ++) {
        num[i] = num[i-1] + num[i-2];
    }
    return ;
}

int main() {
    func();
    int n;
    scanf("%d", &n);
    printf("%d", num[n-1]);

    return 0;
}

