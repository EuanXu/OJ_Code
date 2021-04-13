/*************************************************************************
	> File Name: oj_151.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 14 Mar 2021 08:20:03 PM CST
 ************************************************************************/
#include <stdio.h>

int func(char x, char y) {
    switch(x) {
        case 'Y': switch(y) {
            case 'Y': return 0;
            case 'O': return -1;
            case 'H': return 1;
        };
        case 'O': switch(y) {
            case 'Y': return 1;
            case 'O': return 0;
            case 'H': return -1;
        };
        case 'H': switch(y) {
            case 'Y': return -1;
            case 'O': return 1;
            case 'H': return 0;
        };
    }
}

int main() {
    char ml, mr, ll, lr;
    int x, y;
    scanf("%c %c", &ml, &mr);
    getchar();
    scanf("%c %c", &ll, &lr);
    if (func(ml, ll) == 1) {
        if (func(ml, lr) == -1) {
            if (func(mr, lr) == 1) printf("ming");
            else printf("li");
        }
        else printf("ming");
    }
    if (func(ml, ll) == 0) {
        if (func(mr, lr) == 1) printf("ming");
        else if (func(mr, lr) == 0) printf("tie");
        else printf("li");
    }
    if (func(ml, ll) == -1) {
        if (func(mr, ll) == 1) {
            if (func(mr, lr) == -1) printf("li");
            else printf("ming");
        }
        else printf("li");
    }
    return 0;
}

