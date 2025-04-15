#include<stdio.h>
int findLength(char * ptr){
    int length = 0;
    for (char * i = ptr; *i != '\0'; i++) {
        length++;
    }
    return length;
}
int main(){
    char arr [] = "Test";
    int length = findLength(arr);
    printf("%d", length);
}