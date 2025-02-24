#include<stdio.h>
void swap(void * a, void * b){
    *(int *)a = *(int *)b + *(int *)a;
    *(int *)b = *(int *)a - *(int *)b;
    *(int *)a = *(int *)a - *(int *)b;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a = %d  b = %d", a, b);
}