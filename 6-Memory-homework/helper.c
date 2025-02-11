#include<stdio.h>
#include"helper.h"
int sum(int n){
    int s = 0;
    for(int i = 0; i <= n; i++){
        s += i;
    }
    return s;
}