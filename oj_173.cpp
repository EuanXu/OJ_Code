/*************************************************************************
	> File Name: oj_173.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 2021 01:02:21 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char arr[10000] = {0};
	int n = 0;
	while (~scanf("%c", &arr[n])) {
		n += 1;
	}
    int word = 0, num = 0, k = 0, e = 0;
    for(int i = 0; i < strlen(arr); i++) {
        if (arr[i] == ' ') k += 1;
        else if (arr[i] >= '1' && arr[i] <= '9') num += 1;
        else if ((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122)) word += 1;
        else e += 1;
    }
    printf("%d %d %d %d", word, num, k, e-1);
    return 0;
}
