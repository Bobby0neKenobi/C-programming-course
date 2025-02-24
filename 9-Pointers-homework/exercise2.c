#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a, 100, stdin);
    char * p1;
    p1 = strchr(a, '\n');
    if(p1 != NULL){
        *p1 = '\0';
        printf("%s", a);
    }
}