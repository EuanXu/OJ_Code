/*************************************************************************
	> File Name: oj_150.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 09:54:07 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int arr[210][210];
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n-1; j >= 0; j--) {
			if (j == 0) printf("%d\n", arr[j][i]);
			else printf("%d ", arr[j][i]);
        }
        
    }
    return 0;
}


