/*************************************************************************
	> File Name: oj_200.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Jan 2021 10:06:38 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N  30

int num[MAX_N + 3];

void func() {
    num[0] = 4;
    num[1] = 7;
    for (int i = 2; i <= MAX_N; i++) {
        num[i] = num[i-1] + num[i-2];
    }
}

int main() {
    func();
    int n;
    double sum;
    scanf("%d", &n);
    printf("%d/%d\n", num[n-1], num[n]);
    for (int i = 1; i <= n; i++) {
        sum += (num[i-1] * 1.0) / num[i];
    }
    printf("%.2lf", sum);
    return 0;
}

