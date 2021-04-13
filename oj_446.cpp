/*************************************************************************
	> File Name: oj_446.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 10:48:54 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
 
int main(){
	int n;
	scanf("%d",&n);
	int num[n][n];
	int k = ceil((double)n/2);	
	for(int j = k;j > 0;j--){
		for(int i = 0;i < n;i++){
			num[j-1][i] = j;
			num[n-j][i] = j;
			num[i][j-1] = j;
			num[i][n-j] = j;	
		}	
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			printf("%d",num[i][j]);
			if(j < n-1)printf(" ");
		}
		printf("\n");
	}
	return 0;
}


