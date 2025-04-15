#include<stdio.h>
typedef unsigned long long ull;

ull reduce(ull arr[], int length, ull (*function)(ull, ull), ull start){
    if(length == 0){
        return start;
    }
    ull result = (*function)(start, arr[0]);
    for(int i = 0; i < length - 1; i++) arr[i] = arr[i + 1];
    return reduce(arr, length - 1, (*function), result);
}

ull add(ull a, ull b){
    return a + b;
}

int main(){
    ull arr [] = {1, 2, 4, 5};
    printf("%d", reduce(arr, 4, add, 0));
}