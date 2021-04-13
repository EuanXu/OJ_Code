/*************************************************************************
	> File Name: oj_137.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 12:26:57 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char words[27] = {0};
    int n;
    int x = 0;
    scanf("%d", &n);
    for (int i = 0; i < 26; i++) {
        words[i] = i+65;
    }
    printf("%s", words);
    while (n > 0) {
        for (int i = 0; i < n; i++) {
            printf("%c", words[x]);
            x += 1;
        }
        printf("\n");
        n -= 1;
    }
    return 0;
}

