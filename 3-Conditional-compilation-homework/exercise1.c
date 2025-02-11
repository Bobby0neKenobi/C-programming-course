#include <stdio.h>
#define DEBUG(ARR, N) for(int i = 0; i < N; i ++){printf("%d ", ARR[i]);}\
printf("\n");\
int sum = 0;\
for(int i = 0; i < N; i += 3){sum += ARR[i]; i == N - 1 ? printf("%d", ARR[i]) : printf("%d + ", ARR[i]);}\
printf(" = %d", sum);\

void sort(int arr[], int N){
  for(int i = 0; i < N; i ++){
    for(int j = i + 1; j < N; j ++){
      if(arr[i] > arr[j]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  #ifdef DEBUG
    DEBUG(arr, 10);
  #else
    int sum = 0;
    for(int i = 0; i < N; i += 3){sum += arr[i];}
    printf("%d", sum);
  #endif
}
int main(){
    int arr[10] = {2,1,2,4,6,5,9,7,8,3};
    sort(arr, 10);

}