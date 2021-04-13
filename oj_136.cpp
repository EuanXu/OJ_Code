/*************************************************************************
	> File Name: oj_136.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Mar 2021 11:42:10 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n/7; i++) {
        printf("%d\n", i*7);
    }
}

