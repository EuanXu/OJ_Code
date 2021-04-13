/*************************************************************************
	> File Name: oj_167.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Sat 20 Mar 2021 04:16:54 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_N 10000

int main() {
    char one[MAX_N];
	char two[MAX_N];
    int n, x;
    scanf("%s", &one);
	scanf("%d", &x);
    scanf("%s", &two);
	printf("%d\n", strlen(one));
    for(int i = 0; i < strlen(one); i++) {
		if (one[i] == 'a') {
			printf("%d\n", i+1); 
			break;
		}
    }
    for (int j = 0; j < strlen(one); j++) {
        
        if (j == x-1) {
            printf("%s", two);
        }
		printf("%c", one[j]);
    }
    return 0;
}

