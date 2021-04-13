/*************************************************************************
	> File Name: oj_205.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 03:37:51 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int arr[32][32];
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j][i];
        }
        printf("%d\n", sum);
    }
    return 0;
}

