/*************************************************************************
	> File Name: oj_123.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Mar 2021 05:17:27 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a,b;
    int x,y;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);
    if (x<=a&&a<=y&&x<=y&&b<=y) {
        printf("YES");
    }
    else printf("NO");
    return 0;
}

