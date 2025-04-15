#include<stdio.h>
void strhalf(char * arr, char **ptr){
    int length = 0;
    for (char * i = arr; *i != '\0'; i++) {
        length++;
    }
    if(length % 2){
        length = length / 2 + 1;
    }else{
        length /= 2;
    }
    *ptr = arr + length;
    return;
}
int main(){
    char str [] = "Hello World";
    char *p;
    strhalf(str, &p);
    printf("%s", p);
    return 1;
}