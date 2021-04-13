/*************************************************************************
	> File Name: oj_176.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jan 2021 08:04:18 PM CST
 ************************************************************************/
#include <string.h>
#include <stdio.h>
int main() {
    char a[1000];
    char b[1000];
    char *p = a;//辅助变量p
    int count = 0;//用来记录子串出现的次数
    gets(a);//从键盘获取字符串a 
    gets(b);//从键盘获取字符串b 
    while((p = strstr(p,b)) != NULL)//找出字符串p中第一次出现字符串b的位置，找到就返回字符串b位置的指针（即返回字符串b在字符串a中的地址的位置 ）找不到就返回null 
    {
        count ++;
        p++;
    }
    printf("%d\n",count);
return 0;
 

}



