#include<stdio.h>
#include<math.h>
#include"quadraticroots.h"
struct QuadraticRootsResult findroots(double a, double b, double c){
    struct QuadraticRootsResult res;
    double d = b * b + (-4 * c * a);
    if(d < 0){
        res.norealroots = 1;
        res.x1 = 0;
        res.x2 = 0;
        return res;
    }
    double x1 = (-sqrtl(d) - b) / (2 * a);
    double x2 = (sqrtl(d) - b) / (2 * a);
        res.norealroots = 0;
        res.x1 = x1;
        res.x2 = x2;
        return res;
}