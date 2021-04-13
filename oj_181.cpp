/*************************************************************************
	> File Name: oj_181.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Jan 2021 06:32:11 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 90) str[i] = str[i] + 32;
        else str[i] = str[i] - 32;
    }
    printf("%s", str);
    return 0;
}

