#include<stdio.h>
#include<stdlib.h>
#include"helper.h"
int main(int argc, char** argv){
    int n = atoi(argv[1]);
    printf("%d", sum(n));
}