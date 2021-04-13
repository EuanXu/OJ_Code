/*************************************************************************
	> File Name: 0j_141.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 04:51:39 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        for (int j = 0; j < 2 * (abs(n - i)) + 1; j++) {
            if (i <= n) {
                for (int k = 0; k < i; k++) {
                    if (j == 0)
                    printf(" ");
                }
            }
            else {
                for (int k = 2 * n ; k > i; k--) {
                    if (j == 0)
                    printf(" ");
                }
            }
            int num = abs(n - i);
            if (i <= n){
                if (j <= num)
                 printf("%c",'A' + j + i );
                else
                printf("%c",'A' + 2 * num - j + i);
            }
            else {
                if (j <= num)
                printf("%c",'A' + 2 * n - i + j );
                else
                printf("%c",'A' + 2 * num - j + 2 * n - i );
            }  
            
        }
        printf("\n");
    }
	return 0;
}


