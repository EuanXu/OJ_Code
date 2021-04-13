/*************************************************************************
	> File Name: oj_142.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 05:55:27 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100000

int prime[MAX_N + 5];
int primes[MAX_N + 5];

void is_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i; j <= MAX_N / i; j++) {
            prime[j * i] = 1;
        }
    }
}

int func(int x) {
	int y = 0, z = x;
	while(x) {
		y = y*10 + x%10;
		x /= 10;
	}
	if (y == z) return 1;
	else return 0;
} 

int main() {
    is_prime();
	int j = 1, z = 1;
	int a, b;
	int arr[10000] = {0};
	scanf("%d %d", &a, &b);
    for (int i = 1; i <= prime[0]; i++) {
		if (prime[i] >= a && prime[i] <= b) {
			primes[0] += 1;
			primes[j] = prime[i];
			j += 1;
		}
    }
	
	for (int j = 1; j <= primes[0]; j++) {
		if (func(primes[j]) == 1) {
			arr[0] += 1;
			arr[z] = primes[j];
			z += 1;
		}
	}
	
	for (int i = 1; i <= arr[0]; i++) {
		if (i==arr[0]) printf("%d", arr[i]);
		else printf("%d ", arr[i]);
	}
	
    return 0;
}

