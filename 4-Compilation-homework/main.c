#include<stdio.h>
#include"transformation.h"

int main(){
    char number[] = "-123";
    struct Transformation response = transformation(number, 4);
    printf("%d ", response.result);
    printf("%s\n", response.err);
    
    char number2[] = "-12a";
    struct Transformation response2 = transformation(number2, 4);
    printf("%d ", response2.result);
    printf("%s", response2.err);
}