/*************************************************************************
	> File Name: oj_174.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Thu 18 Mar 2021 07:46:49 PM CST
 ************************************************************************/
 #include<iostream>
using namespace std;

const int maxn = 1000;
char a[maxn];

int main(){
    char *p = a;
//    scanf("%s", a);
//    getline(cin, a);
    cin.getline(a, maxn);
    while(*p){
        if(*p == ' '){
            printf("%%20");
        }else{
            putchar(*p);
        }
        ++p;
    }
}
