#include<stdio.h>
#include"quadraticroots.h"
int main(){
    int a = 1, b = -4, c = 0;
    struct QuadraticRootsResult res1 = findroots(a, b, c);
    printf("%dx^2 + %dx + %d = 0\n", a, b, c);
    printf("x1=%lf x2=%lf %d\n", res1.x1, res1.x2, res1.norealroots);
    float d = 1, e = 4, f = 1;
    struct QuadraticRootsResult res2 = findroots(d, e, f);
    printf("%fx^2 + %fx + %f = 0\n", d, e, f);
    printf("x1=%lf x2=%lf %d\n", res2.x1, res2.x2, res2.norealroots);
    double g = 1, h = -4, i = -1;
    struct QuadraticRootsResult res3 = findroots(g, h, i);
    printf("%lfx^2 + %lfx + %lf = 0\n", g, h, i);
    printf("x1=%lf x2=%lf %d\n", res3.x1, res3.x2, res3.norealroots);
    double j = 1, k = -4, l = 5;
    struct QuadraticRootsResult res4 = findroots(j, k, l);
    printf("%lfx^2 + %lfx + %lf = 0\n", j, k, l);
    printf("x1=%lf x2=%lf %d\n", res4.x1, res4.x2, res4.norealroots);
}