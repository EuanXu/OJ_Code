/*************************************************************************
	> File Name: oj_183.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Jan 2021 11:16:59 PM CST
 ************************************************************************/
#include <stdio.h>

int func(int x) {
    if (x <= 0) return 0;
    else if (x == 1) return 1;
    else if (x % 2 == 0) return 3 * func(x/2) - 1;
    else if (x % 2 == 1) return 3 * func((x+1)/2) - 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
}
