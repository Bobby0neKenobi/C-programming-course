#include<stdio.h>
int main(){
    double a, b;
    scanf("%lf%lf", &a, &b);
    double * pa = &a;
    double * pb = &b;
    printf("The value of the address %p is %lf\n", pa, *pa);
    printf("The value of the address %p is %lf\n", pb, *pb);
}