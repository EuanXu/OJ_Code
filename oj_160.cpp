/*************************************************************************
	> File Name: oj_160.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: 一  3/29 16:42:00 2021
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    double r, h, s1, s2, s3, s4;
    scanf("%lf %lf", &r, &h);
    s1 = PI * r * h;
    s2 = 2 * r * h;
    s3 = pow(2*pow(2*r, 2), 0.5) * h;
    s4 = 2 * (PI * r * r * 0.5 + pow(2* r, 2) * 0.5);
    printf("%.2lf", s1 + s2 + s3 + s4);
    return 0;
}

