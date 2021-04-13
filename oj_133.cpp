/*************************************************************************
	> File Name: oj_133.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 04:54:03 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (j==n) printf("%d*%d=%d\n", i, j, i*j);
            else printf("%d*%d=%d\t", i, j, i*j);
        }
    }
    return 0;
}

