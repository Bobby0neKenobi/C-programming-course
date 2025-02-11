#include<stdio.h>
#include<math.h>
int main(){
    long int arr[5] = {1, 3, 4, 7, 9};
    for(int i = 0; i < 5; i ++){
        arr[i] = pow(arr[i], 4);
    }
    for(int i = 0; i < 5; i ++){
        printf("%d ", arr[i]);
    }
}