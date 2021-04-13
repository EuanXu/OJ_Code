/*************************************************************************
	> File Name: oj_169.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Sat 20 Mar 2021 03:11:11 PM CST
 ************************************************************************/
 #include <stdio.h>
#include <string.h>


int main() {
    char arr[26];
	char word[35];
    int num[26], n, result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
		getchar();
        scanf("%c", &arr[i]);
        scanf("%d", &num[i]);
    }
	scanf("%s", &word);
	for (int i = 0; i < strlen(word); i++) {
		for (int j = 0; j < n; j++) {
			if (word[i] == arr[j]) result += num[j];
		}
	}
	printf("%d", result);
    return 0;
}

