#include<stdio.h>
int main(){
    int a = 12, b = 18;
    int i = 1;
    if(a > b){
        a += b;
        b = a - b;
        a = a - b;
    }
    while((a * i) % b){
        i++;
    }
    printf("%d", a * i);
}