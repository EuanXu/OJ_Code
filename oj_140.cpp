/*************************************************************************
	> File Name: oj_140.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 01:07:40 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int line;
	scanf("%d", &line);
	int i;
	for (i = 0; i < line; i++)//打印line行
	{
		int j = 0;
		for (j = 0; j < line - 1 - i;j++)//打印空格
		{
			printf(" ");
		}
		for (j = 0;j < 2 * i + 1; j++)//打印*
		{
			printf("%c", i+65);
		}
			printf("\n");
		}
	for (i = 0; i < line-1; i++)//打印下半部分，打印line-1行
	{
		int j;
		for (j = 0; j < i + 1;j++)//打印空格
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (line-1-i) - 1; j++)//打印*
		{
			printf("%c", line-i-2+65);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
