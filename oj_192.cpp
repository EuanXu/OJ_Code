/*************************************************************************
	> File Name: oj_192.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 13 Jan 2021 07:09:41 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

double func(double x) {
    return x * exp(x);
}

double binary_serach(double (*func)(double), int a){
    double  min = 0, max = a, mid;
    #define ESPL 1e-6
    while (fabs(min - max) > ESPL) {
        mid = (min + max) / 2.0;
        if (func(mid) < a) min = mid;
        else max = mid;
    }
    return min;
    #undef ESPL 
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%.4lf", binary_serach(func, a));
    return 0;
}
