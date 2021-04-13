/*************************************************************************
	> File Name: oj_190.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Jan 2021 08:45:53 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 8000000

int prime[MAX_N + 5];

void init (int x) {
    int flag = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int k = 1; prime[k] <= x; k++) {
        flag += 1;
    }
    prime[0] = flag;
}

int search(int x) {
    for (int j = prime[0] / 2; j <= prime[0]; j++) {
        if (prime[j] == x) return 1;
    }
    return 0;
}

int main() {
    long long int n;
    int result = 0;
    scanf("%lld", &n);
    init(n);
    for (int i = 1; i <= prime[0] / 2 + 1; i++) {
        if (search(n - prime[i])) result += 1;
    }
    printf("%d", result);
    return 0;
}
