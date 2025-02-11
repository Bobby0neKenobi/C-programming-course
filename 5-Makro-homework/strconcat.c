#include<stdio.h>
#include"mystring.h"
int main(int argc, char** argv){
    if(strlength(argv[1]) >= 50){
        printf("\n\033[31mWarning!!!\nThe first string you entered is over 50 characters!\nWe will concatenate the strings, but please don't do it again.\n\033[0m");
    }
    strconcat(argv[1], argv[2]);
    printf("\nstr1=%s\n\n", argv[1]);
}