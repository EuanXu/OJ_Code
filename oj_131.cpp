/*************************************************************************
	> File Name: oj_131.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Mar 2021 11:13:08 PM CST
 ************************************************************************/
#include <stdio.h>

void func(int n, int arr[]) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if arr[i] > max : max = arr[i];
        if arr[i] < min : min = arr[i];
    }
    printf("%d", max - min);
}

int main() {
    int num[105] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    func(n, num);
    return 0;
}

