/*************************************************************************
	> File Name: oj_138.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 12:53:22 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n > 0) {
        int x = 2*n;
        while (x > 0) {
            printf("A");
            x -= 1;
        }
        printf("\n");
        n -= 1;
    }
    return 0;
}

