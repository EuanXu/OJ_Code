/*************************************************************************
	> File Name: 0j_196.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Sat 20 Mar 2021 06:34:56 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    int step[51];
    scanf("%d",&n);
    step[1] = 0;
    step[2] = step[3] = 1;
    for (int i = 4; i <=n; i++){
        step[i] = step[i-2] + step[i-3] ; }
    printf("%d",step[n]);
    return 0;
}


