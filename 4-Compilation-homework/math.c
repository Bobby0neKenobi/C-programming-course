#include"maths.h"

int fact(int a){
    int fact = 1;
    for(int i = a; i >= 1; i --){
        fact *= i;
    }
    return fact;
}