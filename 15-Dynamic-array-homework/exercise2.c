#include <stdio.h>
#include<windows.h>
#include "DynamicArray.h"

void printArr(DynamicArray * dynArr) {
    for (int i = 0; i < dynArr->size; i++) {
      printf("%d ", dynArr->buffer[i]);
    }
    printf("\n");
  }

int main(){
    uint initialCapacity = 2;
    DynamicArray ucn = init(initialCapacity);
    while(1){
        int mode;
        printf("Choose mode\n0-Exit\n1-Add unique citizenship number\n2-Delete unique citizenship number\n3-Print all unique citizenship numbers\n");
        scanf("%d", &mode);
        switch (mode)
        {
        case 0:
            return 0;
        case 1:
            {
                DynArrType new;
                printf("Enter the unique citizenship number: ");
                scanf("%d", &new);
                pushBack(&ucn, new);
                break;
            }
        case 2:
            {
                DynArrType del;
                printf("Enter the unique citizenship number you want to delete: ");
                scanf("%d", &del);
                if(findId(&ucn, del) != -1){
                    pop(&ucn, findId(&ucn, del));
                }else{
                    printf("Unique citizenship number not found");
                    Sleep(1000);
                }
                break;
            }
        case 3:
            printArr(&ucn);
            Sleep(1000);
            break;
        default:
            printf("Invalid mode");
            break;
        }
        system("cls");
    }
}