/*************************************************************************
	> File Name: 0j_195.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Sat 20 Mar 2021 03:32:23 PM CST
 ************************************************************************/
#include <stdio.h>

int binary_search(int *arr, int n, int x) {
    int head = 0, tail = n, mid;
    while(head < tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == x) head = mid;
        else tail= mid - 1;
    }
    return arr[head];
}

int main() {
    int arr[], n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while(m--) {
        int x;
        scanf("%d", &x);
        printf("%d", binary_search(arr, n, x));
        m && printf(" ");
    }
    printf("\n");
    return 0;
}

