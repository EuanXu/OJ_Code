/*************************************************************************
	> File Name: oj_204.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 03:31:54 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int arr[32][32];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i][i]);
    }
    return 0;
}

