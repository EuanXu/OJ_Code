/*************************************************************************
	> File Name: oj_148.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 11:15:40 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char arr_o[55] = {0};
    char arr[55] = {0};
    int x = 0;
    while(~scanf("%c", &arr[x])) {
        x += 1;
    }
    for (int i = 0; i <= x; i++) {
        arr_o[i] = arr[x-2-i];
    }
    printf("%s", arr_o);
    return 0;
}

