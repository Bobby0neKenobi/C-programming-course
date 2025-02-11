#include<stdio.h>
#include<string.h>
#include"transformation.h"

struct Transformation transformation(char arr[], int size){
    int num = 0;
    struct Transformation res;
    int s = 1;
    for(int i = 0; i < size; i++){
        if(i == 0){
            if(arr[i] == '-'){
                s = -1;
            }
            i++;
        }
        if(arr[i] - '0' > 9 || arr[i] - '0' < 0){
            res.result = 0;
            strcpy(res.err, "Invalid input string");
            return res;
        }
        num = num*10 + arr[i] - '0';
    }
    res.result = num * s;
    strcpy(res.err, "/0");
    return res;
}