/*************************************************************************
	> File Name: oj_145.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 2021 12:31:53 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char arr[32][32];
    int n, max=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
		scanf("%s", &arr[i]);  
    }
	for (int j=0; j<n; j++) {
		if (strlen(arr[j]) > strlen(arr[max])) max = j; 
	}
	printf("%s ", arr[max]);
    
    return 0;
}
