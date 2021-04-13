/*************************************************************************
	> File Name: oj_203.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: 四  4/ 1 13:52:07 2021
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_N 10

#define swap(a, b) {\
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

int arr[MAX_N + 5][MAX_N + 5];

void output1(int m, int n) {
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 0; j < m; j++) {
            if (arr[j][i] > ans) ans = arr[j][i];
        }
        printf("%d\n", ans);
    }
    return ;
}

void quick(int *num, int l, int r) {
    while (l < r) {
        int x = l, y = r, z = num[(l + r) >> 1];
        do {
            while (num[x] > z) x++;
            while (num[y] < z) y--;
            if (x <= y) {
                swap(num[x], num[y]);
                x++, y--;
            }
        } while (x <= y);
        quick(num, l, y);
        l = x;
    }
    return ;
}

void sort(int m, int n) {
    int ave = 0, cnt = 0, k = 0;
    int *num = (int *)malloc(sizeof(int) * (m * n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            num[k++] = arr[i][j];
        }
    }
    quick(num, 0, k - 1);
    for (int i = 0; i < k; i++) {
        ave += num[i];
        i && printf(" ");
        printf("%d", num[i]);
    }
    printf("\n");
    ave = (ave + k / 2) / k;
    printf("%d\n", ave);
    for (int i = 0; i < k; i++) {
        cnt += (num[i] >= ave);
    }
    printf("%d\n", cnt);
    free(num);
    return ;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    output1(m, n);
    sort(m, n);
    return 0;
}

