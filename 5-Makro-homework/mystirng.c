#include<stdio.h>
#include"mystring.h"
int strlength(char arr[]){
    int i = 0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}
void strconcat(char arr1[], char arr2[]){
    int length1 = strlength(arr1);
    int length2 = strlength(arr2);
    for(int i = length1; i <= length1 + length2; i++){
        arr1[i] = arr2[i - length1];
    }
}
int strcompare(char arr1[], char arr2[]){
    int length1 = strlength(arr1);
    int length2 = strlength(arr2);
    int res = 0;
    if(length1 > length2){
        for(int i = 0; i < length2; i++){
            if(arr1[i] < arr2[i]){
                return -1;
            }else if(arr1[i] > arr2[i]){
                printf("%d %d", arr1[i], arr2[i]);
                return 1;
            }
        }
        return -1;
    }else if(length1 < length2){
        for(int i = 0; i < length1; i++){
            if(arr1[i] < arr2[i]){
                return -1;
            }else if(arr1[i] > arr2[i]){
                return 1;
            }
        }
        return 1;
    }else{
        for(int i = 0; i < length2; i++){
            if(arr1[i] < arr2[i]){
                return -1;
            }else if(arr1[i] > arr2[i]){
                return 1;
            }
        }
        return 0;
    }
}