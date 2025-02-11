#include <stdio.h>

#define ARRAY_SIZE 10

void power(int n, int cr, int num, int arr[]){
  if(cr==n){
    return;
  }
  arr[cr] = num;
  cr++;
  power(n, cr, num * 2, arr);
}

int main(){
    #if defined ARRAY_SIZE && ARRAY_SIZE < 11 && ARRAY_SIZE > 0
      int array[ARRAY_SIZE];
      power(ARRAY_SIZE, 0, 1, array);
      for(int i = 0; i < ARRAY_SIZE; i++){
        printf("%d\n", array[i]);
      }
    #else
      printf("The app doesn't support the array size you entered!\n");
    #endif
}