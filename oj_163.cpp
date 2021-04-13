/*************************************************************************
	> File Name: oj_163.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: 一  3/29 21:06:54 2021
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main() {
    double a, b, c;
    double x;
    scanf("%lf %lf %lf", &a, &b, &x);
    c = pow(pow(a, 2) + pow(b, 2) - (2 * a * b * cos(x / 180 * PI)), 0.5);
    printf("%.6lf", c);
    return 0;
}

