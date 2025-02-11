#include <stdio.h>
int main(){
    int arr[9]={1,22,39,4,50,6,17,8,0};
    #if defined _WIN32
        for (int i = 0; i < 9 - 1; i++) {
            int swapped = 0;
            for (int j = 0; j < 9 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = 1;
                }
            }
            if (!swapped)
                break;
        }
    #elif defined __linux__
        for (int i = 0; i < 9 - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < 9; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    #elif defined __APPLE__
        for (int i = 1; i < 9; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    #endif
    for (int i = 0; i < 9; i++) {
      printf("%d\n", arr[i]);
    }
}