/*************************************************************************
	> File Name: oj_448.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 03:08:04 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, num;
    int arr[105] = {0};
    int result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    for (int j = 0; j < n; j++) {
        if (arr[j] == num) {
            result = num;
            break;
        }
    }
    printf("%d", result);
    return 0;
}

