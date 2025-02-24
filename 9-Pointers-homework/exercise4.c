#include<stdio.h>
int compareasc(const void * a, const void * b){
    return *(int*)a > *(int*)b ? 1 : *(int*)a == *(int*)b ? 0 : -1;
}
int comparedesc(const void * a, const void * b){
    return *(int*)a > *(int*)b ? -1 : *(int*)a == *(int*)b ? 0 : 1;
}
int main(){
    const int a = 10, b = 5, c = 10, d = 20;
    printf("a > b => %d\n", compareasc(&a, &b));
    printf("a = c => %d\n", compareasc(&a, &c));
    printf("a < d => %d\n", compareasc(&a, &d));
    printf("a > b => %d\n", comparedesc(&a, &b));
    printf("a = c => %d\n", comparedesc(&a, &c));
    printf("a < d => %d\n", comparedesc(&a, &d));
}