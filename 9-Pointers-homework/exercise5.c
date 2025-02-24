#include<stdio.h>
void swap(void *a, void *b){
    *((int*)a) = *((int*)a) + *((int*)b);
    *((int*)b) = *((int*)a) - *((int*)b);
    *((int*)a) = *((int*)a) - *((int*)b);
}

int compareasc(void * a, void * b){
    return *(int*)a > *(int*)b;
}

int comparedesc(void * a, void * b){
    return *(int*)a < *(int*)b;
}

void bubblesort(int a[], int (*compare) (void *, void *), void (*swapelements) (void *, void *)){
    int swapped;
    for (int i = 0; i < 10 - 1; i++) {
        swapped = 0;
        for (int j = 0; j < 10 - i - 1; j++) {
            if (compare(&a[j], &a[j + 1])) {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}

int main(){
    int a[10] = {1, 8, 2, 4, 6, 7, 3, 0, 9, 20};
    bubblesort(a, compareasc, swap);
    for(int i = 0; i < 10; i ++){
        printf("%d ", a[i]);
    }
    printf("\n");
    bubblesort(a, comparedesc, swap);
    for(int i = 0; i < 10; i ++){
        printf("%d ", a[i]);
    }
    printf("\n");
}