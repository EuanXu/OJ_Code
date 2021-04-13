/*************************************************************************
	> File Name: oj_199.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Jan 2021 10:21:12 AM CST
 ************************************************************************/
#include <stdio.h>

int arr[12];

int func(int x) {
    if (x < 10) return x;
    return arr[0]*func(x-1) + arr[1]*func(x-2) + arr[2]*func(x-3) + arr[3]*func(x-4) + arr[4]*func(x-5) + arr[5]*func(x-6) + arr[6]*func(x-7) + arr[7]*func(x-8) + arr[8]*func(x-9) + arr[9]*func(x-10);
}
int main() {
    int k, m;
    scanf("%d%d", &k, &m);
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", func(k));
    return 0;
}

