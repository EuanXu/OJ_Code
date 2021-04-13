/*************************************************************************
	> File Name: 0j_146.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 10:32:00 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char arr[55] = {0};
    int f = 0;
    while(~scanf("%c", &arr[f])) {
        f += 1;
    }
    for (int i = 0; i <= f; i++) {
        if (arr[i] >= 65 && arr[i] < 90) arr[i] = arr[i] + 1;
		else if (arr[i] >= 97 && arr[i] < 122) arr[i] = arr[i] + 1;
        else if (arr[i] == 'Z') arr[i] = 'A';
        else if (arr[i] == 'z') arr[i] = 'a';
    }
    printf("%s", arr);
    return 0;
}

