#include<stdio.h>
typedef union oae{
    long odd;
    short even;
}oae;
int main(){
    oae arr[10];
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            arr[i].even = i;
        }else{
            arr[i].odd = i;
        }
    }
    printf("Odd:\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            printf("%ld\n", i, arr[i].odd);
        }
    }
    printf("\nEven\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%hd\n", i, arr[i].even);
        }
    }
}