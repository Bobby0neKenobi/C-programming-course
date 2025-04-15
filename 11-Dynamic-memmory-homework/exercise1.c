#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main(){
    system("clear");
    float* ptr;
    int n;
    do{
        printf("Enter number of marks: ");
        scanf("%d", &n);
        system("clear");
        if(n < 0){
            printf("You entered an invalid number of marks");
        }
    }while(n < 0);
    ptr = (float*) calloc(n, sizeof(float));
    if (ptr == NULL) {
        printf("Error allocating memory\n");
        free(ptr);
        exit(1);
    }
    for(int i = 0; i < n; i ++){
        float a;
        do{
            printf("Enter mark №%d:", i + 1);
            scanf("%f", &a);
            system("clear");
            if(a > 6 || a < 2){
                printf('Invalid mark\n');
            }
        }while(a > 6 || a < 2);
        ptr[i] = a;
    }
    while(1){
        int mode;
        printf("Choose mode\n0-Exit\n1-Avarage mark\n2-Add mark\n3-Delete mark\n");
        scanf("%d", &mode);
        if(mode == 0){
            break;
        }else if(mode == 1){
            float avarage = 0;
            for(int i = 0; i < n; i++){
                avarage += ptr[i];
            }
            avarage = avarage / n;
            printf("The Average is: %f\n", avarage);
        }else if(mode == 2){
            float a;
            ptr = realloc(ptr, (n + 1) * sizeof(float));
            if (ptr == NULL) {
                printf("Error reallocating memory\n");
                free(ptr);
                exit(1);
            }
            do{
                printf("Enter mark №%d:", n + 1);
                scanf("%f", &a);
                system("clear");
                if(a > 6 || a < 2){
                    printf('Invalid mark\n');
                }
            }while(a > 6 || a < 2);
            n ++;
            ptr[n - 1] = a;
        }else if(mode == 3){
            if(n < 0){
                printf("There are 0 marks currently\n");
            }
            ptr = realloc(ptr, (n - 1) * sizeof(float));
            if (ptr == NULL) {
                printf("Error reallocating memory\n");
                free(ptr);
                exit(1);
            }
            n --;
        }
    }
    system("clear");
    free(ptr);
    return 0;
}