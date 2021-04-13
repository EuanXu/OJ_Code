/*************************************************************************
	> File Name: oj_184.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Jan 2021 11:52:28 PM CST
 ************************************************************************/
#include <stdio.h>

int num[32];

void func() {
    num[2] = 4;
    num[3] = 10;
    for (int i = 4; i <= 30; i++) {
        num[i] = num[i-1] + (num[i-1] - num[i-2]) * 2;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    func();
    printf("%d", num[n]);
    return 0;
}

