/*************************************************************************
	> File Name: oj_144.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 02:48:23 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char arr[105] = {};
    int x = 0, i = 0;
    while(~scanf("%c", &arr[i])) {
        i += 1;
    }
    for (int j = 0; j <= i; j++) {
        if (arr[j] == 'A') x +=  1;
    }
    printf("%d", x);
    return 0;
}

