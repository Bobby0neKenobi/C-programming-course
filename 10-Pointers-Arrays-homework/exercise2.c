#include<stdio.h>
void swap(int * a){
    *a = *a + *(a + 1);
    *(a + 1) = *a - *(a + 1);
    *a = *a - *(a + 1);
}
void sort(int arr[]){
    int i, j;
    int swapped;
    for (i = 0; i < 6 - 1; i++) {
        swapped = 0;
        for (j = 0; j < 6 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j]);
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}
int main(){
    int arr [6] = {2, 7, 8, 3, 54, 1};
    sort(arr);
    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
}