#include<stdio.h>
#include<stdlib.h>
#include"helper.h"
int main(int argc, char** argv){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d", MAX(a, b));
}