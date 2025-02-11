#include<stdio.h>
#include"safeint.h"
int main(int argc, char** argv){
    struct SafeResult a = safeStrToInt(argv[1]);
    struct SafeResult b = safeStrToInt(argv[2]);
    struct SafeResult difference = safeSubstract(a.value, b.value);
    if(a.errorflag || b.errorflag){
        printf("Inputed numbers are not between the limits");
        return 0;
    }
    if(difference.errorflag){
        printf("The difference is not between the limits");
        return 0;
    }
    printf("a = %d\nb = %d\ndifference = %d\n", a.value, b.value, difference.value);
}