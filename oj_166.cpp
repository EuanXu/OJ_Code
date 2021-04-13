/*************************************************************************
	> File Name: oj_166.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Sat 20 Mar 2021 05:20:48 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_N 10000

int main() {
    char one[MAX_N];
	char two[MAX_N];
	char three[MAX_N+MAX_N];
    int n = 0;
	int x;
    scanf("%s", &one);
	scanf("%d", &x);
    scanf("%s", &two);
	printf("%d\n", strlen(one) > 100 ? 100 : strlen(one));
	int index = strlen(one) + strlen(two);
	for (int j = 0; j < strlen(one); j++) {
		if (j == x-1) {
			for (int i = 0; i < strlen(two); i++) {
				three[n] = two[i];
				n += 1;
			}
		}
		three[n] = one[j];
		n += 1;
	}
	printf("%s\n", three);
	int r = 0;
	while(index > 0){
		if (three[index - 1] == 'x') {
			r += 1;
			break;
		}
		r += 1;
		index -= 1;
	}
	printf("%d", r);
    return 0;
}

