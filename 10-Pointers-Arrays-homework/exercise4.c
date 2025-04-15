#include<stdio.h>
#define COLS 4
void printTable(int (* a) [COLS], int n){
    for(int i = 0; i < COLS; i ++){
        for(int j = 0; j < n; j ++){
      printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}
int main(){
    int arr [4][COLS] = {
        {11, 24, 31, 42},
        {88, 12, 34, 45},
        {55, 23, 46, 40},
        {40, 30, 20, 10}
    };
    printTable(arr, 4);
}